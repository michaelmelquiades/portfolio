from __future__ import division
from ROOT import TCanvas, TPad, TFile, TTree, TH1F, TLorentzVector, THStack, TLegend
from ROOT import gROOT, kBlue, kRed, kGreen, kMagenta
import pandas as pd

#Plotting code
def jet_plotter(hist_list, hist_stack, save_name):
	factor = 1.
        legend = TLegend(0.75, 0.75, 0.95, 0.95)
        colours = [kBlue, kRed, kGreen, kMagenta]
        jets = ['Jet 1', 'Jet 2', 'Jet 3', 'Jet 4']
        for i in range(len(hist_list)):
                hist_list[i].SetLineColor(colours[i])
                hist_list[i].SetLineWidth(3)
		hist_list[i].Scale(factor/hist_list[i].Integral())
		hist_stack.Add(hist_list[i], 'HIST')      
                legend.AddEntry(hist_list[i], jets[i])

	hist_stack.Draw('nostack')
        legend.Draw()
        plot_name = 'plots/' + save_name
        c1.SaveAs(plot_name)

#Counts how many jet types there are in a list
def unique(list1):
	unique = []
	for i in list1:
		if i not in unique:
			unique.append(i)
	return len(unique), unique

c1 = TCanvas('c1', 'Histogram Drawing Options', 200, 10, 700, 900)

daodfile = TFile('/afs/cern.ch/user/j/jodavies/darkjetresonances/DAODtoNTUPLE/run/DAODtoTTREE_10000_Test/data-tree/DAODtoNTUPLE.root')
nomtree = daodfile.Get('outTree/nominal')


num_jets = 4
deltaR_lim = 0.5

particle_list = [-4900101, -53, -51, 51, 53, 4900101] 
particle_list_51 = [-51, 51]
particle_list_53 = [-53, 53]

tru_vec = TLorentzVector()
reco_vec = TLorentzVector()
deltaR_lt = []
deltaR_lt_pos = []

truthBSM_pdgIDs = []

match_2to1_1n2_5x = 0
match_2to1_1n3_5x = 0
match_2to1_1n4_5x = 0
match_2to1_2n3_5x = 0
match_2to1_2n4_5x = 0
match_2to1_3n4_5x = 0

match_2to1_1n2_bsm = 0
match_2to1_1n3_bsm = 0
match_2to1_1n4_bsm = 0
match_2to1_2n3_bsm = 0
match_2to1_2n4_bsm = 0
match_2to1_3n4_bsm = 0

#Histo initialization
#Total num truth matched bsm
hsnum_lt = THStack('hsnum_lt', 'Total Number of Truth Matched BSM Particles A4')
hnum_deltaR_lt_j1 = TH1F('hNumDeltaRj1', 'Jet 1', 30, 0, 30)
hnum_deltaR_lt_j2 = TH1F('hNumDeltaRj2', 'Jet 2', 30, 0, 30)
hnum_deltaR_lt_j3 = TH1F('hNumDeltaRj3', 'Jet 3', 30, 0, 30)
hnum_deltaR_lt_j4 = TH1F('hNumDeltaRj4', 'Jet 4', 30, 0, 30)

#Total num truth matched 51 and 53
hsnum_51 = THStack('hsnum_51', 'Total Number of Truth Matched +/-51')
hsnum_53 = THStack('hsnum_53', 'Total Number of Truth Matched +/-53')
hnum_51_j1 = TH1F('hnum_51_j1', 'Jet 1', 8, 0, 8)
hnum_53_j1 = TH1F('hnum_53_j1', 'Jet 1', 12, 0, 12)
hnum_51_j2 = TH1F('hnum_51_j2', 'Jet 2', 8, 0, 8)
hnum_53_j2 = TH1F('hnum_53_j1', 'Jet 2', 12, 0, 12)
hnum_51_j3 = TH1F('hnum_51_j3', 'Jet 3', 8, 0, 8)
hnum_53_j3 = TH1F('hnum_53_j1', 'Jet 3', 12, 0, 12)
hnum_51_j4 = TH1F('hnum_51_j4', 'Jet 4', 8, 0, 8)
hnum_53_j4 = TH1F('hnum_53_j1', 'Jet 4', 12, 0, 12)


