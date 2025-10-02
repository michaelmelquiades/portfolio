import os 
from typing import List
from langchain import hub
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.document_loaders import DirectoryLoader, TextLoader
from langchain_community.vectorstores import Chroma
from langchain_core.output_parsers import StrOutputParser
from langchain.schema.runnable import RunnablePassthrough, RunnableMap, RunnableLambda
from langchain_huggingface import HuggingFaceEmbeddings

def load_docs(path: str) -> List:
    loader = DirectoryLoader(path=path, 
                             glob="**/*.txt", 
                             loader_cls=TextLoader, 
                             show_progress=False)
    return loader.load()

def make_db(documents: List,
            chunk_size: int = 100, 
            chunk_overlap: int = 10):
    text_splitter = RecursiveCharacterTextSplitter(chunk_size=chunk_size, 
                                                   chunk_overlap=chunk_overlap)
    splits = text_splitter.split_documents(documents=documents)

    # TODO: Complete