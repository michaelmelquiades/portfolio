#Set up our import libraries
import pandas as pd #pandas is going to handle our data engineering (dataframes etc)
import os #os allows us to read in from file directories
import h5py #h5py will allow us to make hdf5 files which are a great way of storing posix (/file/to/path/) data
import numpy as np #numpy is the bread and butter of numerical python! numpy arrays are low-weight and easily stored

#csv_to_df: converts a directory of csv files to dataframe and saves as a pkl (pickle) file (saves the instructions for making it again)
def csv_to_df(directory):
    data = []    
    for fname in os.scandir(directory): #we scan the full directory for csvs and fill our data arrays with them
        with open(fname, 'r') as file:
            for line in file.readlines():
                line = line.replace(';', ',')
                line = line.rstrip(',\n')
                line = line.split(',')
                data.append(line)
    
    #Find the longest line in the data 
    longest_line = max(data, key = len)
        
    #Set the maximum number of columns
    max_col_num = len(longest_line)

    #Set the columns names
    col_names = ['event_ID', 'process_ID', 'event_weight', 'MET', 'MET_Phi']

    for i in range(1, (int((max_col_num-5)/5))+1):
        col_names.append('obj'+str(i))
        col_names.append('E'+str(i))
        col_names.append('pt'+str(i))
        col_names.append('eta'+str(i))
        col_names.append('phi'+str(i))

    #Create a dataframe from the list, using the column names from before
    df = pd.DataFrame(data, columns=col_names)
    df.fillna(value=pd.np.nan, inplace=True)
    
    #Pickle the dataframe to keep it fresh
    p_path = 'my_df.pkl'
    df.to_pickle(p_path)
    
    return df

##############################################################################################

#same as above but to numpy arrays
def csv_to_np(directory):
    data = []    
    for fname in os.scandir(directory):
        with open(fname, 'r') as file:
            for line in file.readlines():
                line = line.replace(';', ',')
                line = line.rstrip(',\n')
                line = line.split(',')
                data.append(line)
    
    #Find the longest line in the data 
    longest_line = max(data, key = len)
        
    #Set the maximum number of columns
    max_col_num = len(longest_line)

    #Set the columns names
    col_names = ['event_ID', 'process_ID', 'event_weight', 'MET', 'MET_Phi']

    for i in range(1, (int((max_col_num-5)/5))+1):
        col_names.append('obj'+str(i))
        col_names.append('E'+str(i))
        col_names.append('pt'+str(i))
        col_names.append('eta'+str(i))
        col_names.append('phi'+str(i))

    #Convert everything into numpy arrays
    data = np.array(data, dtype='object')
    col_names = np.array(col_names)
    
    return data, col_names

##############################################################################################

#same as above but to hf5 files
def csv_to_hdf5(directory):
    data = []    
    for fname in os.scandir(directory):
        with open(fname, 'r') as file:
            for line in file.readlines():
                line = line.replace(';', ',')
                line = line.rstrip(',\n')
                line = line.split(',')
                data.append(line)
    
    #Find the longest line in the data 
    longest_line = max(data, key = len)
        
    #Set the maximum number of columns
    max_col_num = len(longest_line)

    #Set the columns names
    col_names = ['event_ID', 'process_ID', 'event_weight', 'MET', 'MET_Phi']

    for i in range(1, (int((max_col_num-5)/5))+1):
        col_names.append('obj'+str(i))
        col_names.append('E'+str(i))
        col_names.append('pt'+str(i))
        col_names.append('eta'+str(i))
        col_names.append('phi'+str(i))

    #Create a dataframe from the list, using the column names from before
    df = pd.DataFrame(data, columns=col_names)
    df.fillna(value=pd.np.nan, inplace=True)


    #hdf5 code that will sort it into:
    #event_ID, process_ID, event_weight, MET_values (MET and MET_Phi) and Objects with variable values
    indices = [index for index, val in enumerate(col_names) if val.startswith('obj')] 
    list_of_lists = [col_names[i: j] for i, j in zip([0] + indices, indices + ([len(col_names)] if indices[-1] != len(col_names) else []))]

    #Change the path below for a specific name for the hf5 file
    out_file = h5py.File('data.hf5', 'w')

    dt = h5py.special_dtype(vlen = str)

    out_file.create_dataset('event_ID', data = df['event_ID'].astype('float16'), compression = 'gzip')
    out_file.create_dataset('process_ID', data = df['process_ID'], compression = 'gzip', dtype = dt)
    out_file.create_dataset('event_weight', data = df['event_weight'].astype('int'), compression = 'gzip')
    out_file.create_dataset('MET_values', data = df[['MET', 'MET_Phi']].astype('float16'), compression = 'gzip')

    for entry in list_of_lists[1:]:
        out_file.create_dataset(entry[0], data = df[entry], compression = 'gzip', dtype = dt)

    out_file.close()
    
