# All-in-one LLM Code

This details the ongoing project to create a one-stop-shop for analysing and producing Electronic Health Records. This includes the ability to add X-shot prompting, structured output and RAG. This is a fully local system, so a locally downloaded LLM is required. </br>

There are two versions available. One is a command line interface, instructions for which are below. The other is a GUI that can be found as an executable in the ```dist``` directory called ```main_gui.exe```. The GUI can also be run from a terminal-like system using ```python main_gui.py``` after downloading the files here. Both options get the same results.

To install the necessary libraries, use the following in a terminal:

```pip install os random torch transformers json argparse typing langchain langchain-community langchain-core```


The "creds" library is a ```creds.py``` file that should be made with your access token saved as:

```ACCESS_TOKEN = <your token here>```

in the same directory as the rest of the code.</br>



## Usage

To use the executable, simply run it and use the GUI. 
When browsing for files or folders using the browse buttons, if you want to use an entire directory simply cancel the first browser window and use the second that pops up. PyQT6 has no native method for doing both at once, so this is a workaround. After initial conditions are set, click ```Run Model``` and the program will execute. The ```output``` box will show any information or errors during run-time.

To use in command line, the following must be present:

```python main.py -anapath <path to text to analyse> -model <model id>```

where "path to text to analyse" can either be a single file path, or a directory path. The EHRs need to be saved as .txt files (or at least readable as text files).

If adding X-Shot prompting or RAG, a directory where these examples can be found should be provided.

Help and other arguments can be found by using:

```python main.py --help```

A full list of arguments passable to the command line is given below:
- --example_path (-expath): Path of EHR examples. Either one file or folder path.
- --analysis_path (-anapath): Path of EHRs to be analysed. Either one file or folder path.
- --rag_on (-rag): Enable RAG.
- --rag_data (-ragdat): Path for data used in RAG (defaults to example data path).
- --add_shot_prompting (-shots): Enable X-shot prompting.
- --output_path (-outpath): Set explicit output path.
- --output_schema (-shema): Set a srtucture to the LLM output.
- --temperature (-temp): Set LLM temperature between 0-1. Defaults to 0.3.
- --top_p (-top_p): Set LLM Top P value between 0-1. Defaults to 0.5.
- --model_path (-model): Path to the model to be used. Defaults to meta-llama/Llama-3.2-1B-Instruct.
- --system_prompt (-sys): The general system prompt for the model. Either a string or .txt file with the prompt inside.
- --instruction_prompt (-instr): The general instruction prompt for the model. Either a string or a .txt file with the prompt inside.

For help with anything else, please contact **Dr Joe Davies** at: joe.m.davies@kcl.ac.uk