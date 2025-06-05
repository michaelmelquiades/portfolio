import sys
import user
import ROOT
import os
import numpy as np
import math
from array import array

def energyCalc(tree):
	pt_true_lead = tree.lead_truthjet_pt
	eta_true_lead = tree.lead_truthjet_eta
	m_true_lead = tree.lead_truthjet_m
	
	pt_true_sub = tree.sub_truthjet_pt
	eta_true_sub = tree.sub_truthjet_eta
	m_true_sub = tree.sub_truthjet_m

	pt_reco_lead = tree.lead_jet_pt
	eta_reco_lead = tree.lead_jet_eta
	m_reco_lead = tree.lead_jet_m

	pt_reco_sub = tree.sub_jet_pt
	eta_reco_sub = tree.sub_jet_eta
	m_reco_sub = tree.sub_jet_m
	
	E_reco_lead = math.sqrt(pow(m_reco_lead, 2)+pow((pt_reco_lead*math.cosh(eta_reco_lead)), 2))
	E_true_lead = math.sqrt(pow(m_true_lead, 2)+pow((pt_true_lead*math.cosh(eta_true_lead)), 2))
	E_reco_sub = math.sqrt(pow(m_reco_sub, 2)+pow((pt_reco_sub*math.cosh(eta_reco_sub)), 2))
	E_true_sub = math.sqrt(pow(m_true_sub, 2)+pow((pt_true_sub*math.cosh(eta_true_sub)), 2))

	E_lead_ratio = E_reco_lead/E_true_lead
	E_sub_ratio = E_reco_sub/E_true_sub

	return E_true_lead, E_true_sub, E_lead_ratio, E_sub_ratio

def main():

        ROOT.gROOT.SetBatch(ROOT.kTRUE)
        ROOT.gROOT.SetStyle('ATLAS')
	
	c = ROOT.TCanvas('c', 'c')

	E_bins = [400., 500., 600., 800., 1000., 1200., 1500., 2000., 2500., 3000.]
	E_bins = array('d', E_bins)
	h_E = ROOT.TH1D('h_E', 'h_E', len(E_bins)-1, E_bins) 
	
	hists = []
	names = []
	for i in range(len(E_bins)-1):
		name = 'h_E_'+str(int(E_bins[i]))
		names.append(name)
		h_temp = ROOT.TH2D(name, name, 26, 400., 3000., 240, 0., 2.4)
		h_temp.Sumw2(ROOT.kTRUE)
		hists.append(h_temp)

        inFile = ROOT.TFile('/eos/user/n/nlalloue/signals/ModelA_1500.root', 'READ')

        tree_name = 'nominal_0'

        #h = ROOT.TH1D('h', 'h', 37, 1300, 5000)
        tree = inFile.Get(tree_name)
	num_entries = tree.GetEntries()
        if num_entries >= 1000.:
		for event in range(num_entries):
                	tree.GetEntry(event)
                	E_true_lead, E_true_sub, E_lead_ratio, E_sub_ratio = energyCalc(tree)
		
			lead_E_bin = h_E.FindBin(E_true_lead)-1
			hists[lead_E_bin].Fill(E_true_lead, E_lead_ratio, tree.TotalEventWeight)
		
			sub_E_bin = h_E.FindBin(E_true_sub)-1
			hists[sub_E_bin].Fill(E_true_sub, E_sub_ratio, tree.TotalEventWeight)
	else:
		print('Fewer than 1000 events, fit abandoned')
		
		


	for i in hists:
        	i.SetDirectory(0)

        inFile.Close()

        outFile = ROOT.TFile('JES_hists.root', 'RECREATE')
        outFile.cd()

	n_sigma_for_fit = 1.68
	my_fitter = ROOT.JES_BalanceFitter(n_sigma_for_fit)
        my_fitter.SetGaus()
        my_fitter.smartFit = True
        my_fitter.rebin = True

	legend = ROOT.TLegend(0.2, 0.5, 0.6, 0.75)
        legend.SetTextSize(0.045)
        legend.SetFillStyle(0)
        legend.SetFillColor(0)
        legend.SetBorderSize(0)
        legend.SetTextFont(42)

	for i in range(len(hists)):
		hists[i].GetZaxis().SetTitle('Number of Events')
		hists[i].GetYaxis().SetTitle('#frac{E_reco}{E_true}')
		hists[i].GetXaxis().SetTitle('Energy [GeV]')
		hists[i].SetLineWidth(2)
		hists[i].Draw('SAME E PLC PMC')
		
		my_fitter.Fit(hists[i])
		mean = my_fitter.GetMean()
        	mean_err = my_fitter.GetMeanError()
        	sigma = my_fitter.GetSigma()
        	sigma_err = my_fitter.GetSigmaError()
		fit = my_fitter.GetFit().Clone()
		fit.SetLineWidth(2)
		fit.Draw('SAME PLC PMC')
		
		legend.AddEntry(hists[i], names[i], 'l')
		legend.AddEntry(fit, 'Guassian fit for '+name+': #mu = %.2f#pm%.2f, #sigma = %.2f#pm%.2f'%(mean, mean_err, sigma, sigma_err), 'l')
				
        	hists[i].Write()

	tex = ROOT.TLatex()
        tex.SetNDC()
        tex.SetTextSize(0.055)
        tex.DrawLatex(0.2, 0.85, "#bf{#it{ATLAS}} Internal")
        tex.DrawLatex(0.2, 0.775, "#sqrt{s} = 13 TeV, 139 fb^{-1}")

        outFile.Close()

	c.SaveAs('jes_guass_fit.png')

if __name__ == '__main__':
        main()

