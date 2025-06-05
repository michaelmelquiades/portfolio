import uproot
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import os

def svj_plotter (path):
    colours = ['green', 'blue', 'red', 'orange', 'yellow', 'purple', 'pink']
    x_labels = ['Mass (GeV)', 'Transverse Momentum (GeV)', 'Pseudo-rapidity', 'Phi (radians)']


    file = uproot.open(path)
    plot_name = path[:-4]+'pdf'
    #plot_title = path[:-5]

    legend_labels = ['AntiKt10TruthTrimmedPtFrac5SmallR20Jets',
                     'AntiKt4TruthJets',
                     'AntiKt2LCTopoJets',
                     'AntiKt4EMPFlowJets',
                     'AntiKt4EMTopoJets',]
                     #'AntiKtVR30Rmax4Rmin02TrackGhostTagJets',]
                     #'AntiKtVR30Rmax4Rmin02TrackJets']

    mass = [file['truth_trim_10_m'].values,
            file['truth_jets_4_m'].values,
            file['topo_jets_2_m'].values,
            file['flow_jets_4_m'].values,
            file['topo_jets_4_m'].values,]
            #file['vr_30_ghost_m'].values,]
            #file['vr_30_jets_m'].values]
    mass_edges = [file['truth_trim_10_m'].edges,
                  file['truth_jets_4_m'].edges,
                  file['topo_jets_2_m'].edges,
                  file['flow_jets_4_m'].edges,
                  file['topo_jets_4_m'].edges,]
                  #file['vr_30_ghost_m'].edges,]
                  #file['vr_30_jets_m'].edges]

    pt = [file['truth_trim_10_pt'].values,
            file['truth_jets_4_pt'].values,
            file['topo_jets_2_pt'].values,
            file['flow_jets_4_pt'].values,
            file['topo_jets_4_pt'].values,]
            #file['vr_30_ghost_pt'].values,]
            #file['vr_30_jets_pt'].values]
    pt_edges = [file['truth_trim_10_pt'].edges,
                  file['truth_jets_4_pt'].edges,
                  file['topo_jets_2_pt'].edges,
                  file['flow_jets_4_pt'].edges,
                  file['topo_jets_4_pt'].edges,]
                  #file['vr_30_ghost_pt'].edges,]
                  #file['vr_30_jets_pt'].edges]

    eta = [file['truth_trim_10_eta'].values,
            file['truth_jets_4_eta'].values,
            file['topo_jets_2_eta'].values,
            file['flow_jets_4_eta'].values,
            file['topo_jets_4_eta'].values,]
            #file['vr_30_ghost_eta'].values,]
            #file['vr_30_jets_eta'].values]
    eta_edges = [file['truth_trim_10_eta'].edges,
                  file['truth_jets_4_eta'].edges,
                  file['topo_jets_2_eta'].edges,
                  file['flow_jets_4_eta'].edges,
                  file['topo_jets_4_eta'].edges,]
                  #file['vr_30_ghost_eta'].edges,]
                  #file['vr_30_jets_eta'].edges]

    phi = [file['truth_trim_10_phi'].values,
            file['truth_jets_4_phi'].values,
            file['topo_jets_2_phi'].values,
            file['flow_jets_4_phi'].values,
            file['topo_jets_4_phi'].values,]
            #file['vr_30_ghost_phi'].values,]
            #file['vr_30_jets_phi'].values]
    phi_edges = [file['truth_trim_10_phi'].edges,
                  file['truth_jets_4_phi'].edges,
                  file['topo_jets_2_phi'].edges,
                  file['flow_jets_4_phi'].edges,
                  file['topo_jets_4_phi'].edges,]
                  #file['vr_30_ghost_phi'].edges,]
                  #file['vr_30_jets_phi'].edges]

    plt.figure()
    for i in range(len(mass)):
        sns.histplot(data = mass[i],
                     bins = mass_edges[i],
                     color = colours[i],
                     #element = 'step',
                     #fill = False,
                     label = legend_labels[i])

    plt.title('Mass')
    plt.xlabel('Mass (GeV)')
    plt.legend()
    plt.savefig('mass_plots/'+plot_name)

    plt.figure()
    for i in range(len(pt)):
        fig_pt = sns.histplot(data = pt[i],
                              bins = pt_edges[i],
                              color = colours[i],
                              #element = 'step',
                              #fill = False,
                              label = legend_labels[i])

    plt.title('Transverse Momentum')
    plt.xlabel('Transverse Momentum (GeV)')
    plt.legend()
    plt.savefig('pt_plots/'+plot_name)

    plt.figure()
    for i in range(len(eta)):
        fig_eta = sns.histplot(data = eta[i],
                               bins = eta_edges[i],
                               color = colours[i],
                               #element = 'step',
                               #fill = False,
                               label = legend_labels[i])

    plt.title('Pseudo-rapidity')
    plt.xlabel('Pseudo-rapidity')
    plt.legend()
    plt.savefig('eta_plots/'+plot_name)

    plt.figure()
    for i in range(len(phi)):
        fig_phi = sns.histplot(data = phi[i],
                               bins = phi_edges[i],
                               color = colours[i],
                               #element = 'step',
                               #fill = False,
                               label = legend_labels[i])

    plt.title('Phi')
    plt.xlabel('Phi (radians)')
    plt.legend()
    plt.savefig('phi_plots/'+plot_name)
