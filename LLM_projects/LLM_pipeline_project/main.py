import os
import random
import torch
from transformers import AutoTokenizer, AutoModelForCausalLM
import creds
import prompt_schemas as ps
import llm_utils as lu
import system_utils as su
import rag_utils as ru
import json

if __name__ == '__main__':
    
    ACCESS_TOKEN = creds.ACCESS_TOKEN
    
    args = su.parse_args()

    TEMP = args.temperature
    TOP_P = args.top_p
    MODEL_ID = args.model_path
    schema = args.output_schema
    example_path = args.example_path
    analysis_path = args.analysis_path
    rag_on = args.rag_on
    rag_data_path = args.rag_data or example_path


    tokenizer, model = lu.llm_setup(model_id = MODEL_ID, 
                                    access_token = ACCESS_TOKEN)
    
    if os.path.isdir(analysis_path):
        analysis_files = [os.path.join(analysis_path, f) for f in os.listdir(analysis_path) if f.endswith(".txt")]
    else:
        analysis_files = [analysis_path]

    if example_path:
        if os.path.isdir(example_path):
            example_files = [os.path.join(example_path, f) for f in os.listdir(example_path) if f.endswith(".txt")]
        else:
            example_files = [example_path]

    responses = {}

    if rag_on:
        print("[INFO] Rag enabled. Building of loading vector database...")
        docs = ru.load_docs(rag_data_path)
        vectordb = ru.make_db(docs)
        retriever = vectordb.as_retriever()

        rag_chain = ru.make_rag_chain(
            model=model, 
            tokenizer=tokenizer, 
            model_name=MODEL_ID,
            schema_path=schema
        )

    for num, file_path in enumerate(analysis_files):
        with open(file_path, "r", encoding="utf-8") as f:
            ehr_text = f.read()

        if rag_on:
            # Retrieve context and generate via RAG chain
            print(f"[INFO] Running RAG for file {file_path}...")
            query = f"Analyse this patient's EHR:\n\n{ehr_text}"
            context_docs = retriever.invoke(query)

            result = rag_chain.invoke({
                "context": context_docs,
                "question": "Summarise the seizure frequency and relevant events."
            })
            responses[num] = result

        else:
            # Standard pipeline (non-RAG)
            print(f"[INFO] Running standard LLM generation for file {file_path}...")

            if args.add_shot_prompting:
                print(f"[INFO] Running X-Shot prompting...")
                if example_path:
                    full_prompt = ps.get_llm_payload(
                        model_name=MODEL_ID,
                        ehr_text=ehr_text,
                        schema=schema
                    )
                else:
                    raise ValueError("No example(s) provided for X-shot prompting.")
            else:
                full_prompt = ps.get_llm_payload(
                    model_name=MODEL_ID,
                    ehr_text=ehr_text,
                    schema=schema
                )
                
            message_to_tokenize = "\n".join(msg["content"] for msg in full_prompt["messages"])

            inputs = lu.tokenize_text(model, tokenizer, message_to_tokenize)

            # Generate the response
            response_text = lu.generate_response(model, inputs, tokenizer)
            
            responses[num] = response_text
    
    output_path = args.output_path or "responses.json"
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(responses, f)

    print(f"\nAll responses saved to {output_path}")