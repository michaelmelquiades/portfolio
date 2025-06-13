######################################################################################################################################
"""
This program is the modular pipeline for the creation of a machine learning algorithm from raw EEG data (in the .edf file format). It
contains elements that pertain to pre-processing, feature extraction, plotting and machine learning with options to do go through all 
of these, or pick and choose only one or two. 
Function/terminal arguments will be described using the nomenclature:
- <variable_name> (<variable_type>): <variable description>
==============
Initialisation
==============
This program is run in either powershell or terminal by using the command:
python master_pipeline.py <arguments>

==================
Terminal Arguments
==================
These are found in the function parse_args().
--strip (bool): indicates whether channel names needs to be stripped of reference information
--no_processing (bool): indicates that the program should not do any pre-processing
--no_extraction (bool): indicates that the program should not do any feature extraction
--no_learning (bool): indicates that the program should not to any machine learning
--hemisphere (string): which hemisphere of the brain the data comes from
--verbosity (int): decide on the verbosity of the pipeline output
--dataframe_path (string): file path of a dataframe that has already been made so as to avoid pre-processing
--window_size (float): size (in seconds) of the sliding window for use in epoching
--overlap_size (float): size (in seconds) of the window slide 
--model_type (string): type of machine learning model that will be trained
--feature_plot_path (string): saving path for the feature plot
--roc_plot_path (string): saving path for the ROC plot
--score_plot_path (string): saving path for the scores plot
--confusion_matrix_plot_path (string): saving path for the confusion matrix plot

=======
Methods
=======
Name: make_process_df(files, include, ref_channels)
Description: makes a dataframe from pre-processed data and saves it as a .csv file
Arguments:
- files (array-like): set of file paths for the function to run over
- include (array-like): the channels to include in the pre-processing
- ref_channels (array-like): reference channels
Returns: None

Name: make_main_df(files, window, overlap)
Description: makes a dataframe comprising of features and labels to be normalised
Arguments:
- files (array-like): set of file paths for the function to run over
- window (float): size (in seconds) of the sliding window for use in epoching
- overlap (float): size (in seconds) of the window slide
Returns: DataFrame

Name: make_iqr_data(df, feat_plot_path)
Description: use interquartile ranges to normalise a given dataset. Normalisation happens per subject
Arguments:
- df (DataFrame): dataframe of features and labels to be normalised
- feat_plot_path (string): saving path for the feature plot
Return: DataFrame

Name: model_creation(df, model, roc_path, score_path, cm_path)
Description: instantiates, trains and evaluates one or more machine learning models. Saves them as a pickle file
Arguments:
- df (DataFrame): dataframe of features and labels that has been normalised
- model (string): model type to be made
- roc_path (string): saving path for the ROC plot
-score_path (string): saving path for the scores plot
-cm_path (string): saving path for the confusion matrix plot
Returns: None

Name: parse_args()
Description: parses the arguments passed to the terminal
Arguments: None
Returns: argparse.Namespace
"""
######################################################################################################################################
from pre_processing import *
from feature_extraction import *
from plotting import *
from machine_learning import *
from post_processing import *

import pandas as pd
import numpy as np
import pickle as pkl
import matplotlib.pyplot as plt

import sys
import os
import argparse

def make_processed_df(files, include, ref_channels):
    processed_df = pd.DataFrame()
    for file in files:
        pp = pre_processing(fname=file, include=include)
        data = pp.process_eeg(ref_channels=ref_channels)
        df = pp.make_df(data=data)
        processed_df = pd.concat([processed_df, df])
    processed_df.to_csv('processed_df.csv', index=False)

def make_main_df(files, window, overlap, noise_pc, df_name):
    main_df = pd.DataFrame()
    tmins = np.array([])
    for file in files:
        ml = machine_learning(fname_train=file)
        try:
            df, tmin_pges = ml.make_classed_df(train_or_test='train', window= window, overlap = overlap, noise_pc = noise_pc)
        #tmins = np.append(tmins, tmin_pges)
        except:
            continue
        main_df = pd.concat([main_df, df])
    main_df.to_csv(df_name, index=False)
    np.save('pges_onsets.npy', tmins)
    return main_df

