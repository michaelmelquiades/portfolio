######################################################################################################################################
"""
This class handles the pre-processing of raw EEG. This includes stripping channel names, filtering, getting annotation times etc.
Function arguments will be described using nomenclature: 
- <variable_name> (<variable type>): <variable description>
==============
Initialisation
==============
pre_processing(fname, include, exclude)

- fname (string): that is the name of an edf file
- include (array-like): channels in EEG to include. This will exclude all channels other than those named if no channels explicitly
passed to exclude.
- exclude (array-like): channels in EEG to exclude. This will include all channels other than those named, if no channels explicitly
passed to include.

=======
Methods 
=======
Name: filter_eeg(data, low_freq, high_freq, notch, order)
Description: performs filtering of the EEG file
Arguments:
- data (RawEDF): EDF file to be filtered
- low_freq (int, float): the low end of the band-pass frequency filter
- high_freq (int, float): the high end of the band-pass frequency filter
- notch (int, float): the frequency used in the notch filter
- order (int, float): the order of the Butterworth filter
Returns: RawEDF

Name: process_eeg(change_rate, new_rate, set_bipolar, an_ref, cat_ref, apply_filters, low_freq, high_freq, order, notch, 
                    set_eeg_reference, ref_channels, drop)
Description: handles the entire processing of the EDF
Arguments:
- change_rate (bool): indicate whether the sampling rate will be changed for the EDF
- new_rate (int, float): the new rate for the EDF to be changed to
- set_bipolar (bool): indicate whether a bipolar montage is to be set
- an_ref (string, array-like): the anode reference for a bipolar montage
- cat_ref (string, array-like): the cathode reference for a bipolar montage
- apply_filters (bool): indicate whether filters should be applied
- low_freq (int, float): the low end of the band-pass frequency filter
- high_freq (int, float): the high end of the band-pass frequency filter
- order (int, float): the order of the Butterworth filter
- notch (int, float): the frequency used in the notch filter
- set_eeg_reference (bool): indicate whether re-referencing should be done
- ref_channels (string, array-like): channels used for re-referencing 
- drop (bool): indicate whether the reference channel(s) should be dropped from the final RawEDF
Returns: RawEDF

Name: strip_ch_names(raw)
Description: converts input channel names on the EEG to just the electrode names. This will likely need to be done, the RawEDF saved, then another class instance made for the new one if pre-processing is to be done.
Arguments:
- raw (RawEDF): if no file is provided as a name, this can be used to just use the method on another RawEDF.
Returns: RawEDF

Name: get_annot_times()
Description: gets the onset/offset times of PEGS and Background (MORE MAY BE ADDED IN FUTURE)
Arguments: None
Returns: (4) float

Name: make_df(data, srate, change_rate, new_rate)
Description: makes a dataframe from the RawEDF the class creates from the file that it is initiated with
Arguments:
- data (RawEDF): if no file is passed to the class, one can be passed here to make a dataframe
- srate (int, float): the sampling rate (in Hertz) of the input data
- change_rate (bool): indicates whether a change in sampling rate for the new dataframe to be in terms of is required
- new_rate (int, float): the new sampling rate (in Hertz) if a change in rate is required
Returns: DataFrame
"""
######################################################################################################################################

import mne
import re
import pandas as pd

import random
import numpy as np

