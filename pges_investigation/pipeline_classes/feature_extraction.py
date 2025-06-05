"""
This class handles extraction of features for use in classification algorithms. Function arguments will be presented thus:
- <variable name> (<variable type>): <variable description>
==============
Initialisation
==============
feature_extraction(df, raw, window, overlap, srate)
- df (DataFrame): dataframe constructed from pre-processed data
- raw (RawEDF): raw EDF that was used to create the dataframe being passed. Required to get the PSD features
- window (int, float): size of sliding window in seconds that defines an epoch for the EEG
- overlap (int, float): size of overlap in seconds that we slide the window by for each epoch
- srate (int, float): sampling frequency/rate in Hertz that the dataframe has been produced with
=======
Methods
=======
Name: get_data_epochs()
Description: applies the sliding window to the EEG dataframe and groups elements into epochs
Arguments: None
Returns: list (of DataFrames)
Name: get_time_features()
Description: extracts time-based features from the input dataframe. Features are: median, mean, standard deviation, maximum,
             minimum, and range of amplitudes
Arguments: None
Returns: dict
Name: get_freq_features(raw, freq_bands, fmin, fmax)
Description: extracts frequency-based features from a RawEDF file. Features are: relative and absolute power spectrum densities 
             for the frequency bands given in the freq_bands argument
Arguments:
- raw (RawEDF): if no RawEDF is provided on initialisation, one can be provided here
- freq_bands (dict): frequency bands for consideration. These should have array-like values
- fmin (int, float): minimum frequency (in Hertz) to consider if freq_bands not passed
- fmax (int, float): maximum frequency (in Hertz) to consider if freq_bands not passed
Returns: (2) dict
Name: calc_pfd(data)
Description: calculates the Petrosian Fractal Dimension (measure of "roughness") for the time-series data given
Arguments: 
- data (array-like): data sequence for the calculation to run over
Returns: float
Name: get_pfd()
Description: extract PFD for both channels per epoch 
Arguments: None66
Returns: list (of floats)
Name: get_svd_entropy()
Description: calculates the Singular Value Decomposition Entropy for the data. This is an indication of the number of vectors 
             needed to adequately describe the dataset, and serves as a measure of how much information there is in a given 
             dataset
Arguments: None
Returns: list (of floats)
Name: get_feature_index()
Description: make the multi-index for the dataframe produced from the features. Indices will be epochs and channels
Arguments: None
Returns: MultiIndex
Name: make_feature_index()
Description: make a dataframe from time and frequency features
Arguments: None
Returns: DataFrame
"""
######################################################################################################################################
import pandas as pd
import numpy as np
import mne
from mne_features.univariate import compute_svd_entropy

