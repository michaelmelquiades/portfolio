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

def get_llm_payload(
    model_name: str,
    ehr_text: str,
    system_prompt: str = GEN_SYSTEM_PROMPT,
    instruction: str = GEN_INSTRUCT_PROMPT,
    few_shot_examples: List[Dict[str, str]] = None,
    max_tokens: int = 256,
    save_prompt: bool = False
) -> Dict[str, Union[str, int, List]]:
    """
    Structures a prompt and EHR into the correct API payload for various LLMs.

    Args:
        model_name: The name of the model (e.g., 'gpt-4o', 'claude-3-5-sonnet-20240620').
        ehr_text: The Electronic Health Record text.
        system_prompt: The system-level instruction for the model.
        instruction: The specific task or question for the model.
        few_shot_examples: A list of message dictionaries for few-shot prompting, 
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
        if few_shot_examples:
            messages = few_shot_examples + messages

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
        
        messages = [
            {"role": "system", "content": system_prompt}
        ]
        
        # Add few-shot examples if they exist
        if few_shot_examples:
            messages.extend(few_shot_examples)
            
        messages.append({"role": "user", "content": user_content})

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