from typing import Dict, List, Union, Tuple
from transformers import (AutoTokenizer, 
                          AutoModelForCausalLM, 
                          PreTrainedTokenizer, 
                          PreTrainedModel)
from transformers.tokenization_utils_base import BatchEncoding
import torch
import creds

def llm_setup(model_id: str, 
              access_token: str) -> Tuple[PreTrainedTokenizer, PreTrainedModel]:

    """
    Sets up both the tokenizer and LLM model to be used in the pipeline.

    Args:
        model_id: The model path (e.g. meta-llama/Llama-3.2-1B-Instruct).
        access_token: The given huggingface access token.

    Returns:
        A tokenizer and LLM model.
    """
    print(f"Loading model: {model_id}...")
    
    tokenizer = AutoTokenizer.from_pretrained(model_id)
    model = AutoModelForCausalLM.from_pretrained(model_id,
                                                 torch_dtype = torch.bfloat16,
                                                 device_map = "auto", 
                                                 token = access_token)
    
    # Setting a pad token if we don't have one
    if tokenizer.pad_token is None:
        tokenizer.pad_token = tokenizer.eos_token

    print("Model and tokenizer loaded successfully.")

    return tokenizer, model

def tokenize_text(model: PreTrainedModel,
                  tokenizer: PreTrainedTokenizer, 
                  message_to_tokenize: str) -> BatchEncoding:
    
    """
    Converts the full prompt into an encoding to be passed onto the model. 
    The inputs are also cast to the same processing unit as the model is on.

    Args:
        model: A pre-trained LLM model.
        tokenizer: Pre-trained tokenizer to use on prompt.
        message_to_tokenize: The full prompt to be tokenized

    Returns:
        Tokenized and encoded message to be passed to the model.
    """

    formatted_prompt = tokenizer.apply_chat_template(
        message_to_tokenize, 
        add_generation_prompt = True, 
        tokenize = False
    )

    inputs = tokenizer(
        formatted_prompt,
        return_tensors = "pt",
        padding = True,
        truncation = True
    ).to(model.device)

    return inputs

def generate_response(model: PreTrainedModel, 
                      inputs: BatchEncoding,
                      tokenizer: PreTrainedTokenizer, 
                      temperature: float = 0.3, 
                      top_p: float = 0.5) -> torch.Tensor:
    
    """
    Generates the response from a prompt passed to the LLM.

    Args:
        model: A pre-trained LLM model.
        inputs: An encoded, tokenized prompt.
        tokenizer: Pre-trained tokenizer to use on prompt.
        temperature: The value for the temperature parameter in the model, between 0 and 1.
        top_p: The value to be given as the Top P parameter in the model, between 0 and 1.

    Returns:
        The textual response from the prompt being given to the model.
    """

    outputs = model.generate(
        **inputs, 
        max_new_tokens = 256, 
        do_sample = True,
        temperature = temperature,
        top_p = top_p
    )

    # Decode the response
    response_ids = outputs[0][inputs['input_ids'].shape[1]:]
    response_text = tokenizer.decode(response_ids, skip_special_tokens=True)

    return response_text