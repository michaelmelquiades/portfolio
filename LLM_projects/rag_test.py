import os 
import bs4 # Beautiful Soup is a library that makes it easy to scrape info from the web

from langchain import hub
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.document_loaders import WebBaseLoader # automated process of fetching and structuring web data for use in NLP tasks
from langchain_community.vectorstores import Chroma
from langchain_core.output_parsers import StrOutputParser
from langchain.schema.runnable import RunnablePassthrough, RunnableMap, RunnableLambda
from langchain_huggingface import HuggingFaceEmbeddings
from langchain.prompts import PromptTemplate

import creds
from transformers import AutoModelForCausalLM, AutoTokenizer
import torch

# Load documents
loader = WebBaseLoader(
    web_paths=("https://lilianweng.github.io/posts/2023-06-23-agent/",),
    bs_kwargs=dict(parse_only=bs4.SoupStrainer(
        class_=("post-content", "post-title", "post-header")
        )
    ),
)

docs = loader.load()

# Split the text
text_splitter = RecursiveCharacterTextSplitter(chunk_size=100, chunk_overlap=10)
splits = text_splitter.split_documents(docs)

# Make this local by using local embeddings
for doc in splits:
    doc.page_content = f"passage: {doc.page_content}"

embeddings = HuggingFaceEmbeddings(model_name = "intfloat/e5-base")

vectordb = Chroma.from_documents(splits, 
                                 embedding=embeddings, 
                                 persist_directory="./chromadb")

retriever = vectordb.as_retriever()

# Retrieval and Generation
prompt = """
You are an assistant for question-answering tasks. Use the following pieces of retrieved context to answer the question. If you don't know the answer, just say that you don't know. Use three sentences maximum and keep the answer concise.
Context: {context}
Question: {question}  
Answer:
"""
prompt_template = PromptTemplate(input_variables=["context", "question"], 
                                 template=prompt)

ACCESS_TOKEN = creds.ACCESS_TOKEN
model_id = "meta-llama/Llama-3.2-1B-Instruct"

model = AutoModelForCausalLM.from_pretrained(model_id,
                                            torch_dtype = torch.bfloat16,
                                            device_map = "auto", 
                                            token = ACCESS_TOKEN)

tokenizer = AutoTokenizer.from_pretrained(model_id)

def run_prompt(inputs):
    return prompt_template.format(**inputs)

prompt_runnable = RunnableLambda(run_prompt)

# Post-processing
def format_docs(splits):
    return "\n\n".join(doc.page_content for doc in splits)

def run_model(inputs: str):
    encoded = tokenizer(inputs, return_tensors="pt").to(model.device)
    with torch.no_grad():
        out_ids = model.generate(**encoded, max_new_tokens=1000)
    return tokenizer.decode(out_ids[0], skip_special_tokens=True)

model_runnable = RunnableLambda(run_model)

rag_chain = (
    RunnableMap(
    {"context":retriever | format_docs, 
     "question": RunnablePassthrough()
     })
    | prompt_runnable
    | model_runnable
    | StrOutputParser()
)

# Test
res = rag_chain.invoke("What is task decomposition?")
print(res)