import json
from typing import Dict, List, Union

# General system prompt. Designed to make responses more closely aligned with neuroscience and epilepsy.
GEN_SYSTEM_PROMPT = """
You are an expert neuroscientist and clinician with an expertise in epilepsy. 
You are attempting to pull information from, and understand, an Electronic Health Record that is given to you in this prompt.
You never lie, make up sources, or disobey a given schema.
"""

# General instruction prompt.
GEN_INSTRUCT_PROMPT = """
Analyse the following text for information about seizure frequency, and report a value per month.
"""

def add_struct_gen(prompt: str, 
                   schema: str) -> str:
    """
    Structures the output of some LLM call to a given JSON schema

    Args:
        prompt: The instruction prompt to be given to the LLM.
        schema: A filepath to a .json file with the required schema.
    
    Returns:
        String-like prompt with the schema added on to the end.
    """
    with open(schema, 'r') as f:
        schema = json.load(f)
    new_prompt = f"{prompt}\nRespond ONLY in valid JSON format, no extra text, according to the following schema:\n{schema}\n"
    
    return new_prompt

def get_llm_payload(
    model_name: str,
    ehr_text: str,
    system_prompt: str = GEN_SYSTEM_PROMPT,
    instruction: str = GEN_INSTRUCT_PROMPT,
    shot_examples: List = None,
    max_tokens: int = 256,
    schema: str = "",
    save_prompt: bool = False
) -> Dict[str, Union[str, int, List]]:
    """
    Structures a prompt and EHR into the correct API payload for various LLMs.

    Args:
        model_name: The name of the model (e.g., 'gpt-4o', 'claude-3-5-sonnet-20240620').
        ehr_text: The Electronic Health Record text.
        system_prompt: The system-level instruction for the model.
        instruction: The specific task or question for the model.
        shot_examples: A list of message dictionaries for X-shot prompting, 
                           e.g., [{'role': 'user', 'content': '...'}, {'role': 'assistant', 'content': '...'}].
        max_tokens: The maximum number of tokens for the response.
        save_prompt: If True, saves the generated payload to a JSON file.

    Returns:
        A dictionary representing the JSON payload for the API request.
    """
    model_lower = model_name.lower()
    payload = {}
    
    # Most modern APIs (OpenAI, Llama, Mistral, Qwen, DeepSeek) are OpenAI-compatible.
    # Anthropic's Claude is the main exception.
    
    if "claude" in model_lower:
        # --- Anthropic (Claude) Specific Formatting ---
        # System prompt is a top-level parameter.
        # It's good practice to wrap user-provided documents in XML tags for Claude.
        user_content = f"<instruction>\n{instruction}\n</instruction>\n\n<document>\n{ehr_text}\n</document>"

        messages = [{"role": "user", "content": user_content}]
        
        # Add few-shot examples if they exist
        if shot_examples:
            messages[0]["content"] = f"{messages[0]["content"]}\nHere are examples:\n"
            for num, example in enumerate(shot_examples, start=1):
                with open(example, "r", encoding="utf-8") as shot:
                    messages[0]["content"] += f"Example {num}: {shot}\n"

        if schema:
            user_content = add_struct_gen(prompt=messages[0]["content"], 
                                          schema=schema)

        payload = {
            "model": model_name,
            "max_tokens": max_tokens,
            "system": system_prompt,
            "messages": messages
        }

    else:
        # --- Default OpenAI-Compatible Formatting ---
        # This works for GPT, Llama, Mistral, Qwen, DeepSeek, etc.
        # The system prompt is the first message in the list.
        user_content = f"{instruction}\n\n{ehr_text}"
        
        if schema:
            user_content = add_struct_gen(prompt=user_content, 
                                          schema=schema)

        messages = [
            {"role": "system", "content": system_prompt}
        ]
        
        messages.append({"role": "user", "content": user_content})

        # Add few-shot examples if they exist
        if shot_examples:
            for example in shot_examples:
                with open(example, "r", encoding="utf-8") as shot:
                    messages.append({"role":"assistant", 
                                     "content":shot})

        payload = {
            "model": model_name,
            "max_tokens": max_tokens,
            "messages": messages
        }

    # Save the final payload if requested
    if save_prompt:
        file_name = f"structured_payload_{model_name.replace('/', '_')}.json"
        with open(file_name, "w", encoding="utf-8") as f:
            json.dump(payload, f, indent=4)
        print(f"Payload saved to {file_name}")
            
    return payload