def make_iqr_data(df, df_name, feat_plot_path = 'main_learning_features_iqr.html'):
    df_quar = pd.DataFrame()
    pges = list(df.pges.values)
    subs = list(df.subject.values)
    sesh = list(df.session.values)
    try:
        df_quar.insert(0, 'epoch', df.epoch)
        df_quar.insert(1, 'channel', df.channel)
        cols = df.drop(columns = ['epoch', 'channel']).columns
    except:
        cols = df.columns
        df_quar.insert(0, 'epoch', df.index.get_level_values('epoch'))
        df_quar.insert(1, 'channel', df.index.get_level_values('channel'))
    
    subjects = df.subject.unique()
    all_subs = pd.DataFrame()
    for sub in subjects:
        sub_df = pd.DataFrame()
        tmp = df[df.subject==sub]
        for col in cols[:-3]:
            quars = tmp[col].quantile([.25, .75])
            iqr = quars[.75]-quars[.25]
            cutoff = iqr*1.5
            lower, upper = quars[.25]-cutoff, quars[.75]+cutoff
            med = tmp[col].median()
            sub_df[col] = [i if ((i>lower) and (i<upper)) else med for i in tmp[col]]
        all_subs = pd.concat([all_subs, sub_df], ignore_index=True)
    
    for col in all_subs.columns:
            df_quar[col] = all_subs[col]
    
    df_quar['pges'] = pges
    df_quar['subject'] = subs
    df_quar['session'] = sesh
    df_quar.to_csv(f"{df_name.rstrip('.csv')}_iqr.csv", index=False)

    pl = plotting(df = df_quar)
    fig_list = pl.plot_features(df = df_quar.drop(columns = 'subject'), fname = feat_plot_path, show_fig=False)
    return df_quar

def model_creation(df, model, roc_path = 'roc_newest.html', score_path = 'scores_newest.html', cm_path = 'cm_newest.png'):
    # Model creation
    if model == 'all':
        rfc, rfc_data, sub_test_rfc = machine_learning().make_optimized_rfc(df = df, cm_path='rfc_%s'%cm_path)
        svc, svc_data, sub_test_svc = machine_learning().make_optimized_svc(df = df, cm_path='svc_%s'%cm_path)
        pkl.dump(rfc, open('optimized_rfc_newest.pkl', 'wb'))
        pkl.dump(svc, open('optimized_svc_newest.pkl', 'wb'))
        fig_rfc_roc = machine_learning().plot_roc(x = rfc_data['x_test'], y = rfc_data['y_test'], save_path='rfc_%s'%roc_path, 
                                                  clf = rfc)
        fig_svc_roc = machine_learning().plot_roc(x = svc_data['x_test'], y = svc_data['y_test'], save_path='svc_%s'%roc_path, 
                                                  clf = svc)
        fig_rfc_score = machine_learning().plot_scores(x = rfc_data['x_test'], y = rfc_data['y_test'], save_path='rfc_%s'%score_path,
                                                       clf = rfc)
        fig_svc_score = machine_learning().plot_scores(x = svc_data['x_test'], y = svc_data['y_test'], save_path='svc_%s'%score_path,
                                                       clf = svc)
        return rfc, rfc_data, sub_test_rfc, svc, svc_data, sub_test_svc

    elif model == 'svc':
        svc, svc_data, sub_test = machine_learning().make_optimized_svc(df = df, cm_path='svc_%s'%cm_path)
        pkl.dump(svc, open('optimized_svc.pkl', 'wb'))
        fig_svc_roc = machine_learning().plot_roc(x = svc_data['x_test'], y = svc_data['y_test'], save_path='svc_%s'%roc_path, 
                                                  clf = svc)
        fig_svc_score = machine_learning().plot_scores(x = svc_data['x_test'], y = svc_data['y_test'], save_path='svc_%s'%score_path,
                                                       clf = svc)
        return svc, svc_data, sub_test

    elif model == 'rfc':
        rfc, rfc_data, sub_test = machine_learning().make_optimized_rfc(df = df, cm_path='rfc_%s'%cm_path)
        pkl.dump(rfc, open('optimized_rfc.pkl', 'wb'))
        fig_rfc_roc = machine_learning().plot_roc(x = rfc_data['x_test'], y = rfc_data['y_test'], save_path='rfc_%s'%roc_path, 
                                                  clf = rfc)
        fig_rfc_score = machine_learning().plot_scores(x = rfc_data['x_test'], y = rfc_data['y_test'], save_path='rfc_%s'%score_path,
                                                       clf = rfc)
        return rfc, rfc_data, sub_test
    

