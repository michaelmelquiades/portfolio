import uproot3 as uproot
import numpy as np
import os

def tree_maker(directory_path, tree_name = 'CollectionTree'):
    with uproot.recreate('svj_new.root') as f:
        new_tree = uproot.newtree({'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m': np.ndarray,
                                'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt': np.ndarray,
                                'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta': np.ndarray,
                                'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi': np.ndarray,
                                'AntiKt4TruthJetsAux_m': np.ndarray,
                                'AntiKt4TruthJetsAux_pt': np.ndarray,
                                'AntiKt4TruthJetsAux_eta': np.ndarray, 
                                'AntiKt4TruthJetsAux_phi': np.ndarray,
                                'AntiKt2LCTopoJetsAux_m': np.ndarray, 
                                'AntiKt2LCTopoJetsAux_pt': np.ndarray,
                                'AntiKt2LCTopoJetsAux_eta': np.ndarray, 
                                'AntiKt2LCTopoJetsAux_phi': np.ndarray,
                                'AntiKt4EMPFlowJetsAux_m': np.ndarray, 
                                'AntiKt4EMPFlowJetsAux_pt': np.ndarray,
                                'AntiKt4EMPFlowJetsAux_eta': np.ndarray, 
                                'AntiKt4EMPFlowJetsAux_phi': np.ndarray,
                                'AntiKt4EMTopoJetsAux_m': np.ndarray, 
                                'AntiKt4EMTopoJetsAux_pt': np.ndarray,
                                'AntiKt4EMTopoJetsAux_eta': np.ndarray, 
                                'AntiKt4EMTopoJetsAux_phi': np.ndarray,
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m': np.ndarray, 
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt': np.ndarray,
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta': np.ndarray, 
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi': np.ndarray,
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_m': np.ndarray, 
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_pt': np.ndarray,
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_eta': np.ndarray,
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_phi': np.ndarray})
    
        f['CollectionTree'] = new_tree
        
        branch = ['AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux',
                    'AntiKt4TruthJetsAux',
                    'AntiKt2LCTopoJetsAux',
                    'AntiKt4EMPFlowJetsAux',
                    'AntiKt4EMTopoJetsAux',
                    'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux',
                    'AntiKtVR30Rmax4Rmin02TrackJetsAux']

        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m = np.array([])
        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt = np.array([])
        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta = np.array([])
        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi = np.array([])
        AntiKt4TruthJetsAux_m = np.array([])
        AntiKt4TruthJetsAux_pt = np.array([])
        AntiKt4TruthJetsAux_eta = np.array([])
        AntiKt4TruthJetsAux_phi = np.array([])
        AntiKt2LCTopoJetsAux_m = np.array([])
        AntiKt2LCTopoJetsAux_pt = np.array([])
        AntiKt2LCTopoJetsAux_eta = np.array([])
        AntiKt2LCTopoJetsAux_phi = np.array([])
        AntiKt4EMPFlowJetsAux_m = np.array([])
        AntiKt4EMPFlowJetsAux_pt = np.array([])
        AntiKt4EMPFlowJetsAux_eta = np.array([])
        AntiKt4EMPFlowJetsAux_phi = np.array([])
        AntiKt4EMTopoJetsAux_m = np.array([])
        AntiKt4EMTopoJetsAux_pt = np.array([])
        AntiKt4EMTopoJetsAux_eta = np.array([])
        AntiKt4EMTopoJetsAux_phi = np.array([])
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m = np.array([])
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt = np.array([])
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta = np.array([])
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi = np.array([])
        AntiKtVR30Rmax4Rmin02TrackJetsAux_m = np.array([])
        AntiKtVR30Rmax4Rmin02TrackJetsAux_pt = np.array([])
        AntiKtVR30Rmax4Rmin02TrackJetsAux_eta = np.array([])
        AntiKtVR30Rmax4Rmin02TrackJetsAux_phi = np.array([])

    	#with uproot.open(directory_path, 'r') as directory:
        for file in os.listdir(directory_path):
            temp_file = uproot.open(directory_path+'/'+file)
            tree = temp_file[tree_name]
            np.append(AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m, tree.array(branch[0]+'.m'))
            np.append(AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt, tree.array(branch[0]+'.pt'))
            np.append(AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta, tree.array(branch[0]+'.eta'))
            np.append(AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi, tree.array(branch[0]+'.phi'))
            np.append(AntiKt4TruthJetsAux_m, tree.array(branch[1]+'.m'))
            np.append(AntiKt4TruthJetsAux_pt, tree.array(branch[1]+'.pt'))
            np.append(AntiKt4TruthJetsAux_eta, tree.array(branch[1]+'.eta'))
            np.append(AntiKt4TruthJetsAux_phi, tree.array(branch[1]+'.phi'))
            np.append(AntiKt2LCTopoJetsAux_m, tree.array(branch[2]+'.m'))
            np.append(AntiKt2LCTopoJetsAux_pt, tree.array(branch[2]+'.pt'))
            np.append(AntiKt2LCTopoJetsAux_eta, tree.array(branch[2]+'.eta'))
            np.append(AntiKt2LCTopoJetsAux_phi, tree.array(branch[2]+'.phi'))
            np.append(AntiKt4EMPFlowJetsAux_m, tree.array(branch[3]+'.m'))
            np.append(AntiKt4EMPFlowJetsAux_pt, tree.array(branch[3]+'.pt'))
            np.append(AntiKt4EMPFlowJetsAux_eta, tree.array(branch[3]+'.eta'))
            np.append(AntiKt4EMPFlowJetsAux_phi, tree.array(branch[3]+'.phi'))
            np.append(AntiKt4EMTopoJetsAux_m, tree.array(branch[4]+'.m'))
            np.append(AntiKt4EMTopoJetsAux_pt, tree.array(branch[4]+'.pt'))
            np.append(AntiKt4EMTopoJetsAux_eta, tree.array(branch[4]+'.eta'))
            np.append(AntiKt4EMTopoJetsAux_phi, tree.array(branch[4]+'.phi'))
            np.append(AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m, tree.array(branch[5]+'.m'))
            np.append(AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt, tree.array(branch[5]+'.pt'))
            np.append(AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta, tree.array(branch[5]+'.eta'))
            np.append(AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi, tree.array(branch[5]+'.phi'))
            np.append(AntiKtVR30Rmax4Rmin02TrackJetsAux_m, tree.array(branch[6]+'.m'))
            np.append(AntiKtVR30Rmax4Rmin02TrackJetsAux_pt, tree.array(branch[6]+'.pt'))
            np.append(AntiKtVR30Rmax4Rmin02TrackJetsAux_eta, tree.array(branch[6]+'.eta'))
            np.append(AntiKtVR30Rmax4Rmin02TrackJetsAux_phi, tree.array(branch[6]+'.phi'))


            f['CollectionTree'].extend({'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m': AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m,
                                        'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt': AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt,
                                        'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta': AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta, 
                                        'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi': AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi,
                                        'AntiKt4TruthJetsAux_m': AntiKt4TruthJetsAux_m, 
                                        'AntiKt4TruthJetsAux_pt': AntiKt4TruthJetsAux_pt,
                                        'AntiKt4TruthJetsAux_eta': AntiKt4TruthJetsAux_eta, 
                                        'AntiKt4TruthJetsAux_phi': AntiKt4TruthJetsAux_phi,
                                        'AntiKt2LCTopoJetsAux_m': AntiKt2LCTopoJetsAux_m, 
                                        'AntiKt2LCTopoJetsAux_pt': AntiKt2LCTopoJetsAux_pt,
                                        'AntiKt2LCTopoJetsAux_eta': AntiKt2LCTopoJetsAux_eta, 
                                        'AntiKt2LCTopoJetsAux_phi': AntiKt2LCTopoJetsAux_phi,
                                        'AntiKt4EMPFlowJetsAux_m': AntiKt4EMPFlowJetsAux_m, 
                                        'AntiKt4EMPFlowJetsAux_pt': AntiKt4EMPFlowJetsAux_pt,
                                        'AntiKt4EMPFlowJetsAux_eta': AntiKt4EMPFlowJetsAux_eta, 
                                        'AntiKt4EMPFlowJetsAux_phi': AntiKt4EMPFlowJetsAux_phi,
                                        'AntiKt4EMTopoJetsAux_m': AntiKt4EMTopoJetsAux_m, 
                                        'AntiKt4EMTopoJetsAux_pt': AntiKt4EMTopoJetsAux_pt,
                                        'AntiKt4EMTopoJetsAux_eta': AntiKt4EMTopoJetsAux_eta, 
                                        'AntiKt4EMTopoJetsAux_phi': AntiKt4EMTopoJetsAux_phi,
                                        'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m': AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m, 
                                        'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt': AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt,
                                        'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta': AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta, 
                                        'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi': AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi,
                                        'AntiKtVR30Rmax4Rmin02TrackJetsAux_m': AntiKtVR30Rmax4Rmin02TrackJetsAux_m, 
                                        'AntiKtVR30Rmax4Rmin02TrackJetsAux_pt': AntiKtVR30Rmax4Rmin02TrackJetsAux_pt,
                                        'AntiKtVR30Rmax4Rmin02TrackJetsAux_eta': AntiKtVR30Rmax4Rmin02TrackJetsAux_eta,
                                        'AntiKtVR30Rmax4Rmin02TrackJetsAux_phi': AntiKtVR30Rmax4Rmin02TrackJetsAux_phi})
            
