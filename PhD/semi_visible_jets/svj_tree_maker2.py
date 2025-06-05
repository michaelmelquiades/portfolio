import uproot3 as uproot
import numpy as np
import os

def tree_maker(directory_path, tree_name = 'CollectionTree'):
    with uproot.recreate('svj_new.root') as f:
        new_tree = uproot.newtree({'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m': 'float32',
                                'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt': 'float32',
                                'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta': 'float32',
                                'AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi': 'float32',
                                'AntiKt4TruthJetsAux_m': 'float32',
                                'AntiKt4TruthJetsAux_pt': 'float32',
                                'AntiKt4TruthJetsAux_eta': 'float32',
                                'AntiKt4TruthJetsAux_phi': 'float32',
                                'AntiKt2LCTopoJetsAux_m': 'float32',
                                'AntiKt2LCTopoJetsAux_pt': 'float32',
                                'AntiKt2LCTopoJetsAux_eta': 'float32',
                                'AntiKt2LCTopoJetsAux_phi': 'float32',
                                'AntiKt4EMPFlowJetsAux_m': 'float32',
                                'AntiKt4EMPFlowJetsAux_pt': 'float32',
                                'AntiKt4EMPFlowJetsAux_eta': 'float32',
                                'AntiKt4EMPFlowJetsAux_phi': 'float32',
                                'AntiKt4EMTopoJetsAux_m': 'float32',
                                'AntiKt4EMTopoJetsAux_pt': 'float32',
                                'AntiKt4EMTopoJetsAux_eta': 'float32',
                                'AntiKt4EMTopoJetsAux_phi': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_m': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_pt': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_eta': 'float32',
                                'AntiKtVR30Rmax4Rmin02TrackJetsAux_phi': 'float32'})
    
        f['CollectionTree'] = new_tree
        
        branch = ['AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux',
                    'AntiKt4TruthJetsAux',
                    'AntiKt2LCTopoJetsAux',
                    'AntiKt4EMPFlowJetsAux',
                    'AntiKt4EMTopoJetsAux',
                    'AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux',
                    'AntiKtVR30Rmax4Rmin02TrackJetsAux']

        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m = []
        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt = []
        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta = []
        AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi = []
        AntiKt4TruthJetsAux_m = []
        AntiKt4TruthJetsAux_pt = []
        AntiKt4TruthJetsAux_eta = []
        AntiKt4TruthJetsAux_phi = []
        AntiKt2LCTopoJetsAux_m = []
        AntiKt2LCTopoJetsAux_pt = []
        AntiKt2LCTopoJetsAux_eta = []
        AntiKt2LCTopoJetsAux_phi = []
        AntiKt4EMPFlowJetsAux_m = []
        AntiKt4EMPFlowJetsAux_pt = []
        AntiKt4EMPFlowJetsAux_eta = []
        AntiKt4EMPFlowJetsAux_phi = []
        AntiKt4EMTopoJetsAux_m = []
        AntiKt4EMTopoJetsAux_pt = []
        AntiKt4EMTopoJetsAux_eta = []
        AntiKt4EMTopoJetsAux_phi = []
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m = []
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt = []
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta = []
        AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi = []
        AntiKtVR30Rmax4Rmin02TrackJetsAux_m = []
        AntiKtVR30Rmax4Rmin02TrackJetsAux_pt = []
        AntiKtVR30Rmax4Rmin02TrackJetsAux_eta = []
        AntiKtVR30Rmax4Rmin02TrackJetsAux_phi = []

    	#with uproot.open(directory_path, 'r') as directory:
        for file in os.listdir(directory_path):
            temp_file = uproot.open(directory_path+'/'+file)
            tree = temp_file[tree_name]
            AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m.append(tree.array(branch[0]+'.m'))
            AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt.append(tree.array(branch[0]+'.pt'))
            AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta.append(tree.array(branch[0]+'.eta'))
            AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi.append(tree.array(branch[0]+'.phi'))
            AntiKt4TruthJetsAux_m.append(tree.array(branch[1]+'.m'))
            AntiKt4TruthJetsAux_pt.append(tree.array(branch[1]+'.pt'))
            AntiKt4TruthJetsAux_eta.append(tree.array(branch[1]+'.eta'))
            AntiKt4TruthJetsAux_phi.append(tree.array(branch[1]+'.phi'))
            AntiKt2LCTopoJetsAux_m.append(tree.array(branch[2]+'.m'))
            AntiKt2LCTopoJetsAux_pt.append(tree.array(branch[2]+'.pt'))
            AntiKt2LCTopoJetsAux_eta.append(tree.array(branch[2]+'.eta'))
            AntiKt2LCTopoJetsAux_phi.append(tree.array(branch[2]+'.phi'))
            AntiKt4EMPFlowJetsAux_m.append(tree.array(branch[3]+'.m'))
            AntiKt4EMPFlowJetsAux_pt.append(tree.array(branch[3]+'.pt'))
            AntiKt4EMPFlowJetsAux_eta.append(tree.array(branch[3]+'.eta'))
            AntiKt4EMPFlowJetsAux_phi.append(tree.array(branch[3]+'.phi'))
            AntiKt4EMTopoJetsAux_m.append(tree.array(branch[4]+'.m'))
            AntiKt4EMTopoJetsAux_pt.append(tree.array(branch[4]+'.pt'))
            AntiKt4EMTopoJetsAux_eta.append(tree.array(branch[4]+'.eta'))
            AntiKt4EMTopoJetsAux_phi.append(tree.array(branch[4]+'.phi'))
            AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m.append(tree.array(branch[5]+'.m'))
            AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt.append(tree.array(branch[5]+'.pt'))
            AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta.append(tree.array(branch[5]+'.eta'))
            AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi.append(tree.array(branch[5]+'.phi'))
            AntiKtVR30Rmax4Rmin02TrackJetsAux_m.append(tree.array(branch[6]+'.m'))
            AntiKtVR30Rmax4Rmin02TrackJetsAux_pt.append(tree.array(branch[6]+'.pt'))
            AntiKtVR30Rmax4Rmin02TrackJetsAux_eta.append(tree.array(branch[6]+'.eta'))
            AntiKtVR30Rmax4Rmin02TrackJetsAux_phi.append(tree.array(branch[6]+'.phi'))


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
            