class pre_processing:
    def __init__(self, fname = None, include = None, exclude = [], 
                 noise_pc = 0.):
        self.fname = fname
        self.raw = mne.io.read_raw_edf(self.fname, include = include, exclude = exclude, preload = True)
            
        self.noise_pc = noise_pc
        
    @staticmethod
    def filter_eeg(data, low_freq, high_freq, notch, order):
        params = dict(order=order, ftype='butterworth')
        data = data.filter(l_freq = low_freq, h_freq = high_freq, 
                           method = 'iir', iir_params = params)
        data = data.notch_filter(freqs=notch, method = 'iir', iir_params = params)
        return data
    
    def process_eeg(self, 
                change_rate = True, new_rate = 207, 
                set_bipolar = False, an_ref = None, cat_ref = None, 
                apply_filters = True, low_freq = 0.5, high_freq = 45, order = 8, 
                notch = 50,
                set_eeg_reference = True, ref_channels = [], drop = True,
                ):
        data = self.raw
        
        if set_eeg_reference:
            data, __ = mne.set_eeg_reference(data, ref_channels = ref_channels)
            data = data.drop_channels(ref_channels)
            ch_map = dict(zip(data.ch_names, [i+'-%s'%ref_channels[0] for i in data.ch_names]))
            mne.rename_channels(data.info, ch_map)

        if set_bipolar:
            data = mne.set_bipolar_reference(data, anode = an_ref, cathode = cat_ref)
        
        if change_rate:
            data = data.resample(new_rate)
        
        if apply_filters:
            data = self.filter_eeg(data, 
                                   low_freq=low_freq, high_freq=high_freq, 
                                   notch=notch, order = order,
                                  )

        return data
    
    def strip_ch_names(self, raw = None):
        ch_map = {}
        if raw != None:
            raw = raw
        else:
            raw = self.raw
        for i in raw.ch_names:
            if '-REF' in i:
                ch_map[i]=i.rstrip('-REF').lstrip('EEG ')
            elif '-avgLoRo' in i:
                ch_map[i]=i.rstrip('-avgLoRo').lstrip('EEG ')
            elif '-AVGloro' in i:
                ch_map[i]=i.rstrip('-AVGloro').lstrip('EEG ')
        mne.rename_channels(raw.info, mapping=ch_map)
        return raw
    
    def get_annot_times(self):
        tmin_bkg = 0.
        tmax_bkg = 0.
        tmin_pges = 0.
        tmax_pges = 0.
        #seiz_end = 0.
        annots = mne.read_annotations(self.fname)
        for i in annots:
            descr = i['description']
            onset = i['onset']
            dur = i['duration']
            """
            if descr == 'seiz_end': # PROVISIONAL NAME FOR END OF SEIZURE 
                seiz_end == onset
            """
            if descr == 'bkg_start':
                tmin_bkg = onset
            elif descr == 'bkg_end':
                tmax_bkg = onset
            elif descr == 'PGES':
                tmin_pges = onset
                tmax_pges = onset+dur
            else:
                continue
            
            # PROVISIONAL CODE BELOW FOR EXTRA 10 SECONDS OF TIME AFTER PGES NOT COUNTED AS PGES BUT CONTNIUING ON
            extra_tmin = tmax_pges
            extra_tmax = tmax_pges+10
        return tmin_bkg, tmax_bkg, tmin_pges, tmax_pges, extra_tmin, extra_tmax#, seiz_end
    
    def make_df(self, data = None, srate = 207, 
                change_rate = False, new_rate = 1, 
                seed = 42):
        if data != None:
            data = data
        else:
            data = self.raw
        
        if change_rate:
            print('Changing sampling rate to %d Hz'%new_rate)
            data = data.resample(new_rate)
        
        df = data.to_data_frame(scalings = dict(eeg=1, mag=1e15, grad=1e13)).drop(columns=['time'])
        
        if 'aaaa' in self.fname:
            lst = self.fname.split('_')[-6:]
            sub = lst[0][-3:]
            sesh = int(lst[1][1:])
            df['subject'] = [sub]*len(df)
            df['session'] = [sesh]*len(df)
        else:
            try:
                pattern = r'//P\d+\.\d+'
                sub_sesh = re.search(pattern, self.fname).group(0).split('.')
                df['subject'] = [sub_sesh[0].split('//')[-1]]*len(df)
                df['session'] = [sub_sesh[1]]*len(df)
            except:
                pattern = r'P\d+'
                df['subject'] = [re.search(pattern, self.fname).group(0)]*len(df)
                df['session'] = [1]*len(df)
         
        if self.noise_pc == 0.:
            pass
        else:
            np.random.seed(seed)
            for col in df.columns[:2]:
                mean = df[col].mean()
                std = df[col].std()
                noise = np.random.normal(loc = mean, scale = std)
                idx = random.choices(df.index, k = int(self.noise_pc*len(df)))
                df.loc[idx, col] = df.loc[idx, col]+noise
                
        return df