def parse_args():
    # Add arguments to the CLI function
    parser = argparse.ArgumentParser(description='Full pipeline for the PGES detector')

    parser.add_argument('-dir', '--directory', type=str, help = 'Set the directory of files to be iterated over')

    parser.add_argument('--strip', action='store_true', help='Strip RawEDF channel names so they only have electrode name')
    parser.add_argument('--no_processing', action='store_true', help='Stops any pre-processing')
    parser.add_argument('--no_extraction', action='store_true', help='Stops any feature extraction')
    parser.add_argument('--no_learning', action='store_true', help='Stops any machine learning')

    parser.add_argument('-hemi','--hemisphere', type=str, default='right', help='The brain hemisphere to be looked at')
    parser.add_argument('-v', '--verbosity', type=int, default=1, help='Set verbosity')
    parser.add_argument('-data', '--dataframe_path', type=str, help='Pre-made data in the form of a saved dataframe')
    parser.add_argument('-win', '--window_size', type=float, default=20., help='Set the size of the sliding window (seconds)')
    parser.add_argument('-olap', '--overlap_size', type=float, default=10.,help='Set the size of the overlap (seconds)')
    parser.add_argument('-model', '--model_type', type=str, default='svc', help='Select a model or all. "rfc" for Random Forest, "svc" for Support Vector, "all" for all')
    
    parser.add_argument('-npc', '--noise_percentage', type=float, default=0., help='The percentage of noise to be added to the raw EEG')
    parser.add_argument('-df', '--df_name', type=str, default='main_learning_df.csv', help='Name of the dataframe to be saved')
    
    parser.add_argument('-plt_f', '--feature_plot_path', type=str, default = 'main_learning_features_iqr.html', 
                        help='Output path for the full feature plot')
    parser.add_argument('-plt_roc', '--roc_plot_path', type=str, default='roc_newest.html', help='Output path for the ROC curve')
    parser.add_argument('-plt_scr', '--score_plot_path', type=str, default='scores_newest.html', help='Output path for the model scores')
    parser.add_argument('-plt_cm', '--confusion_matrix_plot_path', type=str, default='confusion_matrix.png', help='Output path for the model confusion matrix')
    
    return parser.parse_args()

if __name__=='__main__':
    # Setup the initial conditions for the script
    args = parse_args()
    print('Arguments: {}\n'.format(args))

    directory = args.directory
    if type(directory) == type(None):
        print('No directory passed')
        pass
    else:
        if (not os.path.exists(directory)) or (not os.path.isdir(directory)):
            ans = input('Directory is not valid. Continue?[y]/[n]: ')
            if ans in ['y', 'Y', 'yes', 'Yes', 'YES']:
                pass
            elif ans in ['n', 'N', 'no', 'NO']:
                print('Terminating program.')
        else:
            files = ['{}/{}/{}'.format(os.getcwd().replace("\\", "/"), directory, f) for f in os.listdir(directory)]

    v = args.verbosity
    model = args.model_type
    roc_path = args.roc_plot_path
    score_path = args.score_plot_path
    cm_path = args.confusion_matrix_plot_path
    feat_path = args.feature_plot_path
    window = args.window_size
    olap = args.overlap_size
    
    noise = args.noise_percentage
    df_name = args.df_name

    if args.hemisphere == 'right':
        include = ['Fp2', 'F8', 'T8', 'FP2', 'T4']
        ref_channels = ['F8']
    elif args.hemisphere == 'left':
        include = ['Fp1', 'F7', 'T7', 'FP1', 'T3']
        ref_channels = ['F7']

    # If the channels need to be stripped, we need to also be able to store the new file names so that we can just continue with the program
    if args.strip:
        new_files = []
        for file in files:
            pp = pre_processing(fname=file)
            pp.raw = pp.strip_ch_names()
            fname = file.replace('.edf', '_stripped.edf')
            mne.export.export_raw(fname=fname, raw=pp.raw, overwrite = True, verbose = v)
            new_files.append(fname)
        files = new_files


    if args.no_learning:
        if (args.no_extraction) and (args.no_processing):
            print('Nothing selected, program terminating.')

        elif args.no_extraction:
            print('Only pre-processing selected. Processing...')
            make_processed_df(files=files, include=include, ref_channels=ref_channels)
            print('Processing complete, terminating program.')
        else:
            print('Starting pipeline with no learning.')
            main_df = make_main_df(files = files, window = window, overlap = olap)
            df_quar = make_iqr_data(df = main_df, feat_plot_path = args.feature_plot_path)
            print('Program complete, terminating.')

    elif args.no_processing:
        if not args.dataframe_path:
            args.dataframe_path = input('Please enter a path for a feature dataframe: ')
        try:
            print('Creating algorithm...')
            main_df = pd.read_csv(args.dataframe_path)
            if 'iqr' not in args.dataframe_path:
                main_df = make_iqr_data(df = main_df, feat_plot_path = feat_path)
            ml_model, ml_data, sub_test = model_creation(df = main_df, model = model, 
                                                       roc_path = roc_path, score_path = score_path, 
                                                       cm_path = cm_path)
            
            post = post_processing(model = ml_model, df = df_quar, test_subs = sub_test)
            pp.get_pges_info()
        except:
            raise Exception('Must pass a dataframe path if --no_processing turned on')
    else:
        print('Starting full pipeline')
        main_df = make_main_df(files = files, window = window, overlap = olap, noise_pc = noise, df_name=df_name)
        df_quar = make_iqr_data(df = main_df, feat_plot_path = feat_path, df_name = df_name)
        ml_model, ml_data, sub_test = model_creation(df = df_quar, model = model, 
                                                       roc_path = roc_path, score_path = score_path, 
                                                       cm_path = cm_path)
        post = post_processing(model = ml_model, df = df_quar, test_subs = sub_test)
        post.get_pges_info()
        print('Program complete, terminating')