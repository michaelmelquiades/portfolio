######################################################################################################################################
"""
This class handles the post processing of data after algorithm training in the machine learning class. This includes: flipping mislabelled predicted data, visualising the predictions vs the ground truth and indicating the presence and duration of pges. 
Function arguments will be described using the nomenclature:
- <variable_name> (<variable_type>): <variable description>
==============
Initialisation
==============
post_processing(model, df, test_subs, flip_window, window, overlap)
- model (classifier): model to be used for evaluation
- df (DataFrame): dataframe of features and labels
- test_subs (array-like): array of subjects not used for training to be tested
- flip_window (int): number of epochs to use for the flipping decision (heavily recommended to be odd to ensure majority)
- window (float): size (in seconds) of the sliding window for use in epoching
- overlap (float): size (in seconds) of the window slide

=======
Methods
=======
Name: flip_output(subject)
Description: controls the flipping of predictions made by the algorithm. The decision made is based on the mode of the epochs over the length of the flipping window.
Arguments:
- subject (str): the test subject to be evaluated
Returns: list (of ints)

Name: plot_reponse(df, save_dir)
Description: plots the predicted, flipped predicted and ground truth for the dataframe given. Produces one plot per subject, per session, per channel.
Arguments:
- df (DataFrame): dataframe including flipped responses, ground truth and original predictions
- save_dir (str): path to the directory the plots are to be saved in
Returns: None

Name: flip_response(save_path)
Description: created a dataframe of the prediction, flipped prediction, and ground truth for the algorithm on some test set. Also includes: subject, session, channel, and epoch data.
Arguments:
- save_path (str): path that the dataframe should be save to
Returns: DataFrame

Name: get_pges_info(flipped_save_path, pges_save_path)
Description: calculates and presents information on the presence and duration of PGES in a sample after prediction and flipping has been applied.
Arguments:
- flipped_save_path (str): path that the dataframe containing information about flipped predictions should be saved to
- pges_save_path (str): path that the PGES information should be saved to
Returns: DataFrame
"""
######################################################################################################################################
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

from pre_processing import *
from feature_extraction import *
from machine_learning import *
from plotting import *

import pickle as pkl
from sklearn.metrics import accuracy_score
import scipy.stats as st
from sklearn.preprocessing import MinMaxScaler

class post_processing:
    def __init__(self, model, df, test_subs, flip_window = 5, flip_stride = 1, window = 2, overlap = 1):
        self.df = df
        self.test_subs = test_subs
        self.model = model
        self.flip_window = flip_window
        self.window = window
        self.overlap = overlap
        self.flip_stride = flip_stride

    def flip_output(self, test_df, preds):
        preds_fp2 = preds[test_df.channel.isin(['Fp2-F8', 'FP2-F8'])]
        preds_t8 = preds[test_df.channel.isin(['T8-F8', 'T4-F8'])]
        
        pred_flip_fp2, pred_flip_t8 = np.zeros(len(preds_fp2)), np.zeros(len(preds_t8))
        
        for i in range(0, len(preds_fp2)-self.flip_window+1, self.flip_stride):#self.flip_window):
            pred_fp2 = np.array(preds_fp2[i:i+self.flip_window])
            mode_pred_fp2 = st.mode(pred_fp2)[0][0]
            pred_flip_fp2[i:i+self.flip_window] = mode_pred_fp2
            pred_t8 = np.array(preds_t8[i:i+self.flip_window])
            mode_pred_t8 = st.mode(pred_t8)[0][0]
            pred_flip_t8[i:i+self.flip_window] = mode_pred_t8
            
        flips = np.array([[pred_flip_fp2[i], pred_flip_t8[i]] for i in range(len(pred_flip_fp2))]).flatten()
        return flips.astype(int)
    
    def plot_response(self, df, save_dir = 'flip_plots/'):
        for subj in df.subject.unique():
            df_subj = df[df.subject == subj]
            for sesh in df_subj.session.unique():
                df_sesh = df_subj[df_subj.session == sesh]
                for channel in df_sesh.channel.unique():
                    df_channel = df_sesh[df_sesh.channel == channel]
                    fig, ax = plt.subplots(nrows = 2, ncols = 1, figsize=(20,7), sharex = True)
                    ax[0].stem(df_channel.predicted, 
                               label = f'{channel} Predicted', linefmt= 'C0-', markerfmt='C0o')
                    ax[1].stem(df_channel.flipped_predicted, 
                             label = f'{channel} Flipped', linefmt='C1-', markerfmt='C1o')
                    ax[0].legend()
                    ax[1].legend()
                    plt.xlabel('Epoch')
                    plt.savefig(f"{save_dir}{subj}_{sesh}_{channel}_flip_reponse.png")
                    plt.show()
    
    def flip_response(self, save_path = 'flipped_reponse.csv'):
        test = self.df[self.df.subject.isin(self.test_subs)]
        preds = self.model.predict(MinMaxScaler().fit_transform(test.iloc[:, 2:18]))
        
        full_flips = self.flip_output(test_df = test, preds = preds)
                
        data_dict = dict(epoch = test.epoch, 
                         channel = test.channel, 
                         predicted = preds, 
                         flipped_predicted = full_flips, 
                         ground_truth = test.pges, 
                         subject = test.subject, 
                         session = test.session)
        df_flipped = pd.DataFrame.from_dict(data_dict).reset_index(drop = True)
        
        for i in df_flipped.index:
            try:
                past = df_flipped.flipped_predicted[i-2]
                pres = df_flipped.flipped_predicted[i]
                fut = df_flipped.flipped_predicted[i+2]
                if past == fut:
                    if pres != past:
                        df_flipped.at[i, 'flipped_predicted'] == past
                else:
                    continue
            except:
                continue
            
        df_flipped.to_csv(save_path, index = False)
        
        return df_flipped
    
    def get_pges_info(self, flipped_save_path = 'flipped_response.csv', pges_save_path = 'pges_info.csv'):
        pges_info = dict(subject = [], session = [], pges_present = [], pges_duration = [], pges_duration_20 = [])
        df_in = self.flip_response(save_path = flipped_save_path)
        df = df_in[df_in.ground_truth == 1]

        #bound_truth = df_in.ground_truth.ne(0).idxmax()
        #bound_pred = df_in.predicted.ne(1).idxmin()

        num_channels = df.channel.nunique()

        for subj in df.subject.unique():
            tmp = df[df.subject == subj]
            sessions = tmp.session.unique()
            pges_info['subject'] += [subj]*len(sessions) 
            for sesh in sessions:
                pges_info['session'] += [sesh]
                tmp_sesh = tmp[tmp.session == sesh]

                duration = len(tmp_sesh)/((self.window - self.overlap) * num_channels)

                if (duration > 0):# and (np.abs(bound_truth-bound_pred) <= 15):
                    pges_info['pges_present'] += [1]
                    pges_info['pges_duration'] += [duration]
                    if duration > 20:
                        pges_info['pges_duration_20'] += [1]
                    else:
                        pges_info['pges_duration_20'] += [0]
                else:
                    pges_info['pges_present'] += [0]
                    pges_info['pges_duration'] += [0]
                    pges_info['pges_duration_20'] += [0]
                    continue
        
        df_pges_info = pd.DataFrame.from_dict(pges_info)
        df_pges_info.to_csv(pges_save_path, index = False)
        
        return df_pges_info