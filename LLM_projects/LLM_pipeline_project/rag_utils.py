import os 
from typing import List, Dict
from langchain import hub
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.document_loaders import DirectoryLoader, TextLoader, PyPDFLoader
from langchain_community.vectorstores import Chroma
from langchain_core.output_parsers import StrOutputParser
from langchain.schema.runnable import RunnableSequence, RunnablePassthrough, RunnableMap, RunnableLambda
from langchain_huggingface import HuggingFaceEmbeddings

import prompt_schemas as ps
import llm_utils as lu
from transformers import AutoTokenizer, AutoModelForCausalLM

def load_docs(path: str) -> List:

    """
    Loads documents for use in the RAG vector database. 
    
    Args:
        path: The directory path housing .txt or .pdf files

    Returns:
        A list of documents to be used in forming a vector database
    """
    print(f"RAG System is loading documents from {path}...")
    txt_loader = DirectoryLoader(path=path, 
                             glob="**/*.txt", 
                             loader_cls=TextLoader, 
                             show_progress=False)
    
    pdf_loader = DirectoryLoader(path=path, 
                                 glob="**/*.pdf",
                                 loader_cls=PyPDFLoader,
                                 show_progress=False)
    txt_docs = txt_loader.load()
    pdf_docs = pdf_loader.load()
    return txt_docs+pdf_docs

def make_db(documents: List,
            chunk_size: int = 100, 
            chunk_overlap: int = 10) -> Chroma:
    
    """
    From the initial list of documents, creates a Lanchain-compatible database.

    Args:
        documents: A list of documents of either .txt or .pdf form
        chunk_size: The size (in characters) of each chunk to be passed to the RAG chain from each document
        chunk_overlap: The overlap (in characters) that each chunk will have in relation to each other to increase resolution

    Returns:
        A vector database of type Chroma
    """

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
    
    return vectordb 

def make_rag_chain(model: AutoModelForCausalLM, 
                   tokenizer: AutoTokenizer, 
                   model_id: str, 
                   schema: str) -> RunnableSequence:
    
    """
    Sets up the final Langchain-based RAG chain system

    Args:
        model: A pre-trained LLM model.
        tokenizer: Pre-trained tokenizer to use on prompt.
        model_id: The model path (e.g. meta-llama/Llama-3.2-1B-Instruct).
        schema: A filepath to a .json file with the required schema.

    Returns:
        RunnableSequence that acts as a full RAG pipeline
    """

    def format_docs(docs: List)->str:
        return "\n\n".join(doc.page_content for doc in docs)
    
    def build_prompt(inputs: Dict)->str:
        context = inputs["context"]
        question = inputs["question"]

        ehr_text = f"{context}\n\nQuestion: {question}"

        payload = ps.get_llm_payload(
            model_name=model_id, 
            ehr_text=ehr_text, 
            schema=schema
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