##############################################################################################

#doing the same as csv_to_df but with a single csv
def single_csv_to_df(path):
    data = []
    with open(path, 'r') as file:
            for line in file.readlines():
                line = line.replace(';', ',')
                line = line.rstrip(',\n')
                line = line.split(',')
                data.append(line)
    
    #Find the longest line in the data
    longest_line = max(data, key = len)
        
    #Set the maximum number of columns
    max_col_num = len(longest_line)

    #Set the columns names
    col_names = ['event_ID', 'process_ID', 'event_weight', 'MET', 'MET_Phi']

    for i in range(1, (int((max_col_num-5)/5))+1):
        col_names.append('obj'+str(i))
        col_names.append('E'+str(i))
        col_names.append('pt'+str(i))
        col_names.append('eta'+str(i))
        col_names.append('phi'+str(i))

    #Create a dataframe from the list, using the column names from before
    df = pd.DataFrame(data, columns=col_names)
    df.fillna(value=pd.np.nan, inplace=True)
    
    #Pickle the dataframe to keep it fresh
    p_path = 'my_df.pkl'
    df.to_pickle(p_path)
    
    return df

############################################################################################

#same as csv_to_np but with a single csv
def single_csv_to_np(path):
    data = []    
    with open(path, 'r') as file:
            for line in file.readlines():
                line = line.replace(';', ',')
                line = line.rstrip(',\n')
                line = line.split(',')
                data.append(line)
    
    #Find the longest line in the data 
    longest_line = max(data, key = len)
        
    #Set the maximum number of columns
    max_col_num = len(longest_line)

    #Set the columns names
    col_names = ['event_ID', 'process_ID', 'event_weight', 'MET', 'MET_Phi']

    for i in range(1, (int((max_col_num-5)/5))+1):
        col_names.append('obj'+str(i))
        col_names.append('E'+str(i))
        col_names.append('pt'+str(i))
        col_names.append('eta'+str(i))
        col_names.append('phi'+str(i))

    #Convert everything into numpy arrays
    data = np.array(data, dtype='object')
    col_names = np.array(col_names)
    
    return data, col_names


############################################################################################

#same as csv_to_hdf5 but with a single csv
def single_csv_to_hdf5(path):
    data = []
    with open(path, 'r') as file:
            for line in file.readlines():
                line = line.replace(';', ',')
                line = line.rstrip(',\n')
                line = line.split(',')
                data.append(line)
    
    #Find the longest line in the data
    longest_line = max(data, key = len)
        
    #Set the maximum number of columns
    max_col_num = len(longest_line)

    #Set the columns names
    col_names = ['event_ID', 'process_ID', 'event_weight', 'MET', 'MET_Phi']

    for i in range(1, (int((max_col_num-5)/5))+1):
        col_names.append('obj'+str(i))
        col_names.append('E'+str(i))
        col_names.append('pt'+str(i))
        col_names.append('eta'+str(i))
        col_names.append('phi'+str(i))

    #Create a dataframe from the list, using the column names from before
    df = pd.DataFrame(data, columns=col_names)
    df.fillna(value=pd.np.nan, inplace=True)
    

    #hdf5 code that will sort it into:
    #event_ID, process_ID, event_weight, MET_values (MET and MET_Phi) and Objects with variable values
    indices = [index for index, val in enumerate(col_names) if val.startswith('obj')] 
    list_of_lists = [col_names[i: j] for i, j in zip([0] + indices, indices + ([len(col_names)] if indices[-1] != len(col_names) else []))]

    #Change the path below for a specific name for the hf5 file
    out_file = h5py.File('data.hf5', 'w')

    dt = h5py.special_dtype(vlen = str)

    out_file.create_dataset('event_ID', data = df['event_ID'].astype('float16'), compression = 'gzip')
    out_file.create_dataset('process_ID', data = df['process_ID'], compression = 'gzip', dtype = dt)
    out_file.create_dataset('event_weight', data = df['event_weight'].astype('int'), compression = 'gzip')
    out_file.create_dataset('MET_values', data = df[['MET', 'MET_Phi']].astype('float16'), compression = 'gzip')

    for entry in list_of_lists[1:]:
        out_file.create_dataset(entry[0], data = df[entry], compression = 'gzip', dtype = dt)

    out_file.close()