class feature_extraction:
    def __init__(self, df, raw = None, window = 5., overlap = 2.5, srate = 207):
        self.df = df
        self.window = window
        self.overlap = overlap
        self.srate = srate
        self.raw = raw
        self.epochs = self.get_data_epochs()
        
    def get_data_epochs(self):
            epoch_data = []
            n = int(self.window*self.srate)
            m = int(self.overlap*self.srate)
            for i in range(0, self.df.shape[0], n):
                epoch_data.append(self.df.iloc[i:i+n, :])
                if i+m+n>len(self.df):
                    continue
                else:
                    epoch_data.append(self.df.iloc[i+m:i+m+n, :])
            epoch_data = [j for j in epoch_data if len(j)>self.srate*(self.overlap/2.)]
            return epoch_data
    
    def get_time_features(self):
        time_feats = dict(median_amp=[], mean_amp=[], std_amp=[], max_amp=[], min_amp=[], range_amp=[])
        for i in self.epochs:
            df = i.iloc[:, :-2]
            time_feats['median_amp'] += list(np.abs(df).median())
            time_feats['mean_amp'] += list(np.abs(df).mean())
            time_feats['std_amp'] += list(np.abs(df).std())
            time_feats['max_amp'] += list(np.abs(df).max())
            time_feats['min_amp'] += list(np.abs(df).min())
            time_feats['range_amp'] += list(np.abs(df).max()-np.abs(df).min())

        for k in time_feats.keys():
            time_feats[k] = np.asarray(time_feats[k]).flatten()
           
        return time_feats
   
    def get_freq_features(self, 
                        raw = None, 
                        freq_bands = dict(delta=[1, 4], theta=[4, 8], alpha=[8, 12], beta=[13, 30]),
                        fmin = None, fmax = None,
                        ):
        if self.raw == None and raw == None:
            print('No raw data file passed. Either call function again with raw = mne.io.read_raw_edf(<filepath>), or call class with same.')
            exit(1)
        elif self.raw == None:
            raw = raw
        else:
            raw = self.raw
        if fmin == None:
            fmin = min(list(freq_bands.values()))[0]
        if fmax == None:
            fmax = max(list(freq_bands.values()))[-1]
        
        abs_psd_feats = {'abs_psd_%s'%i:[] for i in freq_bands.keys()}     
        rel_psd_feats = {'rel_psd_%s'%i:[] for i in freq_bands.keys()}

        for epoch_df in self.epochs:
            #print(epoch_df)
            tmin, tmax = epoch_df.index[0]/self.srate, epoch_df.index[-1]/self.srate

            raw_epoch = raw.copy().crop(tmin=tmin, tmax=tmax)
            if len(epoch_df) > 256:
                psds, freqs = mne.time_frequency.psd_array_welch(x=raw_epoch.get_data(), sfreq=self.srate, fmin=fmin, fmax=fmax)
            else:
                psds, freqs = mne.time_frequency.psd_array_welch(x=raw_epoch.get_data(), sfreq=self.srate, fmin=fmin, fmax=fmax, 
                                                                 n_fft=len(epoch_df))

            #Absolute PSD
            for key, f_range in freq_bands.items():
                psds_band = psds[:, (freqs>=f_range[0])&(freqs<f_range[-1])].mean(axis=-1)
                abs_psd_feats['abs_psd_%s'%key] = np.append(abs_psd_feats['abs_psd_%s'%key], psds_band)
        
            #Rel PSD
            psds_norm = psds/np.sum(psds, axis=-1, keepdims=True)
            for key, f_range in freq_bands.items():
                psds_band = psds_norm[:, (freqs>=f_range[0])&(freqs<f_range[-1])].mean(axis=-1)
                rel_psd_feats['rel_psd_%s'%key] = np.append(rel_psd_feats['rel_psd_%s'%key], psds_band)     
        return abs_psd_feats, rel_psd_feats
    
    def calc_pfd(self, data):
        D = np.diff(data)
        D = D.tolist()
        N_delta = 0 
        for i in range(1, len(D)):
            if D[i] * D[i - 1] < 0:
                 N_delta += 1
        n = len(data)
        pfd = np.log10(n) / (np.log10(n) + np.log10(n / n + 0.4 * N_delta))
        return pfd
    
    def get_pfd(self):
        pfds = []
        for i in self.epochs:
            pfds.append(self.calc_pfd(i.iloc[:, 0]))
            pfds.append(self.calc_pfd(i.iloc[:, 1]))
        return pfds
    
    def get_svd_entropy(self):
        svds = []
        for i in self.epochs:
            tmp = np.array([i.iloc[:, 0], i.iloc[:, 1]])
            svd = compute_svd_entropy(tmp)
            svds.append(svd[0])
            svds.append(svd[1])
        return svds

    def get_feature_index(self):
        epochs = np.array([[i]*len(self.df.columns[:-2]) for i in range(len(self.get_data_epochs()))]).flatten()
        channels = np.array([self.df.columns[:-2] for i in range(len(epochs))]).flatten()

        tuples = list(zip(epochs, channels))

        return pd.MultiIndex.from_tuples(tuples, names=["epoch", "channel"])
    
    def make_feature_df(self):
        time_feats = self.get_time_features()
        abs_feats, rel_feats = self.get_freq_features()
        mindex = self.get_feature_index()
    
        df = pd.DataFrame(columns=time_feats.keys(),index=mindex)
        for i in df.columns:
            df[i] = time_feats[i]
        for i in range(len(abs_feats.keys())):
            df[list(abs_feats.keys())[i]] = abs_feats[list(abs_feats.keys())[i]]
            df[list(rel_feats.keys())[i]] = rel_feats[list(rel_feats.keys())[i]]
        df['pfd'] = self.get_pfd()
        df['svd_entropy'] = self.get_svd_entropy()

        df['subject'] = [self.df['subject'].values[0]]*len(df)
        df['session'] = [self.df['session'].values[0]]*len(df)

        return df