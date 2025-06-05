import sys
import user
import ROOT
import os
import numpy as np
from math import fabs

def main():
	ROOT.gROOT.SetBatch(True)
	ROOT.gROOT.SetStyle('ATLAS')
	inFile_mc = ROOT.TFile('/eos/user/d/dportill/storage/DJR/Ntuples_Variations/New_Ntuples/Background/MC16.root', 'READ')
	inFile_data= ROOT.TFile('/eos/user/d/dportill/storage/DJR/Ntuples_Variations/New_Ntuples/Data/data.root', 'READ')
	
	lead_and_sub = False

	eta_vals = [0., 0.5, 1., 1.5, 2.]
	cr_hist_name_mc = 'h_cr_mc_'
	vr_hist_name_mc = 'h_vr_mc_'
	cr_hist_name_data = 'h_cr_data_'
	vr_hist_name_data = 'h_vr_data_'	
	
	h_eta = ROOT.TH1D('h_eta', 'h_eta', 4, eta_vals)#THIS BIT NOT WORKING SO CHECK BACK WITH NATHAN TO SEE WHAT HE WAS GETTING AT THERE

	cr_mc_hists = []
	vr_mc_hists = []
	cr_data_hists = []
	vr_data_hists = []
	ratio_hists = []

	for i in range(len(eta_vals)-1):
		cr_name_mc = cr_hist_name_mc + str(i)
		vr_name_mc = vr_hist_name_mc + str(i)
		cr_name_data = cr_hist_name_data + str(i)
                vr_name_data = vr_hist_name_data + str(i)
		
		h_cr_mc = ROOT.TH1D(cr_name_mc, cr_name_mc, 50, 1300, 5000)
		h_cr_mc.Sumw2()
		cr_mc_hists.append(h_cr_mc)		
		h_vr_mc = ROOT.TH1D(vr_name_mc, vr_name_mc, 50, 1300, 5000)
		h_vr_mc.Sumw2()
		vr_mc_hists.append(h_vr_mc)

                h_cr_data = ROOT.TH1D(cr_name_data, cr_name_data, 50, 1300, 5000)
                h_cr_data.Sumw2()
                cr_data_hists.append(h_cr_data)
                h_vr_data = ROOT.TH1D(vr_name_data, vr_name_data, 50, 1300, 5000)
                h_vr_data.Sumw2()
                vr_data_hists.append(h_vr_data)
	
	tree_name_mc = 'nominal_0'
	tree_name_data = 'nominal'

	tree_mc = inFile_mc.Get(tree_name_mc)
	tree_data = inFile_data.Get(tree_name_data)

	for event in range(10):#tree_mc.GetEntries()):
		tree_mc.GetEntry(event)
		eta_bin_lead = h_eta.FindBin(fabs(tree_mc.lead_jet_eta))-1
		eta_bin_sub = h_eta.FindBin(fabs(tree_mc.sub_jet_eta))-1
		if(lead_and_sub == True and eta_bin_lead != eta_bin_sub):
			continue
		if(tree_mc.lead_jet_ntrkEps_fit<0 and tree_mc.sub_jet_ntrkEps_fit<0): #CR: < < | VR: > <
                        cr_mc_hists[eta_bin_lead].Fill(tree_mc.mjj, tree_mc.TotalEventWeight)
		if(tree_mc.lead_jet_ntrkEps_fit>0 and tree_mc.sub_jet_ntrkEps_fit<0): 
                        vr_mc_hists[eta_bin_lead].Fill(tree_mc.mjj, tree_mc.TotalEventWeight)

	for event in range(10):#tree_data.GetEntries()):
                tree_data.GetEntry(event)
                eta_bin_lead = h_eta.FindBin(fabs(tree_data.lead_jet_eta))-1
                eta_bin_sub = h_eta.FindBin(fabs(tree_data.sub_jet_eta))-1
                if(lead_and_sub == True and eta_bin_lead != eta_bin_sub):
                        continue
                if(tree_data.lead_jet_ntrkEps_fit<0 and tree_data.sub_jet_ntrkEps_fit<0): #CR: < < | VR: > <
                        cr_data_hists[eta_bin_lead].Fill(tree_data.mjj, tree_data.TotalEventWeight)
                if(tree_data.lead_jet_ntrkEps_fit>0 and tree_data.sub_jet_ntrkEps_fit<0):
                        vr_data_hists[eta_bin_lead].Fill(tree_data.mjj, tree_data.TotalEventWeight)
	
	for i in range(len(eta_vals)-1):
		histo_mc_name = 'h_mc_'+str(i)
		histo_mc = vr_mc_hists[i].Clone(histo_mc_name)
		histo_mc.Sumw2()
		histo_mc.Divide(cr_mc_hists[i])

		histo_data_name = 'h_data_'+str(i)
                histo_data = vr_data_hists[i].Clone(histo_data_name)
                histo_data.Sumw2()
                histo_data.Divide(cr_data_hists[i])

		ratio_name = 'h_ratio_'+str(i)
		h_ratio = histo_data.Clone(ratio_name)
		h_ratio.Sumw2()
		h_ratio.Divide(histo_mc)
		ratio_hists.append(h_ratio)
		
	for i in ratio_hists:
        	i.SetDirectory(0)

        inFile.Close()

        outFile = ROOT.TFile('double_ratio_hists.root', 'RECREATE')
        outFile.cd()
	for i in ratio_hists:
        	i.Write()

        outFile.Close()

if __name__ == '__main__':
        main()
