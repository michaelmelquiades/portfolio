######################################################################################################################################
"""
This class handles the making of feature-label datasets for the use in machine learning algorithms, the optimisation and training of
said algorithms, and their evaluation including the production of plots to show performance.
Function arguments will be described using the nomenclature:
- <variable_name> (<variable_type>): <variable description>
==============
Initialisation
==============
machine_learning(fname_train, fname_test)

- fname_train (string): path to RawEDF file to be used as the training sample
- fname_test (string): path to RawEDF file to be used as the testing sample

=======
Methods
=======
Name: make_classed_dfs(train_or_test, window, overlap)
Description: makes a dataframe from RawEDF that contains both features and labels to be used in training.
Arguments:
- train_or_test (string): denotes whether the file path passed is to be used as training or testing
- window (float): the window size (in seconds) used when epoching data
- overlap (float): the overlap size (in seconds) used when sliding the window
Returns: DataFrame

Name: make_feats_and_labels(train_or_test, df)
Description: generates features and labels from either an input file path or a given DataFrame
Arguments:
- train_or_test (string): denotes whether the file path passed is to be used as training or testing
- df (DataFrame): option to add a dataframe that already exists outside of that that is created within the class methods
Returns: DataFrame, Series

Name: evaluate_classifier(clf, x, y, tick_labs, show, save_path)
Description: produces a short report on how well the algorithm performs, including a confusion matrix. Metrics are: accuracy, 
             precision, recall and F1 scores
Arguments: 
- clf (trained estimator): the classifier to be evaluated
- x (array-like): the input features to use in testing
- y (array-like): the input labels to use in testing
- tick_labels (array-like): the labels to be used in the confusion matrix plot
- show (bool): indicates whether the confusion matrix is to be printed to the terminal or not
- save_path (string): file path the confusion matrix is to be saved as 
Returns: None

Name: get_feat_importance(clf, x_test, y_test, feat_names, save_path)
Description: creates a plot of the importance of each of the input features in terms of their percentage contribution to the overall
             discrimination power
Arguments:
- clf (trained estimator): the classifier to be evaluated
- x_test (array-like): the input features to use in testing
- y_test (array-like): the input labels to use in testing
- feat_names (array-like): the names of the features
- save_path (string): file path the feature importance plot is to be saved as
Returns: None

Name: make_optimized_rfc(df, grid_params, bayes_params, verbose, test_size, random_state, cm_path, importance_path)
Description: trains and optimises (using grid search and Bayesian methods) a random forest classifier, as well as evaluating how well it performs
Arguments:
- df (DataFrame): the dataframe of features and labels to be used in training and testing. If none is passed, one will be made from 
                  the training and testing files used when instatiating the class
- grid_params (dict): hyperparameter values to be tested for grid search optimisation. Grid search handles the integer or string 
                      hyperparameters
- bayes_params (dict): hyperparameter values to be tested for Bayesian optimisation. Bayesian methods handle the non-integer 
                       hyperparameters
- verbose (int): sets the verbosity of the output
- test_size (float): sets the size of the testing sample to be used as a number between 0 and 1
- random_state (float): sets a seed for the random sampling processes involved in the creation of the algorithm, such that each 
                        iteration is easily compared 
- cm_path (string): file path the confusion matrix is to be saved as
- importance_path (string): file path the feature importance plot is to be saved as
Returns: estimator, dict (training and testing data)

Name: make_optimized_svc(df, grid_params, bayes_params, verbose, test_size, random_state, cm_path, importance_path)
Description: trains and optimises (using grid search and Bayesian methods) a support vector classifier, as well as evaluating how well it performs
Arguments:
- df (DataFrame): the dataframe of features and labels to be used in training and testing. If none is passed, one will be made from 
                  the training and testing files used when instatiating the class
- grid_params (dict): hyperparameter values to be tested for grid search optimisation. Grid search handles the integer or string 
                      hyperparameters
- bayes_params (dict): hyperparameter values to be tested for Bayesian optimisation. Bayesian methods handle the non-integer 
                       hyperparameters
- verbose (int): sets the verbosity of the output
- test_size (float): sets the size of the testing sample to be used as a number between 0 and 1
- random_state (float): sets a seed for the random sampling processes involved in the creation of the algorithm, such that each 
                        iteration is easily compared 
- cm_path (string): file path the confusion matrix is to be saved as
- importance_path (string): file path the feature importance plot is to be saved as
Returns: estimator, dict (training and testing data)

Name: plot_roc(clf, x, y, save_path, df)
Description: produces a Recieving Operator Characteristic-Area Under the Curve plot to evaluate the accuracy of the algorithm
Arguments: 
- clf (trained estimator): the classifier to be evaluated
- x (array-like): the input features to use in testing
- y (array-like): the input labels to use in testing
- save_path (string): file path the ROC plot is to be saved as
- df  (DataFrame): the dataframe of features and labels to be used in training and testing
Returns: plotly.graph_objects.Figure

Name: plot_scores(clf, x, y, save_path, df, n_bins)
Description: produces a probability score plot to evaluate the discrimination power of the algorithm
Arguments: 
- clf (trained estimator): the classifier to be evaluated
- x (array-like): the input features to use in testing
- y (array-like): the input labels to use in testing
- save_path (string): file path the scores plot is to be saved as
- df  (DataFrame): the dataframe of features and labels to be used in training and testing
- n_bins (int): the number of bins to be used for the creation of histograms
Returns: plotly.graph_objects.Figure
"""
######################################################################################################################################

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import random