for event in range(nomtree.GetEntries()):
	temp1 = []
	temp2 = []
	
	nomtree.GetEntry(event)
	tru_pt = getattr(nomtree, 'truthBSM_pt')
	tru_phi = getattr(nomtree, 'truthBSM_phi')
        tru_eta = getattr(nomtree, 'truthBSM_eta')
       	tru_e = getattr(nomtree, 'truthBSM_e')

	reco_pt = getattr(nomtree, 'a4_pflowjets_raw_pt')
        reco_phi = getattr(nomtree, 'a4_pflowjets_raw_phi')
        reco_eta = getattr(nomtree, 'a4_pflowjets_raw_eta')
        reco_e = getattr(nomtree, 'a4_pflowjets_raw_E')

	tru_bsm_pdgid = getattr(nomtree, 'truthBSM_pdgId')
	
	try:
		for jet in range(num_jets):
			for obj in range(tru_phi.size()):
				reco_vec.SetPtEtaPhiE(reco_pt[jet], reco_eta[jet], reco_phi[jet], reco_e[jet]);
				tru_vec.SetPtEtaPhiE(tru_pt[obj], tru_eta[obj], tru_phi[obj], tru_e[obj]);
				deltaR = reco_vec.DeltaR(tru_vec)
				if deltaR <= deltaR_lim:
					temp1.append([jet, deltaR])
					temp2.append([jet, event, obj])
				else: 
					continue

		#deltaR_lt.append(temp1)
		#deltaR_lt_pos.append(temp2)
		deltaR_lt = temp1
		deltaR_lt_pos = temp2
	except:
		#deltaR_lt.append([-999, -999])
		#deltaR_lt_pos.append([-999, -999, -999])
		deltaR_lt = [-999, -999]
		deltaR_lt_pos = [-999, -999, -999]

	#make the histos for total num truth matched bsm
	temp0 = 0
	temp1 = 0
	temp2 = 0
	temp3 = 0
	try:
		for j in deltaR_lt:
			if j[0] == 0:
				temp0+=1
			if j[0] == 1:
				temp1+=1
			if j[0] == 2:
				temp2+=1
			if j[0] == 3:
				temp3+=1

		hnum_deltaR_lt_j1.Fill(temp0)
		hnum_deltaR_lt_j2.Fill(temp1)
		hnum_deltaR_lt_j3.Fill(temp2)
		hnum_deltaR_lt_j4.Fill(temp3)
	except:
		continue
	
	#Create the matched pdgid data
	temp = []
	try:
		for i in deltaR_lt_pos:
			if i != []:
				temp.append([i[0], tru_bsm_pdgid[i[2]]])
			else:
				temp.append([-999, -999])
	
		truthBSM_matched_jets_pdgid = temp
	except: 
		continue
	
	#fill histos for 51 and 53 matched num
	temp511 = 0
	temp512 = 0
	temp513 = 0
	temp514 = 0
	temp531 = 0
        temp532 = 0
        temp533 = 0
        temp534 = 0
	try:
		for i in truthBSM_matched_jets_pdgid:
			if i[1] in particle_list_51:
				if i[0] == 0:
					temp511+=1
                                elif i[0] == 1:
                                        temp512+=1
                                elif i[0] == 2:
                                        temp513+=1
                                elif i[0] == 3:
                                        temp514+=1
                        elif i[1] in particle_list_53:
				if i[0] == 0:
                                        temp531+=1
                                elif i[0] == 1:
                                        temp532+=1
                                elif i[0] == 2:
                                        temp533+=1
                                elif i[0] == 3:
                                        temp534+=1

		hnum_51_j1.Fill(temp511)
                hnum_51_j2.Fill(temp512)
                hnum_51_j3.Fill(temp513)
                hnum_51_j4.Fill(temp514)
                hnum_53_j1.Fill(temp531)
                hnum_53_j2.Fill(temp532)
                hnum_53_j3.Fill(temp533)
                hnum_53_j4.Fill(temp534)

        except:
                continue



	#Making the matched 2to1 for 5x particles
	jets = []
	particles = []
	try:
		for i in truthBSM_matched_jets_pdgid:
			jets.append(i[0])
			particles.append(i[1])
		jet = []
		for j in range(len(particles)):
			if (particles[j] in particle_list_51) or (particles[j] in particle_list_53):
				jet.append(jets[j])
		
		unique_count, unique_arr = unique(jet)
		if unique_count >= 2:
			if (0 in unique_arr) and (1 in unique_arr):
				match_2to1_1n2_5x+=1
			if (0 in unique_arr) and (2 in unique_arr):
                                match_2to1_1n3_5x+=1 
                        if (0 in unique_arr) and (3 in unique_arr):
                                match_2to1_1n4_5x+=1 
                        if (1 in unique_arr) and (2 in unique_arr):
                                match_2to1_2n3_5x+=1
                        if (1 in unique_arr) and (3 in unique_arr):
                                match_2to1_2n4_5x+=1
                        if (2 in unique_arr) and (3 in unique_arr):
                                match_2to1_3n4_5x+=1

	except:
		continue

	#Making the matched 2to1 for all bsm particles
        try:
                jet = []
                for j in range(len(particles)):
                        if (particles[j] in particle_list):
                                jet.append(jets[j])
                
		unique_count, unique_arr = unique(jet)
                if unique_count >= 2:
                        if (0 in unique_arr) and (1 in unique_arr):
                                match_2to1_1n2_bsm+=1
                        if (0 in unique_arr) and (2 in unique_arr):
                                match_2to1_1n3_bsm+=1
                        if (0 in unique_arr) and (3 in unique_arr):
                                match_2to1_1n4_bsm+=1
                        if (1 in unique_arr) and (2 in unique_arr):
                                match_2to1_2n3_bsm+=1
                        if (1 in unique_arr) and (3 in unique_arr):
                                match_2to1_2n4_bsm+=1
                        if (2 in unique_arr) and (3 in unique_arr):
                                match_2to1_3n4_bsm+=1

        except:
		continue
	
