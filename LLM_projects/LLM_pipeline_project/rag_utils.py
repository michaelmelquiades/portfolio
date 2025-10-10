import os 
from typing import List, Dict
from langchain import hub
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.document_loaders import DirectoryLoader, TextLoader
from langchain_community.vectorstores import Chroma
from langchain_core.output_parsers import StrOutputParser
from langchain.schema.runnable import RunnableSequence, RunnablePassthrough, RunnableMap, RunnableLambda
from langchain_huggingface import HuggingFaceEmbeddings

import prompt_schemas as ps
import llm_utils as lu
from transformers import AutoTokenizer, AutoModelForCausalLM

def load_docs(path: str) -> List:
    loader = DirectoryLoader(path=path, 
                             glob="**/*.txt", 
                             loader_cls=TextLoader, 
                             show_progress=False)
    return loader.load()

def make_db(documents: List,
            chunk_size: int = 100, 
            chunk_overlap: int = 10) -> Chroma:
    text_splitter = RecursiveCharacterTextSplitter(chunk_size=chunk_size, 
                                                   chunk_overlap=chunk_overlap)
    splits = text_splitter.split_documents(documents=documents)

    # The below splitting needs to happen to work best with the specific embeddings used
    for doc in splits:
        doc.page_content = f"passage: {doc.page_content}"

    embeddings = HuggingFaceEmbeddings(model_name = "intfloat/e5-base")

    vectordb = Chroma.from_documents(splits, 
                                     embedding=embeddings, 
                                     persist_directory="./chromadb")
    
    return vectordb #remember that we need to do retriever=vectordb.as_retriever() in the (?)main(?)

def make_rag_chain(model: AutoModelForCausalLM, 
                   tokenizer: AutoTokenizer, 
                   model_name: str, 
                   schema_path: str) -> RunnableSequence:
    
    def format_docs(docs: List)->str:
        return "\n\n".join(doc.page_content for doc in docs)
    
    def build_prompt(inputs: Dict)->str:
        context = inputs["context"]
        question = inputs["question"]

        ehr_text = f"{context}\n\nQuestion: {question}"

        payload = ps.get_llm_payload(
            model_name=model_name, 
            ehr_text=ehr_text, 
            schema=schema_path
        )

        prompt_text = "\n".join(msg["content"] for msg in payload["messages"])
        return prompt_text
    
    def generate_locally(prompt_text: str):
        inputs = lu.tokenize_text(model, tokenizer, prompt_text)
        outputs = lu.generate_response(model, inputs, tokenizer)
        return outputs
    
    rag_chain = (
        RunnableMap({
            "context": RunnablePassthrough(),
            "question": RunnablePassthrough()
        })
        | RunnableLambda(build_prompt)
        | RunnableLambda(generate_locally)
        | StrOutputParser()
    )

    return rag_chain