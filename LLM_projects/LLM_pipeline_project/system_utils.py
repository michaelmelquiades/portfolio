import argparse

def parse_args() -> argparse.Namespace:

    """
    Create the command line arguments and provide descriptions.

    Args:
        None
    
    Returns:
        A set of arguments to be used in the command line pipeline.
    """

    parser = argparse.ArgumentParser(description="LLM Pipeline")
    parser.add_argument("-expath", "--example_path", type=str, default=None, help="Path of EHR examples. Either one file or folder path.")
    parser.add_argument("-anapath", "--analysis_path", type=str, required=True, help="Path of EHRs to be analysed. Either one file or folder path.")
    parser.add_argument("-rag", "--rag_on", action="store_true", help="Enable RAG.")
    parser.add_argument("-ragdat", "--rag_data", type=str, help="Path for data used in RAG (defaults to example data path).")
    parser.add_argument("-few", "--few_shot_on", action="store_true", help="Enable few-shot prompting")
    parser.add_argument("-outpath", "--output_path", type=str, help="Set explicit output path.")
    
    parser.add_argument("-temp", "--temperature", type=float, default=0.3, help="Set LLM temperature between 0-1. Defaults to 0.3.")
    parser.add_argument("-topp", "--top_p", type=float, default=0.5, help="Set LLM Top P value between 0-1. Defaults to 0.5.")
    parser.add_argument("-model", "--model_path", type=str, default="meta-llama/Llama-3.2-1B-Instruct", help="Path to the model to be used. Defaults to meta-llama/Llama-3.2-1B-Instruct.")

    return parser.parse_args()