import os
import torch
from transformers import AutoTokenizer, AutoModelForCausalLM
import creds
import prompt_schemas as ps
import llm_utils as lu
import system_utils as su

# Sort out prompt schema


# TODO: Implement RAG with the gold standard examples
# TODO: pipeline this so we can get people to start using it to analyse directories

if __name__ == '__main__':
    
    ACCESS_TOKEN = creds.ACCESS_TOKEN
    
    args = su.parse_args()
    TEMP = args.temperature
    TOP_P = args.top_p
    MODEL_ID = args.model_path

    tokenizer, model = lu.llm_setup(model_id = MODEL_ID, 
                                    access_token = ACCESS_TOKEN)
    
    PROMPT = "Hello, this is Dr Who and my patient Mr Bond had 3 seizures this year"
    full_prompt = ps.get_llm_payload(model_name=MODEL_ID, ehr_text=PROMPT)

    message_to_tokenize = full_prompt['messages']

    inputs = lu.tokenize_text(model, tokenizer, message_to_tokenize)
    # print(f'Tokenizing the following prompt:\n{message_to_tokenize}')

    # Generate the response
    response_text = lu.generate_response(model, inputs, tokenizer)
    print("\n--- LLM Response ---")
    print(response_text)