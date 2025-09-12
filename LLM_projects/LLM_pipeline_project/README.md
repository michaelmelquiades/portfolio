\# LLM Project

This details the ongoing project to create a one-stop-shop for analysing and producing Electronic Health Records. </br>

To install the necessary libraries, use the following in a terminal:

```pip install os random torch transformers json argparse typing```



The "creds" library is a ```creds.py``` file that should be made with your access token saved as:

```ACCESS_TOKEN = <your token here>```

in the same directory as the rest of the code.</br>



\# Usage

So far, the pipeline can only be used to assess a given Electronic Health Record or records by using a zero-shot prompt. </br>

To use in command line:

```python main.py -anapath <path to text to analyse> -model <model id>```

where "path to text to analyse" can either be a single file path, or a directory path. The EHRs need to be saved as .txt files (or at least readable as text files).



Help and other arguments can be found by using:

```python main.py --help```




