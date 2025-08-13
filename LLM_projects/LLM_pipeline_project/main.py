import os
import torch
from transformers import AutoTokenizer, AutoModelForCausalLM

import prompt_schemas as ps

TEMP = 0.3
TOP_P = 0.5

# Specify the model
MODEL_ID = "meta-llama/Llama-3.2-1B-Instruct"
print(f"Loading model: {MODEL_ID}")

# Load tokenizer and model
tokenizer = AutoTokenizer.from_pretrained(MODEL_ID)
model = AutoModelForCausalLM.from_pretrained(MODEL_ID, 
                                             torch_dtype = torch.bfloat16, 
                                             device_map = "auto")
print("Model and tokenizer loaded successfully.")

# Sort out prompt schema
PROMPT = "Hello, this is Dr Who and my patient Mr Bond had 3 seizures this year"
full_prompt = ps.get_llm_payload(model_name=MODEL_ID, ehr_text=PROMPT)

message_to_tokenize = full_prompt['messages']
input_ids = tokenizer.apply_chat_template(
    message_to_tokenize, 
    add_generation_prompt = True, 
    return_tensors = "pt"
).to(model.device)

# Generate the response
outputs = model.generate(
    input_ids, 
    max_new_tokens = 256, 
    eos_token_id = tokenizer.eos_token_id, 
    do_sample = False, # We don't really want natural/creative responses
    temperature = TEMP,
    top_p = TOP_P
)

# Decode the response
response_ids = outputs[0][input_ids.shape[-1]:]
response_text = tokenizer.decode(response_ids, skip_special_tokens=True)

print("\n--- LLM Response ---")
print(response_text)