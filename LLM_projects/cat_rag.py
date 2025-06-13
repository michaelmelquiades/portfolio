import ollama
import tqdm
from tqdm import tqdm
import numpy as np
from numpy.linalg import norm

# Adds a chunk to the database. For simplicity we are just adding one line at a time here
def add_chunk_to_database(chunk, vector_db):
    embedding = ollama.embed(model=embedding_model, input=chunk)['embeddings'][0]
    vector_db.append((chunk, embedding))

# Compute the cosine similarity between chunk embedding and query embedding
def cosine_similarity(a, b):
    return np.dot(a, b)/(norm(a)*norm(b))

# The retrieval function
def retrieve(query, vector_db, top_n = 3):
    query_embedding = ollama.embed(model=embedding_model, input=query)['embeddings'][0]

    similarities = [(chunk, cosine_similarity(query_embedding, embedding)) for chunk, embedding in vector_db]
    similarities.sort(key=lambda x:x[1], reverse=True)

    return similarities[:top_n]


# Load in the dataset 
dataset = []
with open('cat-facts.txt', 'r') as file:
    dataset = file.readlines()
    print(f'Loaded {len(dataset)} entries. Meow.')

embedding_model = 'hf.co/CompendiumLabs/bge-base-en-v1.5-gguf'
language_model = 'hf.co/bartowski/Llama-3.2-1B-Instruct-GGUF'

vector_db = []
for i, chunk in tqdm(enumerate(dataset), 'Adding cat facts', total=len(dataset)):
    add_chunk_to_database(chunk, vector_db)

to_quit = True
while to_quit:
    # Let's run an input query!
    input_query = input('Ask me a catty question: ')
    
    if input_query.lower() == 'dog':
        print('DOG?! RUN!')
        to_quit = False
        continue
    
    retrieved_knowledge = retrieve(input_query, vector_db)

    instruction_prompt = f'''You are a helpful chatbot that loves cats.
    Use only the following pieces of context to answer the question. Do not make up any new information:
    {'\n'.join([f' - {chunk}' for chunk, similarity in retrieved_knowledge])}
    '''

    # Now use ollama and the Llama model to answer
    stream = ollama.chat(model=language_model, 
                        messages=[{'role':'system', 'content': instruction_prompt}, 
                                {'role':'user', 'content': input_query}
                                ], 
                                stream=True
                        )

    print('Catbot response:')
    for chunk in stream:
        print(chunk['message']['content'], end='', flush=True)
        
    print('\n')