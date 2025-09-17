import os
import random
import torch
from transformers import AutoTokenizer, AutoModelForCausalLM
import creds
import prompt_schemas as ps
import llm_utils as lu
import system_utils as su
import json

# TODO: Implement RAG with the gold standard examples
# TODO: pipeline this so we can get people to start using it to analyse directories

if __name__ == '__main__':
    
    ACCESS_TOKEN = creds.ACCESS_TOKEN
    
    args = su.parse_args()

    TEMP = args.temperature
    TOP_P = args.top_p
    MODEL_ID = args.model_path
    schema = args.output_schema
    example_path = args.example_path
    analysis_path = args.analysis_path

    tokenizer, model = lu.llm_setup(model_id = MODEL_ID, 
                                    access_token = ACCESS_TOKEN)
    
    if os.path.isdir(analysis_path):
        analysis_files = [os.path.join(analysis_path, f) for f in os.listdir(analysis_path)]
    else:
        analysis_files = [analysis_path]

    responses = {}

    for num, file_path in enumerate(analysis_files):
        with open(file_path, "r", encoding="utf-8") as PROMPT:
            full_prompt = ps.get_llm_payload(model_name=MODEL_ID, 
                                             ehr_text=PROMPT, 
                                             schema=schema)

        message_to_tokenize = full_prompt['messages']

        inputs = lu.tokenize_text(model, tokenizer, message_to_tokenize)
        # print(f'Tokenizing the following prompt:\n{message_to_tokenize}')

        # Generate the response
        response_text = lu.generate_response(model, inputs, tokenizer)
        
        responses[num] = response_text
        #print("\n--- LLM Response ---")
        #print(response_text)
    
    json.dump(responses, open("responses.json", "w"))