#import uproot3 as uproot 
import uproot
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import pandas as pd

def svj_plotter_test(path):
    file = uproot.open(path)
    tree = file['outTree']['nominal']

    mass = []
    E = []
    pt = []
    eta = []
    phi = []

    for i in tree.keys():
        if 'muon' not in str(i):
            if str(i)[-2] == 'm':
                mass.append(i)
            elif str(i)[-2] == 'E':
                E.append(i)
            elif str(i)[-3:-1] == 'pt':
                pt.append(i)
            elif str(i)[-4:-1] == 'eta':
                eta.append(i)
            elif str(i)[-4:-1] == 'phi':
                phi.append(i)

    legend_m = [str(i)[2:-1] for i in mass]
    legend_E = [str(i)[2:-1] for i in E]
    legend_pt = [str(i)[2:-1] for i in pt]
    legend_eta = [str(i)[2:-1] for i in eta]
    legend_phi = [str(i)[2:-1] for i in phi]


    plt.figure(figsize = (10, 7))
    for i in range(len(mass)):
        values = tree.array(str(mass[i])[2:-1]).flatten()
        sns.histplot(x = values, color = colours[i], bins = 200, label = legend_m[i])

    plt.legend()
    plt.title('Event Count Against Mass')
    plt.xlabel('Mass (GeV)')
    plt.savefig('mass_plot')

    plt.figure(figsize = (10, 7))
    for i in range(len(E)):
        values = tree.array(str(E[i])[2:-1]).flatten()
        sns.histplot(x = values, color = colours[i], bins = 200, label = legend_E[i])

    plt.legend()
    plt.title('Event Count Against Energy')
    plt.xlabel('Energy (GeV)')
    plt.savefig('energy_plot')

    plt.figure(figsize = (10, 7))
    for i in range(len(pt)):
        values = tree.array(str(pt[i])[2:-1]).flatten()
        sns.histplot(x = values, color = colours[i], bins = 200, label = legend_pt[i])

    plt.legend()
    plt.xlim((0, 1500))
    plt.ylim((0, 8000))
    plt.title('Event Count Against Transverse Momentum')
    plt.xlabel('Transverse Momentum (GeV)')
    plt.savefig('pt_plot')

    plt.figure(figsize = (10, 7))
    for i in range(len(eta)):
        values = tree.array(str(eta[i])[2:-1]).flatten()
        sns.histplot(x = values, color = colours[i], bins = 200, label = legend_eta[i])

    plt.legend()
    plt.xlim((-5, 5))
    plt.ylim((0, 500))
    plt.title('Event Count Against Pseudo-rapidity')
    plt.xlabel('Pseudo-rapidity')
    plt.savefig('eta_plot')

    plt.figure(figsize = (10, 7))
    for i in range(len(phi)):
        values = tree.array(str(phi[i])[2:-1]).flatten()
        sns.histplot(x = values, color = colours[i], bins = 200, label = legend_phi[i])

    plt.legend()
    plt.xlim((-4, 4))
    plt.ylim((0, 200))
    plt.title('Event Count Against Phi')
    plt.xlabel('Phi (radians)')
    plt.savefig('phi_plot')