from sklearn.model_selection import GridSearchCV, train_test_split
from sklearn.metrics import classification_report, accuracy_score, precision_score, recall_score, f1_score
from sklearn.metrics import confusion_matrix, ConfusionMatrixDisplay, roc_curve, auc
from sklearn.preprocessing import MinMaxScaler
from sklearn.inspection import permutation_importance
 
from sklearn.ensemble import RandomForestClassifier
from sklearn.svm import SVC

from bayes_opt import BayesianOptimization

from pre_processing import *
from feature_extraction import *
from plotting import *

class machine_learning:
    def __init__(self, fname_train = None, fname_test = None):
        self.fname_train = fname_train
        self.fname_test = fname_test
    
    def make_classed_df(self, train_or_test, window = 2., overlap = 1., 
                        noise_pc = 0.):
        if train_or_test == 'train':
            pp = pre_processing(self.fname_train, noise_pc = noise_pc)
        elif train_or_test == 'test':
            pp = pre_processing(self.fname_test, noise_pc = noise_pc)
        else:
            exit('Please choose "train" or "test"')
            
        tmin_bkg, tmax_bkg, tmin_pges, tmax_pges, extra_tmin, extra_tmax = pp.get_annot_times()
        
        bkg = pp.raw.copy().crop(tmin=tmin_bkg, tmax=tmax_bkg)
        pges = pp.raw.copy().crop(tmin=tmin_pges, tmax=tmax_pges)
        extra = pp.raw.copy().crop(tmin=extra_tmin, tmax=extra_tmax)
        
        df_bkg = pp.make_df(data = bkg)
        df_pges = pp.make_df(data = pges)
        df_extra = pp.make_df(data = extra)
        
        fe_bkg = feature_extraction(df = df_bkg, raw = bkg, window = window, overlap = overlap)
        fe_pges = feature_extraction(df = df_pges, raw = pges, window = window, overlap = overlap)
        fe_extra = feature_extraction(df = df_extra, raw = extra, window = window, overlap = overlap)
        
        feats_bkg = fe_bkg.make_feature_df()
        feats_pges = fe_pges.make_feature_df()
        feats_extra = fe_extra.make_feature_df()
        
        feats_bkg['pges'] = 0
        feats_pges['pges'] = 1
        
        feats_extra['pges'] = 0
        start = len(feats_pges[feats_pges.pges==1])/2.
        end = (len(feats_pges[feats_pges.pges==1])/2.)+10
        feats_extra.index = feats_extra.index.set_levels(levels = np.arange(start, end, 1).astype('int16'), level=0) 
        feats = pd.concat([feats_bkg, feats_pges, feats_extra])
        
        return feats
    
    def make_feats_and_labels(self, train_or_test = 'train', df = None):
        if df == None:
            df = self.make_classed_df(train_or_test = train_or_test)
        feats, labels = df.iloc[:, :-1], df.iloc[:, -1]
        return feats, labels
    
    def evaluate_classifier(self, clf, x, y, tick_labs = ['Background', 'PGES'], show = False, save_path = 'confusion_matrix.png'):
        y_pred = clf.predict(x)
        print(classification_report(y, y_pred))
        cm = confusion_matrix(y, y_pred, normalize='true')
        cm_display = ConfusionMatrixDisplay(confusion_matrix = cm, display_labels = tick_labs)
        fig, ax = plt.subplots(figsize=(10,7))
        cm_display.plot(ax=ax)
        plt.savefig(save_path)
        if show:
            plt.show()
    
    def get_feat_importance(self, clf, x_test, y_test, feat_names, save_path = 'feature_importance_newest.png'):
        perm_importance = permutation_importance(clf, x_test, y_test)
        features = np.array(feat_names)
        sorted_idx = perm_importance.importances_mean.argsort()
        plt.figure(figsize = (10, 7))
        plt.barh(features[sorted_idx], perm_importance.importances_mean[sorted_idx])
        plt.xlabel("Permutation Importance")
        plt.savefig(save_path)
    
    def make_optimized_rfc(self,
                           df = None,
                           grid_params = {'n_estimators':[10, 30, 50, 100, 200], 'criterion':['gini', 'criterion']}, 
                           bayes_params = {'min_samples_split':(0, 1), 'min_samples_leaf':(0, 0.5)}, 
                           verbose = 1, test_size = 0.2, 
                           random_state = 42, cm_path = 'confusion_matrix.png', 
                           importance_path = 'rfc_feature_importance_newest.png'):
        
        if type(df) == type(None): 
            x_train, y_train = self.make_feats_and_labels(train_or_test = 'train')
            x_test, y_test = self.make_feats_and_labels(train_or_test = 'test')
        else:
            try:
                df = df.drop(columns = ['epoch', 'channel'])
            except:
                pass
        # Testing out train and test splits based on patient/subject    
        #x_train, x_test, y_train, y_test = train_test_split(df.iloc[:, :-1], df.iloc[:, -1], test_size = test_size, 
        #                                                    random_state = random_state, shuffle = True)
        subs = list(df.subject.unique())
        seed = random.seed(random_state)
        test_size = round(test_size*len(subs))
        if test_subs == []:
            sub_test = random.sample(subs, test_size)
        else:
            sub_test = test_subs
            
        sub_train = [i for i in subs if i not in sub_test]
        train_data = df[df.subject.isin(sub_train)].drop(columns = ['subject', 'session'])
        test_data = df[df.subject.isin(sub_test)].drop(columns = ['subject', 'session'])
        x_train, x_test, y_train, y_test = train_data.iloc[:, :-1], test_data.iloc[:, :-1], train_data.iloc[:, -1], test_data.iloc[:, -1]
        
        scaler = MinMaxScaler()
        x_train = scaler.fit_transform(x_train)
        x_test = scaler.fit_transform(x_test)
            
        clf = GridSearchCV(RandomForestClassifier(random_state = random_state), param_grid = grid_params, verbose = verbose)
        clf.fit(x_train, y_train)
        
        def tree_func(min_samples_split, min_samples_leaf):
            tree = RandomForestClassifier(criterion=clf.best_params_['criterion'], 
                                          n_estimators=clf.best_params_['n_estimators'], 
                                          random_state=random_state)
            tree.fit(x_train, y_train)
            y_preds = tree.predict(x_test)
            score = accuracy_score(y_test, y_preds)
            return score
        
        optimizer = BayesianOptimization(f = tree_func,
                                         pbounds = bayes_params, verbose = verbose,
                                         random_state = random_state)
        optimizer.maximize()
        
        rfc = RandomForestClassifier(criterion = clf.best_params_['criterion'], 
                                     n_estimators = clf.best_params_['n_estimators'], 
                                     min_samples_leaf = optimizer.max['params']['min_samples_leaf'], 
                                     min_samples_split = optimizer.max['params']['min_samples_split'], 
                                     random_state = random_state)
        rfc.fit(x_train, y_train)
        self.evaluate_classifier(rfc, x_test, y_test, save_path = cm_path)
        
        data_dict = {'x_train':x_train, 'x_test':x_test, 'y_train':y_train, 'y_test':y_test}
        
        feature_names = df.columns[:-1]
        self.get_feat_importance(rfc, x_test = x_test, y_test = y_test, 
                                 feat_names = feature_names, save_path=importance_path)
        
        return rfc, data_dict, sub_test
    
    def make_optimized_svc(self,
                           df = None,
                           grid_params = {'kernel':['linear', 'poly', 'rbf','sigmoid'], 'gamma':['scale', 'auto']}, 
                           bayes_params = {'C':(0, 1)}, 
                           verbose = 1, test_size = 0.2, test_subs = [],
                           random_state = 42, cm_path = 'confusion_matrix.png', 
                           importance_path = 'svc_feature_importance_newest.png'):

        if type(df) == type(None): 
            x_train, y_train = self.make_feats_and_labels(train_or_test = 'train')
            x_test, y_test = self.make_feats_and_labels(train_or_test = 'test')
        else:
            try:
                df = df.drop(columns = ['epoch', 'channel'])
            except:
                pass
        # Testing out train and test splits based on patient/subject    
        #x_train, x_test, y_train, y_test = train_test_split(df.iloc[:, :-1], df.iloc[:, -1], test_size = test_size, 
        #                                                    random_state = random_state, shuffle = True)
        subs = list(df.subject.unique())
        seed = random.seed(random_state)
        test_size = round(test_size*len(subs))
        if test_subs == []:
            sub_test = random.sample(subs, test_size)
        else:
            sub_test = test_subs
        
        print(f'#######################\nTest Subjects: {sub_test}\n#######################')
        sub_train = [i for i in subs if i not in sub_test]
        train_data = df[df.subject.isin(sub_train)].drop(columns = ['subject', 'session'])
        test_data = df[df.subject.isin(sub_test)].drop(columns = ['subject', 'session'])
        x_train, x_test, y_train, y_test = train_data.iloc[:, :-1], test_data.iloc[:, :-1], train_data.iloc[:, -1], test_data.iloc[:, -1]
        scaler = MinMaxScaler()
        x_train = scaler.fit_transform(x_train)
        x_test = scaler.fit_transform(x_test)
            
        clf = GridSearchCV(SVC(random_state = random_state, probability = True), param_grid = grid_params, verbose = verbose)
        clf.fit(x_train, y_train)
        
        def clf_func(C):
            func = SVC(kernel = clf.best_params_['kernel'], 
                       gamma = clf.best_params_['gamma'], 
                       random_state=random_state, probability = True)
            
            func.fit(x_train, y_train)
            y_preds = clf.predict(x_test)
            score = accuracy_score(y_test, y_preds)
            return score
        
        optimizer = BayesianOptimization(f = clf_func,
                                         pbounds = bayes_params, verbose = verbose,
                                         random_state = random_state)
        optimizer.maximize()
        
        svc = SVC(kernel = clf.best_params_['kernel'], 
                  gamma = clf.best_params_['gamma'], 
                  C = optimizer.max['params']['C'],
                  random_state = random_state, probability = True)
        svc.fit(x_train, y_train)
        self.evaluate_classifier(svc, x_test, y_test, save_path = cm_path)
        
        data_dict = {'x_train':x_train, 'x_test':x_test, 'y_train':y_train, 'y_test':y_test}
        
        feature_names = df.columns[:-1]
        self.get_feat_importance(svc, x_test = x_test, y_test = y_test, 
                                 feat_names = feature_names, save_path=importance_path)
        
        return svc, data_dict, sub_test
    
    
    def plot_roc(self, clf, x = None, y = None, save_path = 'roc_newest.html', df = None):
        if (type(x) == None) or (type(y) == None):
            x, y = self.make_feats_and_labels(train_or_test = 'test', df = df)
        
        y_score = clf.predict_proba(x)[:, 1]
        fpr, tpr, thresh = roc_curve(y, y_score)
        
        fig = px.area(x = fpr, y = tpr, title = f'ROC Curve (AUC = {auc(fpr, tpr):.2f})',
               labels = dict(x = 'False Positive Rate', y = 'True Positive Rate'))
        fig.add_shape(type = 'line', line = dict(dash = 'dash'), x0 = 0, x1 = 1, y0 = 0, y1 = 1)
        fig.update_yaxes(scaleanchor = 'x', scaleratio = 1)
        fig.update_xaxes(constrain = 'domain')
        
        fig.write_html(save_path)
        
        return fig
    
    def plot_scores(self, clf, x = None, y = None, save_path = 'scores_newest.html', df = None, nbins = 25):
        if (type(x) == None) or (type(y) == None):
            x, y = self.make_feats_and_labels(train_or_test = 'test', df = df)
        
        y_score = clf.predict_proba(x)[:, 1]
        
        fig = go.Figure()
        fig.add_trace(go.Histogram(x = y_score[y == 0], name = 'Bkg', nbinsx = nbins))
        fig.add_trace(go.Histogram(x = y_score[y == 1], name = 'PGES', nbinsx = nbins))
        fig.update_layout(barmode = 'overlay', 
                          title = dict(text = 'Probability Scores'), 
                          xaxis = dict(title = 'Score'), 
                          yaxis = dict(title = 'Count'), 
                          legend = dict(x = 0.1, y = 0.9))
        fig.update_traces(opacity = 0.75)
        
        fig.write_html(save_path)
        
        return fig