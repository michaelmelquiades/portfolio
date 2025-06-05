#include <math.h>
#include <TChain.h>
#include "TString.h"
#include "TFileCollection.h"
#include "TFile.h"
#include "TTree.h"
#include "TH1.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void tree_maker(TString fname1, TString treename = "CollectionTree") {

TChain ch1(treename);
TString filestring1;

ifstream infile1(fname1);
if(!infile1){
	cout<<"Unable to open file: "<<fname1<<endl;
	return 0;
}

while(infile1>>filestring1){
	cout<<filestring1<<endl;
	ch1.Add(filestring1);
}

infile1.close();


TFile jet_file("jet_file.root", "RECREATE");
TTree jet_tree("jet_tree", "jet_tree");

vector<float> *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m;
vector<float> *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt;
vector<float> *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta;
vector<float> *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi;
TBranch * b_10_m = jet_tree.Branch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m);
TBranch	* b_10_pt = jet_tree.Branch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt);
TBranch	* b_10_eta = jet_tree.Branch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta);
TBranch	* b_10_phi = jet_tree.Branch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi);
ch1.SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m);
ch1.SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt);
ch1.SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta);
ch1.SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi);

vector<float> *AntiKt2LCTopoJetsAux_m;
vector<float> *AntiKt2LCTopoJetsAux_pt;
vector<float> *AntiKt2LCTopoJetsAux_eta;
vector<float> *AntiKt2LCTopoJetsAux_phi;
TBranch * b_2_m = jet_tree.Branch("AntiKt2LCTopoJetsAux.m", &AntiKt2LCTopoJetsAux_m);
TBranch * b_2_pt = jet_tree.Branch("AntiKt2LCTopoJetsAux.pt", &AntiKt2LCTopoJetsAux_pt);
TBranch * b_2_phi = jet_tree.Branch("AntiKt2LCTopoJetsAux.eta", &AntiKt2LCTopoJetsAux_eta);
TBranch * b_2_eta = jet_tree.Branch("AntiKt2LCTopoJetsAux.phi", &AntiKt2LCTopoJetsAux_phi);
ch1.SetBranchAddress("AntiKt2LCTopoJetsAux.m", &AntiKt2LCTopoJetsAux_m);
ch1.SetBranchAddress("AntiKt2LCTopoJetsAux.pt", &AntiKt2LCTopoJetsAux_pt);
ch1.SetBranchAddress("AntiKt2LCTopoJetsAux.eta", &AntiKt2LCTopoJetsAux_eta);
ch1.SetBranchAddress("AntiKt2LCTopoJetsAux.phi", &AntiKt2LCTopoJetsAux_phi);

vector<float> *AntiKt4EMPFlowJetsAux_m;
vector<float> *AntiKt4EMPFlowJetsAux_pt;
vector<float> *AntiKt4EMPFlowJetsAux_eta;
vector<float> *AntiKt4EMPFlowJetsAux_phi;
TBranch * b_4_pflow_m = jet_tree.Branch("AntiKt4EMPFlowJetsAux.m", &AntiKt4EMPFlowJetsAux_m);
TBranch * b_4_pflow_pt = jet_tree.Branch("AntiKt4EMPFlowJetsAux.pt", &AntiKt4EMPFlowJetsAux_pt);
TBranch * b_4_pflow_phi = jet_tree.Branch("AntiKt4EMPFlowJetsAux.eta", &AntiKt4EMPFlowJetsAux_eta);
TBranch * b_4_pflow_eta = jet_tree.Branch("AntiKt4EMPFlowJetsAux.phi", &AntiKt4EMPFlowJetsAux_phi);
ch1.SetBranchAddress("AntiKt4EMPFlowJetsAux.m", &AntiKt4EMPFlowJetsAux_m);
ch1.SetBranchAddress("AntiKt4EMPFlowJetsAux.pt", &AntiKt4EMPFlowJetsAux_pt);
ch1.SetBranchAddress("AntiKt4EMPFlowJetsAux.eta", &AntiKt4EMPFlowJetsAux_eta);
ch1.SetBranchAddress("AntiKt4EMPFlowJetsAux.phi", &AntiKt4EMPFlowJetsAux_phi);

