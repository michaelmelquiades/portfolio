import ROOT
import sys
import os

#ROOT.gSystem.Load(libraryName("JES_ResponseFitter"))
sys.path.insert(0, 'JES_ResponseFitter/scripts/')
import JES_ResponseFitter

def main():
	ROOT.gROOT.SetBatch(ROOT.kTRUE)
	ROOT.gROOT.SetStyle('ATLAS')

	inFile = ROOT.TFile('~/darkjetresonances/Plotting/out_roots/cr_mc_hist.root', 'READ')
	
	c = ROOT.TCanvas('c', 'c')
		
	h_mc_cr = inFile.Get('h')
	h_mc_cr.Draw('HIST SAME PLC PMC')

	n_sigma_for_fit = 1.68
	#my_fitter = ROOT.JES_ResponseFitter(n_sigma_for_fit)
	#my_fitter = JES_ResponseFitter.JES_ResponseFitter(n_sigma_for_fit)
	my_fitter.SetGaus()
	my_fitter.smartFit = True
	my_fitter.rebin = True
	my_fitter.SetFitColor(ROOT.kRed)
	
	my_fitter.Fit(h_mc_cr)
	mean = my_fitter.GetMean()
	mean_err = my_fitter.GetMeanError()
	sigma = my_fitter.GetSigma()
	sigma_err = my_fitter.GetSigmaError()



if __name__ == '__main__':
	main()