#Total num truth matched bsm
jet_plotter([hnum_deltaR_lt_j1, hnum_deltaR_lt_j2, hnum_deltaR_lt_j3, hnum_deltaR_lt_j4], hsnum_lt, 'hnum_deltaR_lt.pdf')
#Total num truth matched 51
jet_plotter([hnum_51_j1, hnum_51_j2, hnum_51_j3, hnum_51_j4], hsnum_51, 'hsnum_51.pdf')
#Total num truth matched 53
jet_plotter([hnum_53_j1, hnum_53_j2, hnum_53_j3, hnum_53_j4], hsnum_53, 'hsnum_53.pdf')

#Creation of the jet tables
percent_2to1_1n2_5x = round(match_2to1_1n2_5x/nomtree.GetEntries(), 4) * 100
percent_2to1_1n3_5x = round(match_2to1_1n3_5x/nomtree.GetEntries(), 4) * 100
percent_2to1_1n4_5x = round(match_2to1_1n4_5x/nomtree.GetEntries(), 4) * 100
percent_2to1_2n3_5x = round(match_2to1_2n3_5x/nomtree.GetEntries(), 4) * 100
percent_2to1_2n4_5x = round(match_2to1_2n4_5x/nomtree.GetEntries(), 4) * 100
percent_2to1_3n4_5x = round(match_2to1_3n4_5x/nomtree.GetEntries(), 4) * 100

percent_2to1_1n2_bsm = round(match_2to1_1n2_bsm/nomtree.GetEntries(), 4) * 100
percent_2to1_1n3_bsm = round(match_2to1_1n3_bsm/nomtree.GetEntries(), 4) * 100
percent_2to1_1n4_bsm = round(match_2to1_1n4_bsm/nomtree.GetEntries(), 4) * 100
percent_2to1_2n3_bsm = round(match_2to1_2n3_bsm/nomtree.GetEntries(), 4) * 100
percent_2to1_2n4_bsm = round(match_2to1_2n4_bsm/nomtree.GetEntries(), 4) * 100
percent_2to1_3n4_bsm = round(match_2to1_3n4_bsm/nomtree.GetEntries(), 4) * 100

data = [['Jets (A10 5x)', 1, 2, 3, 4], 
	[1, 0, percent_2to1_1n2_5x, percent_2to1_1n3_5x, percent_2to1_1n4_5x], 
	[2, 0, 0, percent_2to1_2n3_5x, percent_2to1_2n4_5x], 
	[3, 0, 0, 0, percent_2to1_3n4_5x], 
	[4, 0, 0, 0, 0]]
df = pd.DataFrame(columns = data[0], data = data[1:])
print(df)
df.to_csv('plots/jet_table_5x.csv')

data = [['Jets (A10 BSM)', 1, 2, 3, 4],
        [1, 0, percent_2to1_1n2_bsm, percent_2to1_1n3_bsm, percent_2to1_1n4_bsm],
        [2, 0, 0, percent_2to1_2n3_bsm, percent_2to1_2n4_bsm],
        [3, 0, 0, 0, percent_2to1_3n4_bsm], 
	[4, 0, 0, 0, 0]]
df = pd.DataFrame(columns = data[0], data = data[1:])
print(df)
df.to_csv('plots/jet_table_bsm.csv')