vector<float> *AntiKt4EMTopoJetsAux_m;
vector<float> *AntiKt4EMTopoJetsAux_pt;
vector<float> *AntiKt4EMTopoJetsAux_eta;
vector<float> *AntiKt4EMTopoJetsAux_phi;
TBranch * b_4_topo_m = jet_tree.Branch("AntiKt4EMTopoJetsAux.m", &AntiKt4EMTopoJetsAux_m);
TBranch * b_4_topo_pt = jet_tree.Branch("AntiKt4EMTopoJetsAux.pt", &AntiKt4EMTopoJetsAux_pt);
TBranch * b_4_topo_phi = jet_tree.Branch("AntiKt4EMTopoJetsAux.eta", &AntiKt4EMTopoJetsAux_eta);
TBranch * b_4_topo_eta = jet_tree.Branch("AntiKt4EMTopoJetsAux.phi", &AntiKt4EMTopoJetsAux_phi);
ch1.SetBranchAddress("AntiKt4EMTopoJetsAux.m", &AntiKt4EMTopoJetsAux_m);
ch1.SetBranchAddress("AntiKt4EMTopoJetsAux.pt", &AntiKt4EMTopoJetsAux_pt);
ch1.SetBranchAddress("AntiKt4EMTopoJetsAux.eta", &AntiKt4EMTopoJetsAux_eta);
ch1.SetBranchAddress("AntiKt4EMTopoJetsAux.phi", &AntiKt4EMTopoJetsAux_phi);

vector<float> *AntiKt4TruthJetsAux_m;
vector<float> *AntiKt4TruthJetsAux_pt;
vector<float> *AntiKt4TruthJetsAux_eta;
vector<float> *AntiKt4TruthJetsAux_phi;
TBranch * b_4_truth_m = jet_tree.Branch("AntiKt4TruthJetsAux.m", &AntiKt4TruthJetsAux_m);
TBranch * b_4_truth_pt = jet_tree.Branch("AntiKt4TruthJetsAux.pt", &AntiKt4TruthJetsAux_pt);
TBranch * b_4_truth_phi = jet_tree.Branch("AntiKt4TruthJetsAux.eta", &AntiKt4TruthJetsAux_eta);
TBranch * b_4_truth_eta = jet_tree.Branch("AntiKt4TruthJetsAux.phi", &AntiKt4TruthJetsAux_phi);
ch1.SetBranchAddress("AntiKt4TruthJetsAux.m", &AntiKt4TruthJetsAux_m);
ch1.SetBranchAddress("AntiKt4TruthJetsAux.pt", &AntiKt4TruthJetsAux_pt);
ch1.SetBranchAddress("AntiKt4TruthJetsAux.eta", &AntiKt4TruthJetsAux_eta);
ch1.SetBranchAddress("AntiKt4TruthJetsAux.phi", &AntiKt4TruthJetsAux_phi);

vector<float> *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m;
vector<float> *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt;
vector<float> *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta;
vector<float> *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi;
TBranch * b_vr30_ghost_m = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.m", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m);
TBranch * b_vr30_ghost_pt = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.pt", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt);
TBranch * b_vr30_ghost_phi = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.eta", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta);
TBranch * b_vr30_ghost_eta = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.phi", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.m", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.pt", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.eta", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.phi", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi);

vector<float> *AntiKtVR30Rmax4Rmin02TrackJetsAux_m;
vector<float> *AntiKtVR30Rmax4Rmin02TrackJetsAux_pt;
vector<float> *AntiKtVR30Rmax4Rmin02TrackJetsAux_eta;
vector<float> *AntiKtVR30Rmax4Rmin02TrackJetsAux_phi;
TBranch * b_vr30_m = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackJetsAux.m", &AntiKtVR30Rmax4Rmin02TrackJetsAux_m);
TBranch * b_vr30_pt = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackJetsAux.pt", &AntiKtVR30Rmax4Rmin02TrackJetsAux_pt);
TBranch * b_vr30_phi = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackJetsAux.eta", &AntiKtVR30Rmax4Rmin02TrackJetsAux_eta);
TBranch * b_vr30_eta = jet_tree.Branch("AntiKtVR30Rmax4Rmin02TrackJetsAux.phi", &AntiKtVR30Rmax4Rmin02TrackJetsAux_phi);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.m", &AntiKtVR30Rmax4Rmin02TrackJetsAux_m);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.pt", &AntiKtVR30Rmax4Rmin02TrackJetsAux_pt);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.eta", &AntiKtVR30Rmax4Rmin02TrackJetsAux_eta);
ch1.SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.phi", &AntiKtVR30Rmax4Rmin02TrackJetsAux_phi);

/*
for(int i = 0; i < master->GetEntries(); i++) {
	master->GetEntry(i);
	if(master->GetListOfBranches()->FindObject("AntiKt4EMPFlowJetsAux")) {
		pflow_tree.Fill();
	}
	else if(master->GetListOfBranches()->FindObject("AntiKt4TruthJetsAux")) {
		truthjets_tree.Fill();
	}
}

pflow.Write("/data/atlas/jdavies/SVJ/");
truthjets.Write("/data/atlas/jdavies/SVJ/");
*/

for(int i = 0; i < ch1.GetEntries(); ++i) {
	ch1.GetEntry(i);
	/*
	AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m = ch1.GetBranch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.m"); 
	AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt = ch1.GetBranch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.pt");
	AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta = ch1.GetBranch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.eta");
	AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi = ch1.GetBranch("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.phi");
	*/
	jet_tree.Fill();
}

jet_file.Write("/data/atlas/jdavies/SVJ/");
jet_file.Close();
}
