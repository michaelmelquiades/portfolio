import os
import uproot
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

def arr_filler (branch, var, tree):
    val = np.array([])
    for i in range(len(tree.array(branch+var))):
        for j in range(len(tree.array(branch+var)[i])):
            np.append(val, tree.array(branch+var)[i][j])
    return val

def svj_plotter (directory_path):
    files = [file for file in os.listdir(directory_path)]

    truth_trim_10_m = np.array([])
    truth_trim_10_pt = np.array([])
    truth_trim_10_eta = np.array([])
    truth_trim_10_phi = np.array([])

    truth_jets_4_m = np.array([])
    truth_jets_4_pt = np.array([])
    truth_jets_4_eta = np.array([])
    truth_jets_4_phi = np.array([])

    topo_jets_2_m = np.array([])
    topo_jets_2_pt = np.array([])
    topo_jets_2_eta = np.array([])
    topo_jets_2_phi = np.array([])

    flow_jets_4_m = np.array([])
    flow_jets_4_pt = np.array([])
    flow_jets_4_eta = np.array([])
    flow_jets_4_phi = np.array([])

    topo_jets_4_m = np.array([])
    topo_jets_4_pt = np.array([])
    topo_jets_4_eta = np.array([])
    topo_jets_4_phi = np.array([])

    vr_30_ghost_m = np.array([])
    vr_30_ghost_pt = np.array([])
    vr_30_ghost_eta = np.array([])
    vr_30_ghost_phi = np.array([])

    vr_30_jets_m = np.array([])
    vr_30_jets_pt = np.array([])
    vr_30_jets_eta = np.array([])
    vr_30_jets_phi = np.array([])


    for file in files:
        temp_file = uproot.open(file)
        tree = temp_file['CollectionTree']
        np.append(truth_trim_10_m, arr_filler('antikt10TruthTrimmedPtFrac5SmallR20JetsAux.', 'm', tree))
        np.append(truth_trim_10_pt, arr_filler('antikt10TruthTrimmedPtFrac5SmallR20JetsAux.', 'pt', tree))
        np.append(truth_trim_10_eta, arr_filler('antikt10TruthTrimmedPtFrac5SmallR20JetsAux.', 'eta', tree))
        np.append(truth_trim_10_phi, arr_filler('antikt10TruthTrimmedPtFrac5SmallR20JetsAux.', 'phi', tree))

        np.append(truth_jets_4_m, arr_filler('antikt4TruthJetsAux.', 'm', tree))
        np.append(truth_jets_4_pt, arr_filler('antikt4TruthJetsAux.', 'pt', tree))
        np.append(truth_jets_4_eta, arr_filler('antikt4TruthJetsAux.', 'eta', tree))
        np.append(truth_jets_4_phi, arr_filler('antikt4TruthJetsAux.', 'phi', tree))

        np.append(topo_jets_2_m, arr_filler('antikt2LCTopoJetsAux.', 'm', tree))
        np.append(topo_jets_2_pt, arr_filler('antikt2LCTopoJetsAux.', 'pt', tree))
        np.append(topo_jets_2_eta, arr_filler('antikt2LCTopoJetsAux.', 'eta', tree))
        np.append(topo_jets_2_phi, arr_filler('antikt2LCTopoJetsAux.', 'phi', tree))

        np.append(flow_jets_4_m, arr_filler('antikt4EMPFlowJetsAux.', 'm', tree))
        np.append(flow_jets_4_pt, arr_filler('antikt4EMPFlowJetsAux.', 'pt', tree))
        np.append(flow_jets_4_eta, arr_filler('antikt4EMPFlowJetsAux.', 'eta', tree))
        np.append(flow_jets_4_phi, arr_filler('antikt4EMPFlowJetsAux.', 'phi', tree))

        np.append(topo_jets_4_m, arr_filler('antikt4EMTopoJetsAux.', 'm', tree))
        np.append(topo_jets_4_pt, arr_filler('antikt4EMTopoJetsAux.', 'pt', tree))
        np.append(topo_jets_4_eta, arr_filler('antikt4EMTopoJetsAux.', 'eta', tree))
        np.append(topo_jets_4_phi, arr_filler('antikt4EMTopoJetsAux.', 'phi', tree))

        np.append(vr_30_ghost_m, arr_filler('antiktVR30Rmax4Rmin02TrackGhostTagJetsAux.', 'm', tree))
        np.append(vr_30_ghost_pt, arr_filler('antiktVR30Rmax4Rmin02TrackGhostTagJetsAux.', 'pt', tree))
        np.append(vr_30_ghost_eta, arr_filler('antiktVR30Rmax4Rmin02TrackGhostTagJetsAux.', 'eta', tree))
        np.append(vr_30_ghost_phi, arr_filler('antiktVR30Rmax4Rmin02TrackGhostTagJetsAux.', 'phi', tree))

        np.append(vr_30_jets_m, arr_filler('antiktVR30Rmax4Rmin02TrackJetsAux.', 'm', tree))
        np.append(vr_30_jets_pt, arr_filler('antiktVR30Rmax4Rmin02TrackJetsAux.', 'pt', tree))
        np.append(vr_30_jets_eta, arr_filler('antiktVR30Rmax4Rmin02TrackJetsAux.', 'eta', tree))
        np.append(vr_30_jets_phi, arr_filler('antiktVR30Rmax4Rmin02TrackJetsAux.', 'phi', tree))


    truth_trim_10_m = truth_trim_10_m.flatten()/1000.
    truth_trim_10_pt = truth_trim_10_pt.flatten()/1000.
    truth_trim_10_eta = truth_trim_10_eta.flatten()
    truth_jets_4_phi = truth_trim_10_phi.flatten()

    truth_jets_4_m = truth_jets_4_m.flatten()/1000.
    truth_jets_4_pt = truth_jets_4_pt.flatten()/1000.
    truth_jets_4_eta = truth_jets_4_eta.flatten()
    truth_jets_4_phi = truth_jets_4_phi.flatten()

    topo_jets_2_m = topo_jets_2_m.flatten()/1000.
    topo_jets_2_pt = topo_jets_2_pt.flatten()/1000.
    topo_jets_4_eta = topo_jets_2_eta.flatten()
    topo_jets_2_phi = topo_jets_2_phi.flatten()

    flow_jets_4_m = flow_jets_4_m.flatten()/1000.
    flow_jets_4_pt = flow_jets_4_pt.flatten()/1000.
    flow_jets_4_eta = flow_jets_4_eta.flatten()
    flow_jets_4_phi = flow_jets_4_phi.flatten()

    topo_jets_4_m = topo_jets_4_pt.flatten()/1000.
    topo_jets_4_pt = topo_jets_4_pt.flatten()/1000.
    topo_jets_4_eta = topo_jets_4_eta.flatten()
    topo_jets_4_phi = topo_jets_4_phi.flatten()

    vr_30_ghost_m = vr_30_ghost_m.flatten()/1000.
    vr_30_ghost_pt = vr_30_ghost_pt.flatten()/1000.
    vr_30_ghost_eta = vr_30_ghost_eta.flatten()
    vr_30_ghost_phi = vr_30_ghost_phi.flatten()

    vr_30_jets_m = vr_30_jets_m.flatten()/1000.
    vr_30_jets_pt = vr_30_jets_pt.flatten()/1000.
    vr_30_jets_eta = vr_30_jets_eta.flatten()
    vr_30_jets_phi = vr_30_jets_phi.flatten()

    colours = ['green', 'blue', 'red', 'orange', 'yellow', 'purple', 'pink']
    ###X-LABELS###
    mass = [truth_trim_10_m, truth_jets_4_m, topo_jets_2_m, flow_jets_4_m, topo_jets_4_m, vr_30_ghost_m, vr_30_jets_m]
    pt = [truth_trim_10_pt, truth_jets_4_pt, topo_jets_2_pt, flow_jets_4_pt, topo_jets_4_pt, vr_30_ghost_pt, vr_30_jets_pt]
    eta = [truth_trim_10_eta, truth_jets_4_eta, topo_jets_2_eta, flow_jets_4_eta, topo_jets_4_eta, vr_30_ghost_eta, vr_30_jets_eta]
    phi = [truth_trim_10_phi, truth_jets_4_phi, topo_jets_2_phi, flow_jets_4_phi, topo_jets_4_phi, vr_30_ghost_phi, vr_30_jets_phi]

    fig_m = plt.figure()
    fig_pt = plt.figure()
    fig_eta = plt.figure()
    fig_phi = plt.figure()

    for i in range(len(mass)):
        fig_m = sns.histplot(data = mass[i], color = colours[i], element = 'step')
###MAKE THE GRAPHS###
