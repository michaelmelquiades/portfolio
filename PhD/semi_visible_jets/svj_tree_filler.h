//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Feb 21 23:10:04 2021 by ROOT version 6.22/00
// from TTree CollectionTree/CollectionTree
// found on file: mc16_13TeV.361031.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ11W.deriv.DAOD_EXOT27.e3569_s3126_r10201_p4049/DAOD_EXOT27.20138871._000190.pool.root.1
//////////////////////////////////////////////////////////

#ifndef svj_tree_filler_h
#define svj_tree_filler_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
//#include <DataVector.h>

// Header file for the classes stored in the TTree if any.
//#include "PileUpEventInfo_p5.h"
#include "AthContainers/DataVector.h"
#include "versions/TrigConfKeys_v1.h"
#include "versions/EventAuxInfo_v1.h"
#include "versions/TrigDecisionAuxInfo_v1.h"
#include "versions/EventInfo_v1.h"
#include "versions/EnergySumRoI_v2.h"
#include "versions/TrigNavigationAuxInfo_v1.h"
#include "versions/TrigDecision_v1.h"
#include "versions/MissingETAuxAssociationMap_v2.h"
#include "versions/MissingETAssociationMap_v1.h"
#include "versions/TrigNavigation_v1.h"
#include "versions/EventShapeAuxInfo_v1.h"
#include "versions/EventShape_v1.h"
#include "versions/EnergySumRoIAuxInfo_v2.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "versions/MissingETContainer_v1.h"
#include "AthContainers/DataVector.h"
#include "ShallowAuxContainer.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AuxContainerBase.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "versions/JetAuxContainer_v1.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "AthContainers/DataVector.h"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "ElementLinkBase.h"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class svj_tree_filler {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEventInfoAux = 1;
   static constexpr Int_t kMaxxTrigDecisionAux = 1;
   static constexpr Int_t kMaxTrigNavigationAux = 1;
   static constexpr Int_t kMaxMETAssoc_AntiKt4EMPFlowAux = 1;
   static constexpr Int_t kMaxMETAssoc_AntiKt4EMTopoAux = 1;
   static constexpr Int_t kMaxKt4EMPFlowEventShapeAux = 1;
   static constexpr Int_t kMaxKt4EMTopoOriginEventShapeAux = 1;
   static constexpr Int_t kMaxKt4LCTopoOriginEventShapeAux = 1;
   static constexpr Int_t kMaxNeutralParticleFlowIsoCentralEventShapeAux = 1;
   static constexpr Int_t kMaxNeutralParticleFlowIsoForwardEventShapeAux = 1;
   static constexpr Int_t kMaxTopoClusterIsoCentralEventShapeAux = 1;
   static constexpr Int_t kMaxTopoClusterIsoForwardEventShapeAux = 1;
   static constexpr Int_t kMaxLVL1EnergySumRoIAux = 1;
   static constexpr Int_t kMaxAntiKt4EMPFlowJets_BTagging201810Aux = 1;
   static constexpr Int_t kMaxAntiKt4EMPFlowJets_BTagging201903Aux = 1;
   static constexpr Int_t kMaxAntiKt4EMTopoJets_BTagging201810Aux = 1;
   static constexpr Int_t kMaxBTagging_AntiKt4EMPFlow_201810Aux = 1;
   static constexpr Int_t kMaxBTagging_AntiKt4EMPFlow_201903Aux = 1;
   static constexpr Int_t kMaxBTagging_AntiKt4EMTopo_201810Aux = 1;
   static constexpr Int_t kMaxBTagging_AntiKtVR30Rmax4Rmin02TrackAux = 1;
   static constexpr Int_t kMaxBTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux = 1;
   static constexpr Int_t kMaxBTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux = 1;
   static constexpr Int_t kMaxCombinedMuonTrackParticlesAux = 1;
   static constexpr Int_t kMaxElectronsAux = 1;
   static constexpr Int_t kMaxExtrapolatedMuonTrackParticlesAux = 1;
   static constexpr Int_t kMaxGSFConversionVerticesAux = 1;
   static constexpr Int_t kMaxGSFTrackParticlesAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__ElectronContainer_egamma_ElectronsAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__MuonContainer_MuonEFInfoAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__PhotonContainer_egamma_PhotonsAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux = 1;
   static constexpr Int_t kMaxHLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux = 1;
   static constexpr Int_t kMaxInDetForwardTrackParticlesAux = 1;
   static constexpr Int_t kMaxInDetTrackParticlesAux = 1;
   static constexpr Int_t kMaxLVL1EmTauRoIsAux = 1;
   static constexpr Int_t kMaxLVL1MuonRoIsAux = 1;
   static constexpr Int_t kMaxMET_Core_AntiKt4EMPFlowAux = 1;
   static constexpr Int_t kMaxMET_Core_AntiKt4EMTopoAux = 1;
   static constexpr Int_t kMaxMET_Reference_AntiKt4EMPFlowAux = 1;
   static constexpr Int_t kMaxMET_Reference_AntiKt4EMTopoAux = 1;
   static constexpr Int_t kMaxMET_TrackAux = 1;
   static constexpr Int_t kMaxMET_TruthAux = 1;
   static constexpr Int_t kMaxMuonSpectrometerTrackParticlesAux = 1;
   static constexpr Int_t kMaxMuonsAux = 1;
   static constexpr Int_t kMaxPhotonsAux = 1;
   static constexpr Int_t kMaxPrimaryVerticesAux = 1;
   static constexpr Int_t kMaxTauJetsAux = 1;
   static constexpr Int_t kMaxTauTracksAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_e140_lhloose_nod0Aux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_e300_etcutAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_e60_lhmedium_nod0Aux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_e60_mediumAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_g120_looseAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_g140_looseAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_g200_etcutAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_g300_etcutAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu24_ilooseAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu24_imediumAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu24_ivarlooseAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu24_ivarmediumAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu26_imediumAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu26_ivarmediumAux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu40Aux = 1;
   static constexpr Int_t kMaxTrigMatch_HLT_mu50Aux = 1;
   static constexpr Int_t kMaxTruthParticlesAux = 1;
   static constexpr Int_t kMaxTruthVerticesAux = 1;
   static constexpr Int_t kMaxegammaClustersAux = 1;
   static constexpr Int_t kMaxAntiKt10LCTopoJetsAux = 1;
   static constexpr Int_t kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux = 1;
   static constexpr Int_t kMaxAntiKt10TrackCaloClusterJetsAux = 1;
   static constexpr Int_t kMaxAntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux = 1;
   static constexpr Int_t kMaxAntiKt10TruthTrimmedPtFrac5SmallR20JetsAux = 1;
   static constexpr Int_t kMaxAntiKt2LCTopoJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4EMPFlowJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4EMTopoJetsAux = 1;
   static constexpr Int_t kMaxAntiKt4TruthJetsAux = 1;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux = 1;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackJetsAux = 1;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux = 1;
   static constexpr Int_t kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent = 8;
   static constexpr Int_t kMaxAntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex = 15;
   static constexpr Int_t kMaxAntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink = 15;
   static constexpr Int_t kMaxAntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent = 5;
   static constexpr Int_t kMaxAntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent = 6;
   static constexpr Int_t kMaxAntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink = 48;
   static constexpr Int_t kMaxAntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink = 48;
   static constexpr Int_t kMaxAntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink = 59;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink = 21;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink = 28;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex = 28;
   static constexpr Int_t kMaxAntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink = 28;
   static constexpr Int_t kMaxCombinedMuonTrackParticlesAuxDyn_vertexLink = 21;
   static constexpr Int_t kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink = 21;
   static constexpr Int_t kMaxElectronsAuxDyn_truthParticleLink = 4;
   static constexpr Int_t kMaxElectronsAuxDyn_ambiguityLink = 4;
   static constexpr Int_t kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink = 4;
   static constexpr Int_t kMaxEventInfoAuxDyn_subEventLink = 1;
   static constexpr Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_vertexLink = 20;
   static constexpr Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink = 20;
   static constexpr Int_t kMaxGSFTrackParticlesAuxDyn_vertexLink = 5;
   static constexpr Int_t kMaxGSFTrackParticlesAuxDyn_truthParticleLink = 5;
   static constexpr Int_t kMaxGSFTrackParticlesAuxDyn_originalTrackParticle = 5;
   static constexpr Int_t kMaxHLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink = 993;
   static constexpr Int_t kMaxHLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink = 24;
   static constexpr Int_t kMaxInDetTrackParticlesAuxDyn_vertexLink = 274;
   static constexpr Int_t kMaxInDetTrackParticlesAuxDyn_truthParticleLink = 274;
   static constexpr Int_t kMaxMuonSpectrometerTrackParticlesAuxDyn_vertexLink = 18;
   static constexpr Int_t kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink = 18;
   static constexpr Int_t kMaxMuonsAuxDyn_truthParticleLink = 28;
   static constexpr Int_t kMaxMuonsAuxDyn_inDetTrackParticleLink = 28;
   static constexpr Int_t kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink = 28;
   static constexpr Int_t kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink = 28;
   static constexpr Int_t kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink = 28;
   static constexpr Int_t kMaxMuonsAuxDyn_combinedTrackParticleLink = 28;
   static constexpr Int_t kMaxMuonsAuxDyn_clusterLink = 28;
   static constexpr Int_t kMaxPhotonsAuxDyn_truthParticleLink = 2;
   static constexpr Int_t kMaxPhotonsAuxDyn_ambiguityLink = 2;
   static constexpr Int_t kMaxTauJetsAuxDyn_jetLink = 2;
   static constexpr Int_t kMaxTauJetsAuxDyn_vertexLink = 2;
   static constexpr Int_t kMaxTauJetsAuxDyn_secondaryVertexLink = 2;
   static constexpr Int_t kMaxTauJetsAuxDyn_truthParticleLink = 2;
   static constexpr Int_t kMaxTauJetsAuxDyn_electronLink = 2;
   static constexpr Int_t kMaxTauJetsAuxDyn_truthJetLink = 2;
   static constexpr Int_t kMaxTruthParticlesAuxDyn_prodVtxLink = 416;
   static constexpr Int_t kMaxTruthParticlesAuxDyn_decayVtxLink = 416;

   // Declaration of leaf types
   PileUpEventInfo_p5 *McEventInfo;
   DataVector<xAOD::TrigMissingET_v1> *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET;
   DataVector<xAOD::TrigMissingET_v1> *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mht;
   DataVector<xAOD::TrigMissingET_v1> *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUC;
   xAOD::TrigConfKeys_v1 *TrigConfKeys;
 //xAOD::EventAuxInfo_v1 *EventInfoAux_;
   xAOD::EventAuxInfo_v1 *EventInfoAux_xAOD__AuxInfoBase;
   UInt_t          EventInfoAux_runNumber;
   ULong64_t       EventInfoAux_eventNumber;
   UInt_t          EventInfoAux_lumiBlock;
   UInt_t          EventInfoAux_timeStamp;
   UInt_t          EventInfoAux_timeStampNSOffset;
   UInt_t          EventInfoAux_bcid;
   UInt_t          EventInfoAux_detectorMask0;
   UInt_t          EventInfoAux_detectorMask1;
   UInt_t          EventInfoAux_detectorMask2;
   UInt_t          EventInfoAux_detectorMask3;
   vector<pair<string,string> > EventInfoAux_detDescrTags;
   UInt_t          EventInfoAux_eventTypeBitmask;
   UInt_t          EventInfoAux_statusElement;
   UInt_t          EventInfoAux_extendedLevel1ID;
   UShort_t        EventInfoAux_level1TriggerType;
   vector<string>  EventInfoAux_streamTagNames;
   vector<string>  EventInfoAux_streamTagTypes;
   vector<char>    EventInfoAux_streamTagObeysLumiblock;
   Float_t         EventInfoAux_actualInteractionsPerCrossing;
   Float_t         EventInfoAux_averageInteractionsPerCrossing;
   UInt_t          EventInfoAux_pixelFlags;
   UInt_t          EventInfoAux_sctFlags;
   UInt_t          EventInfoAux_trtFlags;
   UInt_t          EventInfoAux_larFlags;
   UInt_t          EventInfoAux_tileFlags;
   UInt_t          EventInfoAux_muonFlags;
   UInt_t          EventInfoAux_forwardDetFlags;
   UInt_t          EventInfoAux_coreFlags;
   UInt_t          EventInfoAux_backgroundFlags;
   UInt_t          EventInfoAux_lumiFlags;
   Float_t         EventInfoAux_beamPosX;
   Float_t         EventInfoAux_beamPosY;
   Float_t         EventInfoAux_beamPosZ;
   Float_t         EventInfoAux_beamPosSigmaX;
   Float_t         EventInfoAux_beamPosSigmaY;
   Float_t         EventInfoAux_beamPosSigmaZ;
   Float_t         EventInfoAux_beamPosSigmaXY;
   Float_t         EventInfoAux_beamTiltXZ;
   Float_t         EventInfoAux_beamTiltYZ;
   UInt_t          EventInfoAux_beamStatus;
 //xAOD::TrigDecisionAuxInfo_v1 *xTrigDecisionAux_;
   xAOD::TrigDecisionAuxInfo_v1 *xTrigDecisionAux_xAOD__AuxInfoBase;
   UInt_t          xTrigDecisionAux_smk;
   Char_t          xTrigDecisionAux_bgCode;
   vector<unsigned int> xTrigDecisionAux_tav;
   vector<unsigned int> xTrigDecisionAux_tap;
   vector<unsigned int> xTrigDecisionAux_tbp;
   UInt_t          xTrigDecisionAux_lvl2ErrorBits;
   UInt_t          xTrigDecisionAux_efErrorBits;
   Bool_t          xTrigDecisionAux_lvl2Truncated;
   Bool_t          xTrigDecisionAux_efTruncated;
   vector<unsigned int> xTrigDecisionAux_lvl2PassedPhysics;
   vector<unsigned int> xTrigDecisionAux_efPassedPhysics;
   vector<unsigned int> xTrigDecisionAux_lvl2PassedRaw;
   vector<unsigned int> xTrigDecisionAux_efPassedRaw;
   vector<unsigned int> xTrigDecisionAux_lvl2PassedThrough;
   vector<unsigned int> xTrigDecisionAux_efPassedThrough;
   vector<unsigned int> xTrigDecisionAux_lvl2Prescaled;
   vector<unsigned int> xTrigDecisionAux_efPrescaled;
   vector<unsigned int> xTrigDecisionAux_lvl2Resurrected;
   vector<unsigned int> xTrigDecisionAux_efResurrected;
   xAOD::EventInfo_v1 *EventInfo;
   xAOD::EnergySumRoI_v2 *LVL1EnergySumRoI;
 //xAOD::TrigNavigationAuxInfo_v1 *TrigNavigationAux_;
   xAOD::TrigNavigationAuxInfo_v1 *TrigNavigationAux_xAOD__AuxInfoBase;
   vector<unsigned int> TrigNavigationAux_serialized;
   xAOD::TrigDecision_v1 *xTrigDecision;
 //xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMPFlowAux_;
   xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMPFlowAux_xAOD__AuxContainerBase;
   vector<ElementLink<DataVector<xAOD::Jet_v1> > > METAssoc_AntiKt4EMPFlowAux_jetLink;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METAssoc_AntiKt4EMPFlowAux_objectLinks;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_calpx;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_calpy;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_calpz;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_cale;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_calsumpt;
   vector<vector<ULong64_t> > METAssoc_AntiKt4EMPFlowAux_calkey;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_trkpx;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_trkpy;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_trkpz;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_trke;
   vector<vector<double> > METAssoc_AntiKt4EMPFlowAux_trksumpt;
   vector<vector<ULong64_t> > METAssoc_AntiKt4EMPFlowAux_trkkey;
   vector<double>  METAssoc_AntiKt4EMPFlowAux_jettrkpx;
   vector<double>  METAssoc_AntiKt4EMPFlowAux_jettrkpy;
   vector<double>  METAssoc_AntiKt4EMPFlowAux_jettrkpz;
   vector<double>  METAssoc_AntiKt4EMPFlowAux_jettrke;
   vector<double>  METAssoc_AntiKt4EMPFlowAux_jettrksumpt;
   vector<vector<vector<unsigned long> > > METAssoc_AntiKt4EMPFlowAux_overlapIndices;
   vector<vector<vector<unsigned char> > > METAssoc_AntiKt4EMPFlowAux_overlapTypes;
   vector<char>    METAssoc_AntiKt4EMPFlowAux_isMisc;
 //xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMTopoAux_;
   xAOD::MissingETAuxAssociationMap_v2 *METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase;
   vector<ElementLink<DataVector<xAOD::Jet_v1> > > METAssoc_AntiKt4EMTopoAux_jetLink;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METAssoc_AntiKt4EMTopoAux_objectLinks;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calpx;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calpy;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calpz;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_cale;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_calsumpt;
   vector<vector<ULong64_t> > METAssoc_AntiKt4EMTopoAux_calkey;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trkpx;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trkpy;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trkpz;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trke;
   vector<vector<double> > METAssoc_AntiKt4EMTopoAux_trksumpt;
   vector<vector<ULong64_t> > METAssoc_AntiKt4EMTopoAux_trkkey;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrkpx;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrkpy;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrkpz;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrke;
   vector<double>  METAssoc_AntiKt4EMTopoAux_jettrksumpt;
   vector<vector<vector<unsigned long> > > METAssoc_AntiKt4EMTopoAux_overlapIndices;
   vector<vector<vector<unsigned char> > > METAssoc_AntiKt4EMTopoAux_overlapTypes;
   vector<char>    METAssoc_AntiKt4EMTopoAux_isMisc;
   xAOD::MissingETAssociationMap_v1 *METAssoc_AntiKt4EMPFlow;
   xAOD::MissingETAssociationMap_v1 *METAssoc_AntiKt4EMTopo;
   xAOD::TrigNavigation_v1 *TrigNavigation;
 //xAOD::EventShapeAuxInfo_v1 *Kt4EMPFlowEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *Kt4EMPFlowEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *Kt4EMTopoOriginEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *Kt4LCTopoOriginEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *Kt4LCTopoOriginEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoCentralEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoForwardEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoCentralEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase;
 //xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoForwardEventShapeAux_;
   xAOD::EventShapeAuxInfo_v1 *TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase;
   xAOD::EventShape_v1 *Kt4EMPFlowEventShape;
   xAOD::EventShape_v1 *Kt4EMTopoOriginEventShape;
   xAOD::EventShape_v1 *Kt4LCTopoOriginEventShape;
   xAOD::EventShape_v1 *NeutralParticleFlowIsoCentralEventShape;
   xAOD::EventShape_v1 *NeutralParticleFlowIsoForwardEventShape;
   xAOD::EventShape_v1 *TopoClusterIsoCentralEventShape;
   xAOD::EventShape_v1 *TopoClusterIsoForwardEventShape;
 //xAOD::EnergySumRoIAuxInfo_v2 *LVL1EnergySumRoIAux_;
   xAOD::EnergySumRoIAuxInfo_v2 *LVL1EnergySumRoIAux_xAOD__AuxInfoBase;
   UInt_t          LVL1EnergySumRoIAux_roiWord0;
   UInt_t          LVL1EnergySumRoIAux_roiWord1;
   UInt_t          LVL1EnergySumRoIAux_roiWord2;
   UInt_t          LVL1EnergySumRoIAux_roiWord3;
   UInt_t          LVL1EnergySumRoIAux_roiWord4;
   UInt_t          LVL1EnergySumRoIAux_roiWord5;
   vector<string>  LVL1EnergySumRoIAux_thrNames;
   Float_t         LVL1EnergySumRoIAux_energyX;
   Float_t         LVL1EnergySumRoIAux_energyY;
   Float_t         LVL1EnergySumRoIAux_energyT;
   Float_t         LVL1EnergySumRoIAux_energyXRestricted;
   Float_t         LVL1EnergySumRoIAux_energyYRestricted;
   Float_t         LVL1EnergySumRoIAux_energyTRestricted;
   DataVector<xAOD::EmTauRoI_v2> *LVL1EmTauRoIs;
   DataVector<xAOD::Electron_v1> *Electrons;
   DataVector<xAOD::Electron_v1> *HLT_xAOD__ElectronContainer_egamma_Electrons;
   DataVector<xAOD::Vertex_v1> *GSFConversionVertices;
   DataVector<xAOD::Vertex_v1> *PrimaryVertices;
   xAOD::MissingETContainer_v1 *MET_Core_AntiKt4EMPFlow;
   xAOD::MissingETContainer_v1 *MET_Core_AntiKt4EMTopo;
   xAOD::MissingETContainer_v1 *MET_Reference_AntiKt4EMPFlow;
   xAOD::MissingETContainer_v1 *MET_Reference_AntiKt4EMTopo;
   xAOD::MissingETContainer_v1 *MET_Track;
   xAOD::MissingETContainer_v1 *MET_Truth;
   DataVector<xAOD::Photon_v1> *HLT_xAOD__PhotonContainer_egamma_Photons;
   DataVector<xAOD::Photon_v1> *Photons;
 //xAOD::ShallowAuxContainer *AntiKt4EMPFlowJets_BTagging201810Aux_;
   Bool_t          AntiKt4EMPFlowJets_BTagging201810Aux_m_locked;
   DataLink<SG::IConstAuxStore> AntiKt4EMPFlowJets_BTagging201810Aux_m_parentLink;
 //xAOD::ShallowAuxContainer *AntiKt4EMPFlowJets_BTagging201903Aux_;
   Bool_t          AntiKt4EMPFlowJets_BTagging201903Aux_m_locked;
   DataLink<SG::IConstAuxStore> AntiKt4EMPFlowJets_BTagging201903Aux_m_parentLink;
 //xAOD::ShallowAuxContainer *AntiKt4EMTopoJets_BTagging201810Aux_;
   Bool_t          AntiKt4EMTopoJets_BTagging201810Aux_m_locked;
   DataLink<SG::IConstAuxStore> AntiKt4EMTopoJets_BTagging201810Aux_m_parentLink;
   DataVector<xAOD::TauJet_v3> *TauJets;
   DataVector<xAOD::Muon_v1> *HLT_xAOD__MuonContainer_MuonEFInfo;
   DataVector<xAOD::Muon_v1> *HLT_xAOD__MuonContainer_MuonEFInfo_FullScan;
   DataVector<xAOD::Muon_v1> *Muons;
   DataVector<xAOD::CaloCluster_v1> *egammaClusters;
   xAOD::AuxContainerBase *BTagging_AntiKt4EMPFlow_201810Aux_;
   xAOD::AuxContainerBase *BTagging_AntiKt4EMPFlow_201903Aux_;
   xAOD::AuxContainerBase *BTagging_AntiKt4EMTopo_201810Aux_;
   xAOD::AuxContainerBase *BTagging_AntiKtVR30Rmax4Rmin02TrackAux_;
   xAOD::AuxContainerBase *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux_;
   xAOD::AuxContainerBase *BTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux_;
   xAOD::AuxContainerBase *CombinedMuonTrackParticlesAux_;
   xAOD::AuxContainerBase *ElectronsAux_;
   xAOD::AuxContainerBase *ExtrapolatedMuonTrackParticlesAux_;
   xAOD::AuxContainerBase *GSFConversionVerticesAux_;
   xAOD::AuxContainerBase *GSFTrackParticlesAux_;
   xAOD::AuxContainerBase *HLT_xAOD__ElectronContainer_egamma_ElectronsAux_;
   xAOD::AuxContainerBase *HLT_xAOD__MuonContainer_MuonEFInfoAux_;
   xAOD::AuxContainerBase *HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux_;
   xAOD::AuxContainerBase *HLT_xAOD__PhotonContainer_egamma_PhotonsAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux_;
   xAOD::AuxContainerBase *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux_;
   xAOD::AuxContainerBase *InDetForwardTrackParticlesAux_;
   xAOD::AuxContainerBase *InDetTrackParticlesAux_;
   xAOD::AuxContainerBase *LVL1EmTauRoIsAux_;
   xAOD::AuxContainerBase *LVL1MuonRoIsAux_;
   xAOD::AuxContainerBase *MET_Core_AntiKt4EMPFlowAux_;
   xAOD::AuxContainerBase *MET_Core_AntiKt4EMTopoAux_;
   xAOD::AuxContainerBase *MET_Reference_AntiKt4EMPFlowAux_;
   xAOD::AuxContainerBase *MET_Reference_AntiKt4EMTopoAux_;
   xAOD::AuxContainerBase *MET_TrackAux_;
   xAOD::AuxContainerBase *MET_TruthAux_;
   xAOD::AuxContainerBase *MuonSpectrometerTrackParticlesAux_;
   xAOD::AuxContainerBase *MuonsAux_;
   xAOD::AuxContainerBase *PhotonsAux_;
   xAOD::AuxContainerBase *PrimaryVerticesAux_;
   xAOD::AuxContainerBase *TauJetsAux_;
   xAOD::AuxContainerBase *TauTracksAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_e140_lhloose_nod0Aux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_e300_etcutAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_e60_lhmedium_nod0Aux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_e60_mediumAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_g120_looseAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_g140_looseAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_g200_etcutAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_g300_etcutAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu24_ilooseAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu24_imediumAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu24_ivarlooseAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu24_ivarmediumAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu26_imediumAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu26_ivarmediumAux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu40Aux_;
   xAOD::AuxContainerBase *TrigMatch_HLT_mu50Aux_;
   xAOD::AuxContainerBase *TruthParticlesAux_;
   xAOD::AuxContainerBase *TruthVerticesAux_;
   xAOD::AuxContainerBase *egammaClustersAux_;
   DataVector<xAOD::TruthParticle_v1> *TruthParticles;
   DataVector<xAOD::TruthVertex_v1> *TruthVertices;
   DataVector<xAOD::Jet_v1> *AntiKt10LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets;
   DataVector<xAOD::Jet_v1> *AntiKt10TrackCaloClusterJets;
   DataVector<xAOD::Jet_v1> *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20Jets;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthTrimmedPtFrac5SmallR20Jets;
   DataVector<xAOD::Jet_v1> *AntiKt2LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMPFlowJets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMPFlowJets_BTagging201810;
   DataVector<xAOD::Jet_v1> *AntiKt4EMPFlowJets_BTagging201903;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopoJets_BTagging201810;
   DataVector<xAOD::Jet_v1> *AntiKt4LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TruthJets;
   DataVector<xAOD::Jet_v1> *AntiKtVR30Rmax4Rmin02TrackGhostTagJets;
   DataVector<xAOD::Jet_v1> *AntiKtVR30Rmax4Rmin02TrackJets;
   DataVector<xAOD::Jet_v1> *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4EMPFlow_201810;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4EMPFlow_201903;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4EMTopo_201810;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKtVR30Rmax4Rmin02Track;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTag;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKtVR30Rmax4Rmin02Track_201903;
   DataVector<xAOD::TrackParticle_v1> *CombinedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *ExtrapolatedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *GSFTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *InDetForwardTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *InDetTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *MuonSpectrometerTrackParticles;
 //xAOD::JetAuxContainer_v1 *AntiKt10LCTopoJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10LCTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10LCTopoJetsAux_pt;
   vector<float>   AntiKt10LCTopoJetsAux_eta;
   vector<float>   AntiKt10LCTopoJetsAux_phi;
   vector<float>   AntiKt10LCTopoJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10LCTopoJetsAux_constituentLinks;
   vector<vector<float> > AntiKt10LCTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_pt;
   vector<float>   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_eta;
   vector<float>   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_phi;
   vector<float>   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentLinks;
   vector<vector<float> > AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt10TrackCaloClusterJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10TrackCaloClusterJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10TrackCaloClusterJetsAux_pt;
   vector<float>   AntiKt10TrackCaloClusterJetsAux_eta;
   vector<float>   AntiKt10TrackCaloClusterJetsAux_phi;
   vector<float>   AntiKt10TrackCaloClusterJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10TrackCaloClusterJetsAux_constituentLinks;
   vector<vector<float> > AntiKt10TrackCaloClusterJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_pt;
   vector<float>   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_eta;
   vector<float>   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_phi;
   vector<float>   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentLinks;
   vector<vector<float> > AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentLinks;
   vector<vector<float> > AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt2LCTopoJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt2LCTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt2LCTopoJetsAux_pt;
   vector<float>   AntiKt2LCTopoJetsAux_eta;
   vector<float>   AntiKt2LCTopoJetsAux_phi;
   vector<float>   AntiKt2LCTopoJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt2LCTopoJetsAux_constituentLinks;
   vector<vector<float> > AntiKt2LCTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4EMPFlowJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMPFlowJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4EMPFlowJetsAux_pt;
   vector<float>   AntiKt4EMPFlowJetsAux_eta;
   vector<float>   AntiKt4EMPFlowJetsAux_phi;
   vector<float>   AntiKt4EMPFlowJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4EMPFlowJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4EMPFlowJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4EMTopoJetsAux_pt;
   vector<float>   AntiKt4EMTopoJetsAux_eta;
   vector<float>   AntiKt4EMTopoJetsAux_phi;
   vector<float>   AntiKt4EMTopoJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4EMTopoJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4EMTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKt4TruthJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4TruthJetsAux_pt;
   vector<float>   AntiKt4TruthJetsAux_eta;
   vector<float>   AntiKt4TruthJetsAux_phi;
   vector<float>   AntiKt4TruthJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4TruthJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4TruthJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentLinks;
   vector<vector<float> > AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02TrackJetsAux_;
   xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02TrackJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJetsAux_pt;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJetsAux_eta;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJetsAux_phi;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJetsAux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentLinks;
   vector<vector<float> > AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_;
   xAOD::JetAuxContainer_v1 *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_xAOD__AuxContainerBase;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_pt;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_eta;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_phi;
   vector<float>   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_m;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentLinks;
   vector<vector<float> > AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentWeights;
   DataVector<xAOD::TauTrack_v1> *TauTracks;
   DataVector<xAOD::MuonRoI_v1> *LVL1MuonRoIs;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_e140_lhloose_nod0;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_e24_lhtight_nod0_ivarloose;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_e26_lhtight_nod0_ivarloose;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_e300_etcut;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_e60_lhmedium_nod0;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_e60_medium;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_g120_loose;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_g140_loose;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_g200_etcut;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_g300_etcut;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu24_iloose;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu24_imedium;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu24_ivarloose;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu24_ivarmedium;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu26_imedium;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu26_ivarmedium;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu40;
   DataVector<xAOD::TrigComposite_v1> *TrigMatch_HLT_mu50;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt2TrackJet;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostBQuarksFinal;
   vector<vector<int> > *AntiKt10LCTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;
   Int_t           AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;
   UInt_t          AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey[kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   UInt_t          AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex[kMaxAntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_HbbScore;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreQCD;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreHiggs;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreTop;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta;
   vector<int>     *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Width;
   vector<int>     *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta;
   vector<float>   *AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_InputType;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_SizeParameter;
   vector<vector<float> > *AntiKt10TrackCaloClusterJetsAuxDyn_EnergyPerSampling;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJet;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinal;
   vector<vector<int> > *AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_DetectorEta;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumMass;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumPt;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_Width;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_DetectorY;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_Charge;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclTausFinal;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_ConeTruthLabelID;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_DetectorPhi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitial;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinal;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitial;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinal;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosons;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegment;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartons;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinal;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinal;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruth;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosons;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosons;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_JetGhostArea;
   vector<vector<int> > *AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt1000;
   Int_t           AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_;
   UInt_t          AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persKey[kMaxAntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex];   //[AntiKt10TrackCaloClusterJetsAuxDyn.OriginVertex_]
   UInt_t          AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persIndex[kMaxAntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex];   //[AntiKt10TrackCaloClusterJetsAuxDyn.OriginVertex_]
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_PartonTruthLabelID;
   vector<vector<float> > *AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt1000;
   vector<vector<float> > *AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt500;
   vector<vector<float> > *AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt1000;
   vector<vector<float> > *AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt500;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_T;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_WidthPhi;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJet;
   vector<int>     *AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetCount;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetPt;
   vector<float>   *AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationFraction;
   Int_t           AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_;
   UInt_t          AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persKey[kMaxAntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthAssociationLink_]
   UInt_t          AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persIndex[kMaxAntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthAssociationLink_]
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;
   Int_t           AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;
   UInt_t          AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey[kMaxAntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   UInt_t          AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex[kMaxAntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta;
   vector<int>     *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Width;
   vector<int>     *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta;
   vector<float>   *AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_InputType;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_SizeParameter;
   vector<vector<float> > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_EnergyPerSampling;
   Int_t           AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;
   UInt_t          AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey[kMaxAntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   UInt_t          AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex[kMaxAntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent];   //[AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Parent_]
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Width;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Charge;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitial;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinal;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitial;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinal;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosons;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartons;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinal;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinal;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosons;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosons;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsCount;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsPt;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_WidthPhi;
   vector<int>     *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_TransformType;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PtFrac;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_RClus;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split34;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut23;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut34;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF4;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_ungroomed;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2_2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_4_1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2_dichroic;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N3;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2_dichroic;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L2;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L3;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L4;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L5;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram4;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Sphericity;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Mu12;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip12;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip13;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip23;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullMag;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullPhi;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C00;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C01;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C10;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C11;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_zg;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_rg;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<vector<float> > *AntiKt2LCTopoJetsAuxDyn_EnergyPerSampling;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt2LCTopoJetsAuxDyn_GhostBQuarksFinal;
   vector<vector<int> > *AntiKt2LCTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_DetectorEta;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_Width;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_DetectorY;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt2LCTopoJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_GhostTrackCount;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<vector<int> > *AntiKt2LCTopoJetsAuxDyn_NumTrkPt1000;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_PartonTruthLabelID;
   vector<vector<float> > *AntiKt2LCTopoJetsAuxDyn_SumPtTrkPt500;
   vector<vector<float> > *AntiKt2LCTopoJetsAuxDyn_TrackWidthPt1000;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt2LCTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_JVFCorr;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_Jvt;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_JvtRpt;
   vector<float>   *AntiKt2LCTopoJetsAuxDyn_Timing;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_DetectorEta;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_Width;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMPFlowJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JVFCorr;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_Jvt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_JvtRpt;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_Timing;
   vector<float>   *AntiKt4EMPFlowJetsAuxDyn_EMFrac;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000;
   vector<vector<int> > *AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500;
   vector<vector<float> > *AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500;
   Int_t           AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_;
   UInt_t          AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persKey[kMaxAntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink];   //[AntiKt4EMPFlowJets_BTagging201810AuxDyn.btaggingLink_]
   UInt_t          AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink];   //[AntiKt4EMPFlowJets_BTagging201810AuxDyn.btaggingLink_]
   Int_t           AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_;
   UInt_t          AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persKey[kMaxAntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink];   //[AntiKt4EMPFlowJets_BTagging201903AuxDyn.btaggingLink_]
   UInt_t          AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink];   //[AntiKt4EMPFlowJets_BTagging201903AuxDyn.btaggingLink_]
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;
   vector<char>    *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad;
   vector<char>    *AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DetectorEta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Width;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JVFCorr;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Jvt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JvtRpt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Timing;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_EMFrac;
   Int_t           AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_;
   UInt_t          AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persKey[kMaxAntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink];   //[AntiKt4EMTopoJets_BTagging201810AuxDyn.btaggingLink_]
   UInt_t          AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink];   //[AntiKt4EMTopoJets_BTagging201810AuxDyn.btaggingLink_]
   vector<int>     *AntiKt4TruthJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4TruthJetsAuxDyn_InputType;
   vector<int>     *AntiKt4TruthJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4TruthJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Width;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_ConeExclTausFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_ConeTruthLabelID;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostHBosons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostHBosonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostHBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostPartons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostPartonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostTausFinal;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostTausFinalCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostTausFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostWBosons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostWBosonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostWBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_GhostZBosons;
   vector<int>     *AntiKt4TruthJetsAuxDyn_GhostZBosonsCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetGhostArea;
   vector<int>     *AntiKt4TruthJetsAuxDyn_PartonTruthLabelID;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T;
   vector<float>   *AntiKt4TruthJetsAuxDyn_WidthPhi;
   Int_t           AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.btaggingLink_]
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclCHadronsFinal;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalPt;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalPt;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_m;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_InputType;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_SizeParameter;
   Int_t           AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.btaggingLink_]
   vector<char>    *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_has_ATLASRECTS_5027_bug;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclCHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclTausFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinal;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitial;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialPt;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitial;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosons;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartons;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruth;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosons;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosons;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsCount;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsPt;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetGhostArea;
   Int_t           AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_;
   UInt_t          AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persKey[kMaxAntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex];   //[AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.OriginVertex_]
   UInt_t          AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persIndex[kMaxAntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex];   //[AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.OriginVertex_]
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedTracks;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedMuons;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMinRadius;
   vector<float>   *AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMassScale;
   Int_t           AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_;
   UInt_t          AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persKey[kMaxAntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.btaggingLink_]
   UInt_t          AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persIndex[kMaxAntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink];   //[AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.btaggingLink_]
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclBHadronsFinal;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclCHadronsFinal;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclExtendedTruthLabelID;
   vector<int>     *AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclTruthLabelID;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2r_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2rmu_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pu;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pc;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pb;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2r_discriminant;
   vector<double>  *BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2rmu_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pu;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pc;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pb;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pu;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pc;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pb;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pb;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pc;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pu;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_MV2r_discriminant;
   vector<double>  *BTagging_AntiKt4EMTopo_201810AuxDyn_MV2rmu_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2r_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2rmu_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2r_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2rmu_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pu;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pc;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pb;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c100_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c10_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2cl100_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2r_discriminant;
   vector<double>  *BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2rmu_discriminant;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_phi;
   Int_t           CombinedMuonTrackParticlesAuxDyn_vertexLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_vertexLink];   //[CombinedMuonTrackParticlesAuxDyn.vertexLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_vertexLink];   //[CombinedMuonTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   Int_t           CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_chiSquared;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_numberDoF;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_d0;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_z0;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_theta;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *CombinedMuonTrackParticlesAuxDyn_vz;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<vector<vector<unsigned int> > > *CombinedMuonTrackParticlesAuxDyn_alignEffectChId;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;
   vector<vector<float> > *CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *ElectronsAuxDyn_trackParticleLinks;
   vector<float>   *ElectronsAuxDyn_pt;
   vector<float>   *ElectronsAuxDyn_eta;
   vector<float>   *ElectronsAuxDyn_phi;
   vector<float>   *ElectronsAuxDyn_m;
   vector<float>   *ElectronsAuxDyn_charge;
   vector<int>     *ElectronsAuxDyn_DFCommonAddAmbiguity;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_TightTTVA_pt1000;
   vector<float>   *ElectronsAuxDyn_ptvarcone20_TightTTVA_pt1000;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_TightTTVA_pt500;
   vector<float>   *ElectronsAuxDyn_ptvarcone40_TightTTVALooseCone_pt1000;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt1000;
   vector<float>   *ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt1000;
   vector<float>   *ElectronsAuxDyn_ptvarcone20_TightTTVALooseCone_pt1000;
   vector<float>   *ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt500;
   vector<float>   *ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt500;
   vector<float>   *ElectronsAuxDyn_topoetcone20;
   vector<float>   *ElectronsAuxDyn_ptvarcone20;
   Int_t           ElectronsAuxDyn_truthParticleLink_;
   UInt_t          ElectronsAuxDyn_truthParticleLink_m_persKey[kMaxElectronsAuxDyn_truthParticleLink];   //[ElectronsAuxDyn.truthParticleLink_]
   UInt_t          ElectronsAuxDyn_truthParticleLink_m_persIndex[kMaxElectronsAuxDyn_truthParticleLink];   //[ElectronsAuxDyn.truthParticleLink_]
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *ElectronsAuxDyn_caloClusterLinks;
   vector<unsigned short> *ElectronsAuxDyn_author;
   vector<unsigned int> *ElectronsAuxDyn_OQ;
   vector<float>   *ElectronsAuxDyn_f1;
   Int_t           ElectronsAuxDyn_ambiguityLink_;
   UInt_t          ElectronsAuxDyn_ambiguityLink_m_persKey[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
   UInt_t          ElectronsAuxDyn_ambiguityLink_m_persIndex[kMaxElectronsAuxDyn_ambiguityLink];   //[ElectronsAuxDyn.ambiguityLink_]
   vector<unsigned char> *ElectronsAuxDyn_ambiguityType;
   vector<float>   *ElectronsAuxDyn_core57cellsEnergyCorrection;
   vector<float>   *ElectronsAuxDyn_neflowisol20;
   vector<float>   *ElectronsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *ElectronsAuxDyn_topoetcone40;
   vector<float>   *ElectronsAuxDyn_topoetconecoreConeEnergyCorrection;
   vector<float>   *ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection;
   vector<int>     *ElectronsAuxDyn_truthOrigin;
   vector<int>     *ElectronsAuxDyn_truthType;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHVeryLoose;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHLoose;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHLooseBL;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHMedium;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsLHTight;
   vector<unsigned int> *ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue;
   vector<char>    *ElectronsAuxDyn_DFCommonElectronsECIDS;
   vector<double>  *ElectronsAuxDyn_DFCommonElectronsECIDSResult;
   vector<char>    *ElectronsAuxDyn_DFCommonCrackVetoCleaning;
   vector<int>     *ElectronsAuxDyn_truthPdgId;
   vector<int>     *ElectronsAuxDyn_firstEgMotherTruthType;
   vector<int>     *ElectronsAuxDyn_firstEgMotherTruthOrigin;
   Int_t           ElectronsAuxDyn_firstEgMotherTruthParticleLink_;
   UInt_t          ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey[kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[ElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   UInt_t          ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex[kMaxElectronsAuxDyn_firstEgMotherTruthParticleLink];   //[ElectronsAuxDyn.firstEgMotherTruthParticleLink_]
   vector<int>     *ElectronsAuxDyn_firstEgMotherPdgId;
   vector<set<unsigned int> > *EventInfoAuxDyn_streamTagRobs;
   vector<set<unsigned int> > *EventInfoAuxDyn_streamTagDets;
   vector<short>   *EventInfoAuxDyn_subEventTime;
   vector<unsigned short> *EventInfoAuxDyn_subEventIndex;
   Int_t           EventInfoAuxDyn_subEventLink_;
   UInt_t          EventInfoAuxDyn_subEventLink_m_persKey[kMaxEventInfoAuxDyn_subEventLink];   //[EventInfoAuxDyn.subEventLink_]
   UInt_t          EventInfoAuxDyn_subEventLink_m_persIndex[kMaxEventInfoAuxDyn_subEventLink];   //[EventInfoAuxDyn.subEventLink_]
   vector<unsigned short> *EventInfoAuxDyn_subEventType;
   Float_t         EventInfoAuxDyn_GenFiltHT;
   Float_t         EventInfoAuxDyn_GenFiltMET;
   Float_t         EventInfoAuxDyn_GenFiltPTZ;
   Char_t          EventInfoAuxDyn_DFCommonJets_eventClean_LooseBad;
   Char_t          EventInfoAuxDyn_DFCommonJets_eventClean_LooseBadLLP;
   UInt_t          EventInfoAuxDyn_mcChannelNumber;
   Float_t         EventInfoAuxDyn_TruthIsoCentralEventShape_rho;
   Float_t         EventInfoAuxDyn_TruthIsoForwardEventShape_rho;
   ULong64_t       EventInfoAuxDyn_mcEventNumber;
   vector<float>   *EventInfoAuxDyn_mcEventWeights;
   Char_t          EventInfoAuxDyn_DFCommonJets_isBadBatman;
   Int_t           EventInfoAuxDyn_HTXS_prodMode;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_phi;
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_vertexLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_vertexLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_d0;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_z0;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_theta;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *ExtrapolatedMuonTrackParticlesAuxDyn_vz;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<vector<vector<unsigned int> > > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;
   vector<vector<float> > *ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *GSFConversionVerticesAuxDyn_trackParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::NeutralParticle_v1> > > > *GSFConversionVerticesAuxDyn_neutralParticleLinks;
   vector<float>   *GSFConversionVerticesAuxDyn_px;
   vector<float>   *GSFConversionVerticesAuxDyn_py;
   vector<float>   *GSFConversionVerticesAuxDyn_pz;
   vector<float>   *GSFConversionVerticesAuxDyn_x;
   vector<float>   *GSFConversionVerticesAuxDyn_y;
   vector<float>   *GSFConversionVerticesAuxDyn_z;
   vector<float>   *GSFConversionVerticesAuxDyn_minRfirstHit;
   vector<float>   *GSFConversionVerticesAuxDyn_pt1;
   vector<float>   *GSFConversionVerticesAuxDyn_pt2;
   vector<float>   *GSFTrackParticlesAuxDyn_phi;
   Int_t           GSFTrackParticlesAuxDyn_vertexLink_;
   UInt_t          GSFTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_vertexLink];   //[GSFTrackParticlesAuxDyn.vertexLink_]
   UInt_t          GSFTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_vertexLink];   //[GSFTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   Int_t           GSFTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *GSFTrackParticlesAuxDyn_chiSquared;
   vector<float>   *GSFTrackParticlesAuxDyn_d0;
   vector<float>   *GSFTrackParticlesAuxDyn_z0;
   vector<float>   *GSFTrackParticlesAuxDyn_theta;
   vector<float>   *GSFTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *GSFTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *GSFTrackParticlesAuxDyn_vz;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfPixelOutliers;
   vector<unsigned char> *GSFTrackParticlesAuxDyn_numberOfSCTOutliers;
   Int_t           GSFTrackParticlesAuxDyn_originalTrackParticle_;
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta;
   vector<float>   *HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi;
   vector<float>   *HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_pt;
   vector<float>   *HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_eta;
   vector<float>   *HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_phi;
   vector<unsigned short> *HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_author;
   vector<unsigned short> *HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_muonType;
   Int_t           HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_;
   UInt_t          HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persKey[kMaxHLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink];   //[HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.inDetTrackParticleLink_]
   UInt_t          HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persIndex[kMaxHLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink];   //[HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.inDetTrackParticleLink_]
   vector<float>   *HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_pt;
   vector<float>   *HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_eta;
   vector<float>   *HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_phi;
   vector<unsigned short> *HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_author;
   vector<unsigned short> *HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_muonType;
   Int_t           HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_;
   UInt_t          HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persKey[kMaxHLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink];   //[HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.inDetTrackParticleLink_]
   UInt_t          HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persIndex[kMaxHLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink];   //[HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.inDetTrackParticleLink_]
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta;
   vector<float>   *HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ex;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ey;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ez;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumEt;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumE;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ex;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ey;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ez;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumEt;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumE;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ex;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ey;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ez;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumEt;
   vector<float>   *HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumE;
   vector<float>   *InDetTrackParticlesAuxDyn_phi;
   Int_t           InDetTrackParticlesAuxDyn_vertexLink_;
   UInt_t          InDetTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_vertexLink];   //[InDetTrackParticlesAuxDyn.vertexLink_]
   UInt_t          InDetTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_vertexLink];   //[InDetTrackParticlesAuxDyn.vertexLink_]
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelSharedHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTSharedHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;
   Int_t           InDetTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *InDetTrackParticlesAuxDyn_chiSquared;
   vector<float>   *InDetTrackParticlesAuxDyn_numberDoF;
   vector<float>   *InDetTrackParticlesAuxDyn_d0;
   vector<float>   *InDetTrackParticlesAuxDyn_z0;
   vector<float>   *InDetTrackParticlesAuxDyn_theta;
   vector<float>   *InDetTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *InDetTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *InDetTrackParticlesAuxDyn_vz;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPhiLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit;
   vector<unsigned char> *InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;
   vector<float>   *InDetTrackParticlesAuxDyn_truthMatchProbability;
   Float_t         Kt4EMPFlowEventShapeAuxDyn_Density;
   Float_t         Kt4EMTopoOriginEventShapeAuxDyn_Density;
   Float_t         Kt4LCTopoOriginEventShapeAuxDyn_Density;
   vector<vector<string> > *LVL1EmTauRoIsAuxDyn_thrNames;
   vector<vector<float> > *LVL1EmTauRoIsAuxDyn_thrValues;
   vector<float>   *LVL1EmTauRoIsAuxDyn_eta;
   vector<float>   *LVL1EmTauRoIsAuxDyn_phi;
   vector<unsigned int> *LVL1EmTauRoIsAuxDyn_roiWord;
   vector<float>   *LVL1EmTauRoIsAuxDyn_etScale;
   vector<unsigned int> *LVL1EmTauRoIsAuxDyn_thrPattern;
   vector<float>   *LVL1EmTauRoIsAuxDyn_core;
   vector<float>   *LVL1EmTauRoIsAuxDyn_emClus;
   vector<float>   *LVL1EmTauRoIsAuxDyn_tauClus;
   vector<float>   *LVL1EmTauRoIsAuxDyn_emIsol;
   vector<float>   *LVL1EmTauRoIsAuxDyn_hadIsol;
   vector<float>   *LVL1EmTauRoIsAuxDyn_hadCore;
   vector<float>   *LVL1MuonRoIsAuxDyn_eta;
   vector<float>   *LVL1MuonRoIsAuxDyn_phi;
   vector<unsigned int> *LVL1MuonRoIsAuxDyn_roiWord;
   vector<string>  *LVL1MuonRoIsAuxDyn_thrName;
   vector<float>   *LVL1MuonRoIsAuxDyn_thrValue;
   vector<string>  *MET_Core_AntiKt4EMPFlowAuxDyn_name;
   vector<double>  *MET_Core_AntiKt4EMPFlowAuxDyn_mpx;
   vector<double>  *MET_Core_AntiKt4EMPFlowAuxDyn_mpy;
   vector<double>  *MET_Core_AntiKt4EMPFlowAuxDyn_sumet;
   vector<ULong64_t> *MET_Core_AntiKt4EMPFlowAuxDyn_source;
   vector<string>  *MET_Core_AntiKt4EMTopoAuxDyn_name;
   vector<double>  *MET_Core_AntiKt4EMTopoAuxDyn_mpx;
   vector<double>  *MET_Core_AntiKt4EMTopoAuxDyn_mpy;
   vector<double>  *MET_Core_AntiKt4EMTopoAuxDyn_sumet;
   vector<ULong64_t> *MET_Core_AntiKt4EMTopoAuxDyn_source;
   vector<string>  *MET_Reference_AntiKt4EMPFlowAuxDyn_name;
   vector<double>  *MET_Reference_AntiKt4EMPFlowAuxDyn_mpx;
   vector<double>  *MET_Reference_AntiKt4EMPFlowAuxDyn_mpy;
   vector<double>  *MET_Reference_AntiKt4EMPFlowAuxDyn_sumet;
   vector<ULong64_t> *MET_Reference_AntiKt4EMPFlowAuxDyn_source;
   vector<string>  *MET_Reference_AntiKt4EMTopoAuxDyn_name;
   vector<double>  *MET_Reference_AntiKt4EMTopoAuxDyn_mpx;
   vector<double>  *MET_Reference_AntiKt4EMTopoAuxDyn_mpy;
   vector<double>  *MET_Reference_AntiKt4EMTopoAuxDyn_sumet;
   vector<ULong64_t> *MET_Reference_AntiKt4EMTopoAuxDyn_source;
   vector<string>  *MET_TrackAuxDyn_name;
   vector<double>  *MET_TrackAuxDyn_mpx;
   vector<double>  *MET_TrackAuxDyn_mpy;
   vector<string>  *MET_TruthAuxDyn_name;
   vector<double>  *MET_TruthAuxDyn_mpx;
   vector<double>  *MET_TruthAuxDyn_mpy;
   vector<double>  *MET_TruthAuxDyn_sumet;
   vector<ULong64_t> *MET_TruthAuxDyn_source;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_phi;
   Int_t           MuonSpectrometerTrackParticlesAuxDyn_vertexLink_;
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey[kMaxMuonSpectrometerTrackParticlesAuxDyn_vertexLink];   //[MuonSpectrometerTrackParticlesAuxDyn.vertexLink_]
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex[kMaxMuonSpectrometerTrackParticlesAuxDyn_vertexLink];   //[MuonSpectrometerTrackParticlesAuxDyn.vertexLink_]
   Int_t           MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink];   //[MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxMuonSpectrometerTrackParticlesAuxDyn_truthParticleLink];   //[MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink_]
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_d0;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_z0;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_theta;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *MuonSpectrometerTrackParticlesAuxDyn_vz;
   vector<float>   *MuonsAuxDyn_pt;
   vector<float>   *MuonsAuxDyn_eta;
   vector<float>   *MuonsAuxDyn_phi;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *MuonsAuxDyn_muonSegmentLinks;
   vector<float>   *MuonsAuxDyn_charge;
   vector<float>   *MuonsAuxDyn_ptvarcone30_TightTTVA_pt1000;
   vector<float>   *MuonsAuxDyn_ptcone20_TightTTVA_pt1000;
   vector<float>   *MuonsAuxDyn_ptvarcone30_TightTTVA_pt500;
   vector<float>   *MuonsAuxDyn_ptcone20_TightTTVA_pt500;
   vector<float>   *MuonsAuxDyn_topoetcone20;
   vector<float>   *MuonsAuxDyn_ptvarcone20;
   vector<float>   *MuonsAuxDyn_ptvarcone30;
   Int_t           MuonsAuxDyn_truthParticleLink_;
   UInt_t          MuonsAuxDyn_truthParticleLink_m_persKey[kMaxMuonsAuxDyn_truthParticleLink];   //[MuonsAuxDyn.truthParticleLink_]
   UInt_t          MuonsAuxDyn_truthParticleLink_m_persIndex[kMaxMuonsAuxDyn_truthParticleLink];   //[MuonsAuxDyn.truthParticleLink_]
   vector<unsigned char> *MuonsAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *MuonsAuxDyn_numberOfPrecisionHoleLayers;
   vector<unsigned short> *MuonsAuxDyn_author;
   vector<float>   *MuonsAuxDyn_neflowisol20;
   vector<float>   *MuonsAuxDyn_topoetcone40;
   vector<int>     *MuonsAuxDyn_truthOrigin;
   vector<int>     *MuonsAuxDyn_truthType;
   vector<unsigned short> *MuonsAuxDyn_muonType;
   Int_t           MuonsAuxDyn_inDetTrackParticleLink_;
   UInt_t          MuonsAuxDyn_inDetTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_inDetTrackParticleLink];   //[MuonsAuxDyn.inDetTrackParticleLink_]
   UInt_t          MuonsAuxDyn_inDetTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_inDetTrackParticleLink];   //[MuonsAuxDyn.inDetTrackParticleLink_]
   vector<float>   *MuonsAuxDyn_ptcone20;
   vector<float>   *MuonsAuxDyn_ptcone30;
   vector<float>   *MuonsAuxDyn_ptcone40;
   vector<float>   *MuonsAuxDyn_ptvarcone40;
   vector<float>   *MuonsAuxDyn_topoetcone30;
   vector<unsigned short> *MuonsAuxDyn_allAuthors;
   vector<unsigned char> *MuonsAuxDyn_quality;
   vector<unsigned char> *MuonsAuxDyn_energyLossType;
   vector<unsigned char> *MuonsAuxDyn_innerSmallHits;
   vector<unsigned char> *MuonsAuxDyn_innerLargeHits;
   vector<unsigned char> *MuonsAuxDyn_middleSmallHits;
   vector<unsigned char> *MuonsAuxDyn_middleLargeHits;
   vector<unsigned char> *MuonsAuxDyn_outerSmallHits;
   vector<unsigned char> *MuonsAuxDyn_outerLargeHits;
   vector<unsigned char> *MuonsAuxDyn_extendedSmallHits;
   vector<unsigned char> *MuonsAuxDyn_extendedLargeHits;
   vector<unsigned char> *MuonsAuxDyn_innerSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_innerLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_middleSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_middleLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_outerSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_outerLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_extendedSmallHoles;
   vector<unsigned char> *MuonsAuxDyn_extendedLargeHoles;
   vector<unsigned char> *MuonsAuxDyn_cscEtaHits;
   vector<unsigned char> *MuonsAuxDyn_cscUnspoiledEtaHits;
   Int_t           MuonsAuxDyn_muonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.muonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_muonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.muonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_;
   UInt_t          MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_]
   UInt_t          MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink];   //[MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_]
   Int_t           MuonsAuxDyn_combinedTrackParticleLink_;
   UInt_t          MuonsAuxDyn_combinedTrackParticleLink_m_persKey[kMaxMuonsAuxDyn_combinedTrackParticleLink];   //[MuonsAuxDyn.combinedTrackParticleLink_]
   UInt_t          MuonsAuxDyn_combinedTrackParticleLink_m_persIndex[kMaxMuonsAuxDyn_combinedTrackParticleLink];   //[MuonsAuxDyn.combinedTrackParticleLink_]
   Int_t           MuonsAuxDyn_clusterLink_;
   UInt_t          MuonsAuxDyn_clusterLink_m_persKey[kMaxMuonsAuxDyn_clusterLink];   //[MuonsAuxDyn.clusterLink_]
   UInt_t          MuonsAuxDyn_clusterLink_m_persIndex[kMaxMuonsAuxDyn_clusterLink];   //[MuonsAuxDyn.clusterLink_]
   vector<float>   *MuonsAuxDyn_spectrometerFieldIntegral;
   vector<float>   *MuonsAuxDyn_scatteringCurvatureSignificance;
   vector<float>   *MuonsAuxDyn_scatteringNeighbourSignificance;
   vector<float>   *MuonsAuxDyn_momentumBalanceSignificance;
   vector<float>   *MuonsAuxDyn_segmentDeltaEta;
   vector<float>   *MuonsAuxDyn_CaloLRLikelihood;
   vector<float>   *MuonsAuxDyn_EnergyLoss;
   vector<int>     *MuonsAuxDyn_CaloMuonIDTag;
   vector<float>   *MuonsAuxDyn_InnerDetectorPt;
   vector<float>   *MuonsAuxDyn_MuonSpectrometerPt;
   vector<unsigned char> *MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_extendedClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_extendedOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_innerClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_innerOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_isEndcapGoodLayers;
   vector<unsigned char> *MuonsAuxDyn_isSmallGoodSectors;
   vector<unsigned char> *MuonsAuxDyn_middleClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_middleOutBoundsPrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_numberOfGoodPrecisionLayers;
   vector<unsigned char> *MuonsAuxDyn_outerClosePrecisionHits;
   vector<unsigned char> *MuonsAuxDyn_outerOutBoundsPrecisionHits;
   vector<char>    *MuonsAuxDyn_DFCommonGoodMuon;
   Float_t         NeutralParticleFlowIsoCentralEventShapeAuxDyn_Density;
   Float_t         NeutralParticleFlowIsoForwardEventShapeAuxDyn_Density;
   vector<float>   *PhotonsAuxDyn_pt;
   vector<float>   *PhotonsAuxDyn_eta;
   vector<float>   *PhotonsAuxDyn_phi;
   vector<float>   *PhotonsAuxDyn_m;
   vector<float>   *PhotonsAuxDyn_ptcone20_TightTTVA_pt1000;
   vector<float>   *PhotonsAuxDyn_topoetcone20;
   Int_t           PhotonsAuxDyn_truthParticleLink_;
   UInt_t          PhotonsAuxDyn_truthParticleLink_m_persKey[kMaxPhotonsAuxDyn_truthParticleLink];   //[PhotonsAuxDyn.truthParticleLink_]
   UInt_t          PhotonsAuxDyn_truthParticleLink_m_persIndex[kMaxPhotonsAuxDyn_truthParticleLink];   //[PhotonsAuxDyn.truthParticleLink_]
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *PhotonsAuxDyn_caloClusterLinks;
   vector<unsigned short> *PhotonsAuxDyn_author;
   vector<unsigned int> *PhotonsAuxDyn_OQ;
   vector<float>   *PhotonsAuxDyn_f1;
   Int_t           PhotonsAuxDyn_ambiguityLink_;
   UInt_t          PhotonsAuxDyn_ambiguityLink_m_persKey[kMaxPhotonsAuxDyn_ambiguityLink];   //[PhotonsAuxDyn.ambiguityLink_]
   UInt_t          PhotonsAuxDyn_ambiguityLink_m_persIndex[kMaxPhotonsAuxDyn_ambiguityLink];   //[PhotonsAuxDyn.ambiguityLink_]
   vector<float>   *PhotonsAuxDyn_core57cellsEnergyCorrection;
   vector<float>   *PhotonsAuxDyn_neflowisol20;
   vector<float>   *PhotonsAuxDyn_topoetcone20ptCorrection;
   vector<float>   *PhotonsAuxDyn_topoetcone40;
   vector<float>   *PhotonsAuxDyn_topoetconecoreConeEnergyCorrection;
   vector<float>   *PhotonsAuxDyn_topoetconecoreConeSCEnergyCorrection;
   vector<int>     *PhotonsAuxDyn_truthOrigin;
   vector<int>     *PhotonsAuxDyn_truthType;
   vector<char>    *PhotonsAuxDyn_DFCommonCrackVetoCleaning;
   vector<float>   *PhotonsAuxDyn_ptcone20;
   vector<char>    *PhotonsAuxDyn_Tight;
   vector<float>   *PhotonsAuxDyn_topoetcone40ptCorrection;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *PhotonsAuxDyn_vertexLinks;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMLoose;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMTight;
   vector<unsigned int> *PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtIncl;
   vector<unsigned int> *PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtInclIsEMValue;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsCleaning;
   vector<char>    *PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *PrimaryVerticesAuxDyn_trackParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::NeutralParticle_v1> > > > *PrimaryVerticesAuxDyn_neutralParticleLinks;
   vector<float>   *PrimaryVerticesAuxDyn_x;
   vector<float>   *PrimaryVerticesAuxDyn_y;
   vector<float>   *PrimaryVerticesAuxDyn_z;
   vector<short>   *PrimaryVerticesAuxDyn_vertexType;
   vector<float>   *TauJetsAuxDyn_pt;
   vector<float>   *TauJetsAuxDyn_eta;
   vector<float>   *TauJetsAuxDyn_phi;
   vector<float>   *TauJetsAuxDyn_m;
   Int_t           TauJetsAuxDyn_jetLink_;
   UInt_t          TauJetsAuxDyn_jetLink_m_persKey[kMaxTauJetsAuxDyn_jetLink];   //[TauJetsAuxDyn.jetLink_]
   UInt_t          TauJetsAuxDyn_jetLink_m_persIndex[kMaxTauJetsAuxDyn_jetLink];   //[TauJetsAuxDyn.jetLink_]
   Int_t           TauJetsAuxDyn_vertexLink_;
   UInt_t          TauJetsAuxDyn_vertexLink_m_persKey[kMaxTauJetsAuxDyn_vertexLink];   //[TauJetsAuxDyn.vertexLink_]
   UInt_t          TauJetsAuxDyn_vertexLink_m_persIndex[kMaxTauJetsAuxDyn_vertexLink];   //[TauJetsAuxDyn.vertexLink_]
   Int_t           TauJetsAuxDyn_secondaryVertexLink_;
   UInt_t          TauJetsAuxDyn_secondaryVertexLink_m_persKey[kMaxTauJetsAuxDyn_secondaryVertexLink];   //[TauJetsAuxDyn.secondaryVertexLink_]
   UInt_t          TauJetsAuxDyn_secondaryVertexLink_m_persIndex[kMaxTauJetsAuxDyn_secondaryVertexLink];   //[TauJetsAuxDyn.secondaryVertexLink_]
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_hadronicPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_shotPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_chargedPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_neutralPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_pi0PFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_protoChargedPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_protoNeutralPFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > *TauJetsAuxDyn_protoPi0PFOLinks;
   vector<vector<ElementLink<DataVector<xAOD::TauTrack_v1> > > > *TauJetsAuxDyn_tauTrackLinks;
   vector<float>   *TauJetsAuxDyn_charge;
   vector<float>   *TauJetsAuxDyn_RNNJetScore;
   vector<float>   *TauJetsAuxDyn_RNNJetScoreSigTrans;
   vector<float>   *TauJetsAuxDyn_BDTEleScore_retuned;
   vector<float>   *TauJetsAuxDyn_BDTEleScoreSigTrans_retuned;
   Int_t           TauJetsAuxDyn_truthParticleLink_;
   UInt_t          TauJetsAuxDyn_truthParticleLink_m_persKey[kMaxTauJetsAuxDyn_truthParticleLink];   //[TauJetsAuxDyn.truthParticleLink_]
   UInt_t          TauJetsAuxDyn_truthParticleLink_m_persIndex[kMaxTauJetsAuxDyn_truthParticleLink];   //[TauJetsAuxDyn.truthParticleLink_]
   vector<float>   *TauJetsAuxDyn_ptDetectorAxis;
   vector<float>   *TauJetsAuxDyn_etaDetectorAxis;
   vector<float>   *TauJetsAuxDyn_mDetectorAxis;
   vector<float>   *TauJetsAuxDyn_ptFinalCalib;
   vector<float>   *TauJetsAuxDyn_etaFinalCalib;
   vector<float>   *TauJetsAuxDyn_phiFinalCalib;
   vector<float>   *TauJetsAuxDyn_mFinalCalib;
   vector<float>   *TauJetsAuxDyn_BDTJetScore;
   vector<float>   *TauJetsAuxDyn_BDTEleScore;
   vector<float>   *TauJetsAuxDyn_EleMatchLikelihoodScore;
   vector<float>   *TauJetsAuxDyn_BDTJetScoreSigTrans;
   vector<unsigned int> *TauJetsAuxDyn_isTauFlags;
   vector<int>     *TauJetsAuxDyn_PanTau_DecayMode;
   vector<float>   *TauJetsAuxDyn_BDTEleScoreSigTrans;
   Int_t           TauJetsAuxDyn_electronLink_;
   UInt_t          TauJetsAuxDyn_electronLink_m_persKey[kMaxTauJetsAuxDyn_electronLink];   //[TauJetsAuxDyn.electronLink_]
   UInt_t          TauJetsAuxDyn_electronLink_m_persIndex[kMaxTauJetsAuxDyn_electronLink];   //[TauJetsAuxDyn.electronLink_]
   vector<float>   *TauJetsAuxDyn_eta_combined;
   vector<float>   *TauJetsAuxDyn_m_combined;
   vector<float>   *TauJetsAuxDyn_phi_combined;
   vector<float>   *TauJetsAuxDyn_pt_combined;
   vector<char>    *TauJetsAuxDyn_BDTEleLoose_retuned;
   vector<char>    *TauJetsAuxDyn_BDTEleMedium_retuned;
   vector<char>    *TauJetsAuxDyn_BDTEleTight_retuned;
   vector<float>   *TauJetsAuxDyn_seedJetWidth;
   vector<float>   *TauJetsAuxDyn_seedJetJvt;
   vector<vector<float> > *TauJetsAuxDyn_seedTrackWidthPt1000;
   Int_t           TauJetsAuxDyn_truthJetLink_;
   UInt_t          TauJetsAuxDyn_truthJetLink_m_persKey[kMaxTauJetsAuxDyn_truthJetLink];   //[TauJetsAuxDyn.truthJetLink_]
   UInt_t          TauJetsAuxDyn_truthJetLink_m_persIndex[kMaxTauJetsAuxDyn_truthJetLink];   //[TauJetsAuxDyn.truthJetLink_]
   vector<float>   *TauTracksAuxDyn_pt;
   vector<float>   *TauTracksAuxDyn_eta;
   vector<float>   *TauTracksAuxDyn_phi;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *TauTracksAuxDyn_trackLinks;
   vector<unsigned short> *TauTracksAuxDyn_flagSet;
   Float_t         TopoClusterIsoCentralEventShapeAuxDyn_Density;
   Float_t         TopoClusterIsoForwardEventShapeAuxDyn_Density;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_e300_etcutAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_g200_etcutAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_g300_etcutAuxDyn_TrigMatchedObjects;
   Int_t           TruthParticlesAuxDyn_prodVtxLink_;
   UInt_t          TruthParticlesAuxDyn_prodVtxLink_m_persKey[kMaxTruthParticlesAuxDyn_prodVtxLink];   //[TruthParticlesAuxDyn.prodVtxLink_]
   UInt_t          TruthParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxTruthParticlesAuxDyn_prodVtxLink];   //[TruthParticlesAuxDyn.prodVtxLink_]
   Int_t           TruthParticlesAuxDyn_decayVtxLink_;
   UInt_t          TruthParticlesAuxDyn_decayVtxLink_m_persKey[kMaxTruthParticlesAuxDyn_decayVtxLink];   //[TruthParticlesAuxDyn.decayVtxLink_]
   UInt_t          TruthParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxTruthParticlesAuxDyn_decayVtxLink];   //[TruthParticlesAuxDyn.decayVtxLink_]
   vector<float>   *TruthParticlesAuxDyn_phi;
   vector<float>   *TruthParticlesAuxDyn_m;
   vector<float>   *TruthParticlesAuxDyn_px;
   vector<float>   *TruthParticlesAuxDyn_py;
   vector<float>   *TruthParticlesAuxDyn_pz;
   vector<float>   *TruthParticlesAuxDyn_e;
   vector<int>     *TruthParticlesAuxDyn_pdgId;
   vector<float>   *TruthParticlesAuxDyn_d0;
   vector<float>   *TruthParticlesAuxDyn_z0;
   vector<float>   *TruthParticlesAuxDyn_theta;
   vector<float>   *TruthParticlesAuxDyn_qOverP;
   vector<int>     *TruthParticlesAuxDyn_barcode;
   vector<int>     *TruthParticlesAuxDyn_status;
   vector<float>   *TruthParticlesAuxDyn_polarizationPhi;
   vector<float>   *TruthParticlesAuxDyn_polarizationTheta;
   vector<float>   *TruthParticlesAuxDyn_prodR;
   vector<float>   *TruthParticlesAuxDyn_prodZ;
   vector<float>   *TruthParticlesAuxDyn_z0st;
   vector<unsigned int> *TruthParticlesAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthParticlesAuxDyn_classifierParticleOutCome;
   vector<char>    *TruthParticlesAuxDyn_dressedPhoton;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthVerticesAuxDyn_outgoingParticleLinks;
   vector<float>   *TruthVerticesAuxDyn_x;
   vector<float>   *TruthVerticesAuxDyn_y;
   vector<float>   *TruthVerticesAuxDyn_z;
   vector<int>     *TruthVerticesAuxDyn_barcode;
   vector<int>     *TruthVerticesAuxDyn_id;
   vector<float>   *TruthVerticesAuxDyn_t;
   vector<unsigned int> *egammaClustersAuxDyn_clusterSize;
   vector<float>   *egammaClustersAuxDyn_altE;
   vector<float>   *egammaClustersAuxDyn_calE;
   vector<float>   *egammaClustersAuxDyn_calEta;
   vector<float>   *egammaClustersAuxDyn_calPhi;
   vector<float>   *egammaClustersAuxDyn_calM;
   vector<vector<float> > *egammaClustersAuxDyn_e_sampl;
   vector<float>   *egammaClustersAuxDyn_ETA2CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_ETACALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHI2CALOFRAME;
   vector<float>   *egammaClustersAuxDyn_PHICALOFRAME;
   vector<vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > > *egammaClustersAuxDyn_constituentClusterLinks;
   vector<vector<float> > *egammaClustersAuxDyn_eta_sampl;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu24_ilooseAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu24_imediumAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu24_ivarlooseAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu24_ivarmediumAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu26_imediumAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu26_ivarmediumAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu40AuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_mu50AuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_g120_looseAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_g140_looseAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_e140_lhloose_nod0AuxDyn_TrigMatchedObjects;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_phi;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPixelHits;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfSCTHits;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_d0;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_z0;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_theta;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_qOverP;
   vector<vector<float> > *InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix;
   vector<float>   *InDetForwardTrackParticlesAuxDyn_vz;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfTRTHits;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers;
   vector<unsigned char> *InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_e60_mediumAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_e60_lhmedium_nod0AuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects;

   // List of branches
   TBranch        *b_McEventInfo;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mht;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUC;   //!
   TBranch        *b_TrigConfKeys;   //!
   TBranch        *b_EventInfoAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_EventInfoAux_runNumber;   //!
   TBranch        *b_EventInfoAux_eventNumber;   //!
   TBranch        *b_EventInfoAux_lumiBlock;   //!
   TBranch        *b_EventInfoAux_timeStamp;   //!
   TBranch        *b_EventInfoAux_timeStampNSOffset;   //!
   TBranch        *b_EventInfoAux_bcid;   //!
   TBranch        *b_EventInfoAux_detectorMask0;   //!
   TBranch        *b_EventInfoAux_detectorMask1;   //!
   TBranch        *b_EventInfoAux_detectorMask2;   //!
   TBranch        *b_EventInfoAux_detectorMask3;   //!
   TBranch        *b_EventInfoAux_detDescrTags;   //!
   TBranch        *b_EventInfoAux_eventTypeBitmask;   //!
   TBranch        *b_EventInfoAux_statusElement;   //!
   TBranch        *b_EventInfoAux_extendedLevel1ID;   //!
   TBranch        *b_EventInfoAux_level1TriggerType;   //!
   TBranch        *b_EventInfoAux_streamTagNames;   //!
   TBranch        *b_EventInfoAux_streamTagTypes;   //!
   TBranch        *b_EventInfoAux_streamTagObeysLumiblock;   //!
   TBranch        *b_EventInfoAux_actualInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_averageInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_pixelFlags;   //!
   TBranch        *b_EventInfoAux_sctFlags;   //!
   TBranch        *b_EventInfoAux_trtFlags;   //!
   TBranch        *b_EventInfoAux_larFlags;   //!
   TBranch        *b_EventInfoAux_tileFlags;   //!
   TBranch        *b_EventInfoAux_muonFlags;   //!
   TBranch        *b_EventInfoAux_forwardDetFlags;   //!
   TBranch        *b_EventInfoAux_coreFlags;   //!
   TBranch        *b_EventInfoAux_backgroundFlags;   //!
   TBranch        *b_EventInfoAux_lumiFlags;   //!
   TBranch        *b_EventInfoAux_beamPosX;   //!
   TBranch        *b_EventInfoAux_beamPosY;   //!
   TBranch        *b_EventInfoAux_beamPosZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaX;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaY;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaXY;   //!
   TBranch        *b_EventInfoAux_beamTiltXZ;   //!
   TBranch        *b_EventInfoAux_beamTiltYZ;   //!
   TBranch        *b_EventInfoAux_beamStatus;   //!
   TBranch        *b_xTrigDecisionAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_xTrigDecisionAux_smk;   //!
   TBranch        *b_xTrigDecisionAux_bgCode;   //!
   TBranch        *b_xTrigDecisionAux_tav;   //!
   TBranch        *b_xTrigDecisionAux_tap;   //!
   TBranch        *b_xTrigDecisionAux_tbp;   //!
   TBranch        *b_xTrigDecisionAux_lvl2ErrorBits;   //!
   TBranch        *b_xTrigDecisionAux_efErrorBits;   //!
   TBranch        *b_xTrigDecisionAux_lvl2Truncated;   //!
   TBranch        *b_xTrigDecisionAux_efTruncated;   //!
   TBranch        *b_xTrigDecisionAux_lvl2PassedPhysics;   //!
   TBranch        *b_xTrigDecisionAux_efPassedPhysics;   //!
   TBranch        *b_xTrigDecisionAux_lvl2PassedRaw;   //!
   TBranch        *b_xTrigDecisionAux_efPassedRaw;   //!
   TBranch        *b_xTrigDecisionAux_lvl2PassedThrough;   //!
   TBranch        *b_xTrigDecisionAux_efPassedThrough;   //!
   TBranch        *b_xTrigDecisionAux_lvl2Prescaled;   //!
   TBranch        *b_xTrigDecisionAux_efPrescaled;   //!
   TBranch        *b_xTrigDecisionAux_lvl2Resurrected;   //!
   TBranch        *b_xTrigDecisionAux_efResurrected;   //!
   TBranch        *b_EventInfo;   //!
   TBranch        *b_LVL1EnergySumRoI;   //!
   TBranch        *b_TrigNavigationAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_TrigNavigationAux_serialized;   //!
   TBranch        *b_xTrigDecision;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_jetLink;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_objectLinks;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_calpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_calpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_calpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_cale;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_calsumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_calkey;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_trkpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_trkpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_trkpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_trke;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_trksumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_trkkey;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_jettrkpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_jettrkpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_jettrkpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_jettrke;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_jettrksumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_overlapIndices;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_overlapTypes;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlowAux_isMisc;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jetLink;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_objectLinks;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_cale;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calsumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_calkey;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trke;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trksumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_trkkey;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrkpx;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrkpy;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrkpz;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrke;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_jettrksumpt;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_overlapIndices;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_overlapTypes;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopoAux_isMisc;   //!
   TBranch        *b_METAssoc_AntiKt4EMPFlow;   //!
   TBranch        *b_METAssoc_AntiKt4EMTopo;   //!
   TBranch        *b_TrigNavigation;   //!
   TBranch        *b_Kt4EMPFlowEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_Kt4LCTopoOriginEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_Kt4EMPFlowEventShape;   //!
   TBranch        *b_Kt4EMTopoOriginEventShape;   //!
   TBranch        *b_Kt4LCTopoOriginEventShape;   //!
   TBranch        *b_NeutralParticleFlowIsoCentralEventShape;   //!
   TBranch        *b_NeutralParticleFlowIsoForwardEventShape;   //!
   TBranch        *b_TopoClusterIsoCentralEventShape;   //!
   TBranch        *b_TopoClusterIsoForwardEventShape;   //!
   TBranch        *b_LVL1EnergySumRoIAux_xAOD__AuxInfoBase;   //!
   TBranch        *b_LVL1EnergySumRoIAux_roiWord0;   //!
   TBranch        *b_LVL1EnergySumRoIAux_roiWord1;   //!
   TBranch        *b_LVL1EnergySumRoIAux_roiWord2;   //!
   TBranch        *b_LVL1EnergySumRoIAux_roiWord3;   //!
   TBranch        *b_LVL1EnergySumRoIAux_roiWord4;   //!
   TBranch        *b_LVL1EnergySumRoIAux_roiWord5;   //!
   TBranch        *b_LVL1EnergySumRoIAux_thrNames;   //!
   TBranch        *b_LVL1EnergySumRoIAux_energyX;   //!
   TBranch        *b_LVL1EnergySumRoIAux_energyY;   //!
   TBranch        *b_LVL1EnergySumRoIAux_energyT;   //!
   TBranch        *b_LVL1EnergySumRoIAux_energyXRestricted;   //!
   TBranch        *b_LVL1EnergySumRoIAux_energyYRestricted;   //!
   TBranch        *b_LVL1EnergySumRoIAux_energyTRestricted;   //!
   TBranch        *b_LVL1EmTauRoIs;   //!
   TBranch        *b_Electrons;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_Electrons;   //!
   TBranch        *b_GSFConversionVertices;   //!
   TBranch        *b_PrimaryVertices;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlow;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopo;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlow;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopo;   //!
   TBranch        *b_MET_Track;   //!
   TBranch        *b_MET_Truth;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_Photons;   //!
   TBranch        *b_Photons;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201810Aux_m_locked;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201810Aux_m_parentLink;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201903Aux_m_locked;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201903Aux_m_parentLink;   //!
   TBranch        *b_AntiKt4EMTopoJets_BTagging201810Aux_m_locked;   //!
   TBranch        *b_AntiKt4EMTopoJets_BTagging201810Aux_m_parentLink;   //!
   TBranch        *b_TauJets;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScan;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_egammaClusters;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810Aux_;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903Aux_;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810Aux_;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAux_;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux_;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_;   //!
   TBranch        *b_ElectronsAux_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_;   //!
   TBranch        *b_GSFConversionVerticesAux_;   //!
   TBranch        *b_GSFTrackParticlesAux_;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAux_;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAux_;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux_;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAux_;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux_;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux_;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux_;   //!
   TBranch        *b_InDetForwardTrackParticlesAux_;   //!
   TBranch        *b_InDetTrackParticlesAux_;   //!
   TBranch        *b_LVL1EmTauRoIsAux_;   //!
   TBranch        *b_LVL1MuonRoIsAux_;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAux_;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAux_;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlowAux_;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAux_;   //!
   TBranch        *b_MET_TrackAux_;   //!
   TBranch        *b_MET_TruthAux_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAux_;   //!
   TBranch        *b_MuonsAux_;   //!
   TBranch        *b_PhotonsAux_;   //!
   TBranch        *b_PrimaryVerticesAux_;   //!
   TBranch        *b_TauJetsAux_;   //!
   TBranch        *b_TauTracksAux_;   //!
   TBranch        *b_TrigMatch_HLT_e140_lhloose_nod0Aux_;   //!
   TBranch        *b_TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux_;   //!
   TBranch        *b_TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux_;   //!
   TBranch        *b_TrigMatch_HLT_e300_etcutAux_;   //!
   TBranch        *b_TrigMatch_HLT_e60_lhmedium_nod0Aux_;   //!
   TBranch        *b_TrigMatch_HLT_e60_mediumAux_;   //!
   TBranch        *b_TrigMatch_HLT_g120_looseAux_;   //!
   TBranch        *b_TrigMatch_HLT_g140_looseAux_;   //!
   TBranch        *b_TrigMatch_HLT_g200_etcutAux_;   //!
   TBranch        *b_TrigMatch_HLT_g300_etcutAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ilooseAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu24_imediumAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ivarlooseAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ivarmediumAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu26_imediumAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu26_ivarmediumAux_;   //!
   TBranch        *b_TrigMatch_HLT_mu40Aux_;   //!
   TBranch        *b_TrigMatch_HLT_mu50Aux_;   //!
   TBranch        *b_TruthParticlesAux_;   //!
   TBranch        *b_TruthVerticesAux_;   //!
   TBranch        *b_egammaClustersAux_;   //!
   TBranch        *b_TruthParticles;   //!
   TBranch        *b_TruthVertices;   //!
   TBranch        *b_AntiKt10LCTopoJets;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJets;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20Jets;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20Jets;   //!
   TBranch        *b_AntiKt2LCTopoJets;   //!
   TBranch        *b_AntiKt4EMPFlowJets;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201810;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201903;   //!
   TBranch        *b_AntiKt4EMTopoJets;   //!
   TBranch        *b_AntiKt4EMTopoJets_BTagging201810;   //!
   TBranch        *b_AntiKt4LCTopoJets;   //!
   TBranch        *b_AntiKt4TruthJets;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJets;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTag;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903;   //!
   TBranch        *b_CombinedMuonTrackParticles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticles;   //!
   TBranch        *b_GSFTrackParticles;   //!
   TBranch        *b_InDetForwardTrackParticles;   //!
   TBranch        *b_InDetTrackParticles;   //!
   TBranch        *b_MuonSpectrometerTrackParticles;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_m;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_pt;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_eta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_phi;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_m;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_pt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_eta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_phi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_m;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_pt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_eta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_phi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_m;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_m;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt2LCTopoJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_phi;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_m;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt4TruthJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKt4TruthJetsAux_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAux_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAux_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAux_m;   //!
   TBranch        *b_AntiKt4TruthJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKt4TruthJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_pt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_eta;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_phi;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_m;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentLinks;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_xAOD__AuxContainerBase;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_pt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_eta;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_phi;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_m;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentLinks;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentWeights;   //!
   TBranch        *b_TauTracks;   //!
   TBranch        *b_LVL1MuonRoIs;   //!
   TBranch        *b_TrigMatch_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_TrigMatch_HLT_e24_lhtight_nod0_ivarloose;   //!
   TBranch        *b_TrigMatch_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_TrigMatch_HLT_e300_etcut;   //!
   TBranch        *b_TrigMatch_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_TrigMatch_HLT_e60_medium;   //!
   TBranch        *b_TrigMatch_HLT_g120_loose;   //!
   TBranch        *b_TrigMatch_HLT_g140_loose;   //!
   TBranch        *b_TrigMatch_HLT_g200_etcut;   //!
   TBranch        *b_TrigMatch_HLT_g300_etcut;   //!
   TBranch        *b_TrigMatch_HLT_mu24_iloose;   //!
   TBranch        *b_TrigMatch_HLT_mu24_imedium;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ivarloose;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ivarmedium;   //!
   TBranch        *b_TrigMatch_HLT_mu26_imedium;   //!
   TBranch        *b_TrigMatch_HLT_mu26_ivarmedium;   //!
   TBranch        *b_TrigMatch_HLT_mu40;   //!
   TBranch        *b_TrigMatch_HLT_mu50;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt2TrackJet;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_HbbScore;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreQCD;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreHiggs;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreTop;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta;   //!
   TBranch        *b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJet;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumMass;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_Charge;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_DetectorPhi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persKey;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persIndex;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt1000;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt500;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_WidthPhi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJet;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetPt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationFraction;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persKey;   //!
   TBranch        *b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persIndex;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta;   //!
   TBranch        *b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Qw;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Charge;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_WidthPhi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_TransformType;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PtFrac;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_RClus;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF4;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_ungroomed;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2_2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_4_1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2_dichroic;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N3;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2_dichroic;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L2;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L3;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L4;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L5;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullMag;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullPhi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C00;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C01;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C10;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C11;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_zg;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_rg;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_DetectorY;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_JVFCorr;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_Jvt;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_JvtRpt;   //!
   TBranch        *b_AntiKt2LCTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JVFCorr;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_Jvt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_JvtRpt;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DetectorEta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JVFCorr;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Jvt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JvtRpt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_WidthPhi;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_has_ATLASRECTS_5027_bug;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclTausFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitial;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitial;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosons;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartons;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosons;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosons;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsCount;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsPt;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persKey;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persIndex;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedTracks;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedMuons;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMinRadius;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMassScale;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclBHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclCHadronsFinal;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclExtendedTruthLabelID;   //!
   TBranch        *b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2r_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2rmu_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2r_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2rmu_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2r_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2rmu_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2r_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2rmu_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2r_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2rmu_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pu;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pc;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pb;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c100_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c10_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2cl100_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2r_discriminant;   //!
   TBranch        *b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2rmu_discriminant;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectChId;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;   //!
   TBranch        *b_ElectronsAuxDyn_trackParticleLinks;   //!
   TBranch        *b_ElectronsAuxDyn_pt;   //!
   TBranch        *b_ElectronsAuxDyn_eta;   //!
   TBranch        *b_ElectronsAuxDyn_phi;   //!
   TBranch        *b_ElectronsAuxDyn_m;   //!
   TBranch        *b_ElectronsAuxDyn_charge;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonAddAmbiguity;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_TightTTVA_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone20_TightTTVA_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_TightTTVA_pt500;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone40_TightTTVALooseCone_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone20_TightTTVALooseCone_pt1000;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt500;   //!
   TBranch        *b_ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt500;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20;   //!
   TBranch        *b_ElectronsAuxDyn_ptvarcone20;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_ElectronsAuxDyn_author;   //!
   TBranch        *b_ElectronsAuxDyn_OQ;   //!
   TBranch        *b_ElectronsAuxDyn_f1;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_ambiguityType;   //!
   TBranch        *b_ElectronsAuxDyn_core57cellsEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_neflowisol20;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetcone40;   //!
   TBranch        *b_ElectronsAuxDyn_topoetconecoreConeEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection;   //!
   TBranch        *b_ElectronsAuxDyn_truthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_truthType;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHVeryLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLoose;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLooseBL;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHMedium;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHTight;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsECIDS;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonElectronsECIDSResult;   //!
   TBranch        *b_ElectronsAuxDyn_DFCommonCrackVetoCleaning;   //!
   TBranch        *b_ElectronsAuxDyn_truthPdgId;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthType;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthOrigin;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex;   //!
   TBranch        *b_ElectronsAuxDyn_firstEgMotherPdgId;   //!
   TBranch        *b_EventInfoAuxDyn_streamTagRobs;   //!
   TBranch        *b_EventInfoAuxDyn_streamTagDets;   //!
   TBranch        *b_EventInfoAuxDyn_subEventTime;   //!
   TBranch        *b_EventInfoAuxDyn_subEventIndex;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_m_persKey;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_m_persIndex;   //!
   TBranch        *b_EventInfoAuxDyn_subEventType;   //!
   TBranch        *b_GenFiltHT;   //!
   TBranch        *b_GenFiltMET;   //!
   TBranch        *b_GenFiltPTZ;   //!
   TBranch        *b_DFCommonJets_eventClean_LooseBad;   //!
   TBranch        *b_DFCommonJets_eventClean_LooseBadLLP;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_TruthIsoCentralEventShape_rho;   //!
   TBranch        *b_TruthIsoForwardEventShape_rho;   //!
   TBranch        *b_mcEventNumber;   //!
   TBranch        *b_EventInfoAuxDyn_mcEventWeights;   //!
   TBranch        *b_DFCommonJets_isBadBatman;   //!
   TBranch        *b_HTXS_prodMode;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_neutralParticleLinks;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_px;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_py;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pz;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_x;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_y;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_z;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_minRfirstHit;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pt1;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pt2;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfPixelOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_numberOfSCTOutliers;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_author;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_muonType;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_author;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_muonType;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persKey;   //!
   TBranch        *b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persIndex;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta;   //!
   TBranch        *b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ex;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ey;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ez;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumEt;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumE;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ex;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ey;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ez;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumEt;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumE;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ex;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ey;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ez;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumEt;   //!
   TBranch        *b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumE;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_chiSquared;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberDoF;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPhiLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthMatchProbability;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_thrNames;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_thrValues;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_eta;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_phi;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_roiWord;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_etScale;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_thrPattern;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_core;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_emClus;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_tauClus;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_emIsol;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_hadIsol;   //!
   TBranch        *b_LVL1EmTauRoIsAuxDyn_hadCore;   //!
   TBranch        *b_LVL1MuonRoIsAuxDyn_eta;   //!
   TBranch        *b_LVL1MuonRoIsAuxDyn_phi;   //!
   TBranch        *b_LVL1MuonRoIsAuxDyn_roiWord;   //!
   TBranch        *b_LVL1MuonRoIsAuxDyn_thrName;   //!
   TBranch        *b_LVL1MuonRoIsAuxDyn_thrValue;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_name;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_mpx;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_mpy;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_sumet;   //!
   TBranch        *b_MET_Core_AntiKt4EMPFlowAuxDyn_source;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_name;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_mpx;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_mpy;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_sumet;   //!
   TBranch        *b_MET_Core_AntiKt4EMTopoAuxDyn_source;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlowAuxDyn_name;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlowAuxDyn_mpx;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlowAuxDyn_mpy;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlowAuxDyn_sumet;   //!
   TBranch        *b_MET_Reference_AntiKt4EMPFlowAuxDyn_source;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_name;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_mpx;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_mpy;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_sumet;   //!
   TBranch        *b_MET_Reference_AntiKt4EMTopoAuxDyn_source;   //!
   TBranch        *b_MET_TrackAuxDyn_name;   //!
   TBranch        *b_MET_TrackAuxDyn_mpx;   //!
   TBranch        *b_MET_TrackAuxDyn_mpy;   //!
   TBranch        *b_MET_TruthAuxDyn_name;   //!
   TBranch        *b_MET_TruthAuxDyn_mpx;   //!
   TBranch        *b_MET_TruthAuxDyn_mpy;   //!
   TBranch        *b_MET_TruthAuxDyn_sumet;   //!
   TBranch        *b_MET_TruthAuxDyn_source;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_MuonSpectrometerTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_MuonsAuxDyn_pt;   //!
   TBranch        *b_MuonsAuxDyn_eta;   //!
   TBranch        *b_MuonsAuxDyn_phi;   //!
   TBranch        *b_MuonsAuxDyn_muonSegmentLinks;   //!
   TBranch        *b_MuonsAuxDyn_charge;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30_TightTTVA_pt1000;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20_TightTTVA_pt1000;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30_TightTTVA_pt500;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20_TightTTVA_pt500;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone30;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_MuonsAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_MuonsAuxDyn_author;   //!
   TBranch        *b_MuonsAuxDyn_neflowisol20;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone40;   //!
   TBranch        *b_MuonsAuxDyn_truthOrigin;   //!
   TBranch        *b_MuonsAuxDyn_truthType;   //!
   TBranch        *b_MuonsAuxDyn_muonType;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_inDetTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_ptcone20;   //!
   TBranch        *b_MuonsAuxDyn_ptcone30;   //!
   TBranch        *b_MuonsAuxDyn_ptcone40;   //!
   TBranch        *b_MuonsAuxDyn_ptvarcone40;   //!
   TBranch        *b_MuonsAuxDyn_topoetcone30;   //!
   TBranch        *b_MuonsAuxDyn_allAuthors;   //!
   TBranch        *b_MuonsAuxDyn_quality;   //!
   TBranch        *b_MuonsAuxDyn_energyLossType;   //!
   TBranch        *b_MuonsAuxDyn_innerSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_innerLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_middleSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_middleLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_outerSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_outerLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedSmallHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedLargeHits;   //!
   TBranch        *b_MuonsAuxDyn_innerSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_innerLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_middleSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_middleLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_outerSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_outerLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_extendedSmallHoles;   //!
   TBranch        *b_MuonsAuxDyn_extendedLargeHoles;   //!
   TBranch        *b_MuonsAuxDyn_cscEtaHits;   //!
   TBranch        *b_MuonsAuxDyn_cscUnspoiledEtaHits;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackParticleLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_m_persKey;   //!
   TBranch        *b_MuonsAuxDyn_clusterLink_m_persIndex;   //!
   TBranch        *b_MuonsAuxDyn_spectrometerFieldIntegral;   //!
   TBranch        *b_MuonsAuxDyn_scatteringCurvatureSignificance;   //!
   TBranch        *b_MuonsAuxDyn_scatteringNeighbourSignificance;   //!
   TBranch        *b_MuonsAuxDyn_momentumBalanceSignificance;   //!
   TBranch        *b_MuonsAuxDyn_segmentDeltaEta;   //!
   TBranch        *b_MuonsAuxDyn_CaloLRLikelihood;   //!
   TBranch        *b_MuonsAuxDyn_EnergyLoss;   //!
   TBranch        *b_MuonsAuxDyn_CaloMuonIDTag;   //!
   TBranch        *b_MuonsAuxDyn_InnerDetectorPt;   //!
   TBranch        *b_MuonsAuxDyn_MuonSpectrometerPt;   //!
   TBranch        *b_MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_extendedOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_innerClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_innerOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_isEndcapGoodLayers;   //!
   TBranch        *b_MuonsAuxDyn_isSmallGoodSectors;   //!
   TBranch        *b_MuonsAuxDyn_middleClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_middleOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_numberOfGoodPrecisionLayers;   //!
   TBranch        *b_MuonsAuxDyn_outerClosePrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_outerOutBoundsPrecisionHits;   //!
   TBranch        *b_MuonsAuxDyn_DFCommonGoodMuon;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_PhotonsAuxDyn_pt;   //!
   TBranch        *b_PhotonsAuxDyn_eta;   //!
   TBranch        *b_PhotonsAuxDyn_phi;   //!
   TBranch        *b_PhotonsAuxDyn_m;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone20_TightTTVA_pt1000;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_caloClusterLinks;   //!
   TBranch        *b_PhotonsAuxDyn_author;   //!
   TBranch        *b_PhotonsAuxDyn_OQ;   //!
   TBranch        *b_PhotonsAuxDyn_f1;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_m_persKey;   //!
   TBranch        *b_PhotonsAuxDyn_ambiguityLink_m_persIndex;   //!
   TBranch        *b_PhotonsAuxDyn_core57cellsEnergyCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_neflowisol20;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone20ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40;   //!
   TBranch        *b_PhotonsAuxDyn_topoetconecoreConeEnergyCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_topoetconecoreConeSCEnergyCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_truthOrigin;   //!
   TBranch        *b_PhotonsAuxDyn_truthType;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonCrackVetoCleaning;   //!
   TBranch        *b_PhotonsAuxDyn_ptcone20;   //!
   TBranch        *b_PhotonsAuxDyn_Tight;   //!
   TBranch        *b_PhotonsAuxDyn_topoetcone40ptCorrection;   //!
   TBranch        *b_PhotonsAuxDyn_vertexLinks;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMLoose;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTight;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtIncl;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtInclIsEMValue;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsCleaning;   //!
   TBranch        *b_PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_trackParticleLinks;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_neutralParticleLinks;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_x;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_y;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_z;   //!
   TBranch        *b_PrimaryVerticesAuxDyn_vertexType;   //!
   TBranch        *b_TauJetsAuxDyn_pt;   //!
   TBranch        *b_TauJetsAuxDyn_eta;   //!
   TBranch        *b_TauJetsAuxDyn_phi;   //!
   TBranch        *b_TauJetsAuxDyn_m;   //!
   TBranch        *b_TauJetsAuxDyn_jetLink_;   //!
   TBranch        *b_TauJetsAuxDyn_jetLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_jetLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_vertexLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_secondaryVertexLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_hadronicPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_shotPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_chargedPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_neutralPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_pi0PFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_protoChargedPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_protoNeutralPFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_protoPi0PFOLinks;   //!
   TBranch        *b_TauJetsAuxDyn_tauTrackLinks;   //!
   TBranch        *b_TauJetsAuxDyn_charge;   //!
   TBranch        *b_TauJetsAuxDyn_RNNJetScore;   //!
   TBranch        *b_TauJetsAuxDyn_RNNJetScoreSigTrans;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleScore_retuned;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleScoreSigTrans_retuned;   //!
   TBranch        *b_TauJetsAuxDyn_truthParticleLink_;   //!
   TBranch        *b_TauJetsAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_ptDetectorAxis;   //!
   TBranch        *b_TauJetsAuxDyn_etaDetectorAxis;   //!
   TBranch        *b_TauJetsAuxDyn_mDetectorAxis;   //!
   TBranch        *b_TauJetsAuxDyn_ptFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_etaFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_phiFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_mFinalCalib;   //!
   TBranch        *b_TauJetsAuxDyn_BDTJetScore;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleScore;   //!
   TBranch        *b_TauJetsAuxDyn_EleMatchLikelihoodScore;   //!
   TBranch        *b_TauJetsAuxDyn_BDTJetScoreSigTrans;   //!
   TBranch        *b_TauJetsAuxDyn_isTauFlags;   //!
   TBranch        *b_TauJetsAuxDyn_PanTau_DecayMode;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleScoreSigTrans;   //!
   TBranch        *b_TauJetsAuxDyn_electronLink_;   //!
   TBranch        *b_TauJetsAuxDyn_electronLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_electronLink_m_persIndex;   //!
   TBranch        *b_TauJetsAuxDyn_eta_combined;   //!
   TBranch        *b_TauJetsAuxDyn_m_combined;   //!
   TBranch        *b_TauJetsAuxDyn_phi_combined;   //!
   TBranch        *b_TauJetsAuxDyn_pt_combined;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleLoose_retuned;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleMedium_retuned;   //!
   TBranch        *b_TauJetsAuxDyn_BDTEleTight_retuned;   //!
   TBranch        *b_TauJetsAuxDyn_seedJetWidth;   //!
   TBranch        *b_TauJetsAuxDyn_seedJetJvt;   //!
   TBranch        *b_TauJetsAuxDyn_seedTrackWidthPt1000;   //!
   TBranch        *b_TauJetsAuxDyn_truthJetLink_;   //!
   TBranch        *b_TauJetsAuxDyn_truthJetLink_m_persKey;   //!
   TBranch        *b_TauJetsAuxDyn_truthJetLink_m_persIndex;   //!
   TBranch        *b_TauTracksAuxDyn_pt;   //!
   TBranch        *b_TauTracksAuxDyn_eta;   //!
   TBranch        *b_TauTracksAuxDyn_phi;   //!
   TBranch        *b_TauTracksAuxDyn_trackLinks;   //!
   TBranch        *b_TauTracksAuxDyn_flagSet;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_Density;   //!
   TBranch        *b_TrigMatch_HLT_e300_etcutAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_g200_etcutAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_g300_etcutAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthParticlesAuxDyn_phi;   //!
   TBranch        *b_TruthParticlesAuxDyn_m;   //!
   TBranch        *b_TruthParticlesAuxDyn_px;   //!
   TBranch        *b_TruthParticlesAuxDyn_py;   //!
   TBranch        *b_TruthParticlesAuxDyn_pz;   //!
   TBranch        *b_TruthParticlesAuxDyn_e;   //!
   TBranch        *b_TruthParticlesAuxDyn_pdgId;   //!
   TBranch        *b_TruthParticlesAuxDyn_d0;   //!
   TBranch        *b_TruthParticlesAuxDyn_z0;   //!
   TBranch        *b_TruthParticlesAuxDyn_theta;   //!
   TBranch        *b_TruthParticlesAuxDyn_qOverP;   //!
   TBranch        *b_TruthParticlesAuxDyn_barcode;   //!
   TBranch        *b_TruthParticlesAuxDyn_status;   //!
   TBranch        *b_TruthParticlesAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthParticlesAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodR;   //!
   TBranch        *b_TruthParticlesAuxDyn_prodZ;   //!
   TBranch        *b_TruthParticlesAuxDyn_z0st;   //!
   TBranch        *b_TruthParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthParticlesAuxDyn_dressedPhoton;   //!
   TBranch        *b_TruthVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_TruthVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_TruthVerticesAuxDyn_x;   //!
   TBranch        *b_TruthVerticesAuxDyn_y;   //!
   TBranch        *b_TruthVerticesAuxDyn_z;   //!
   TBranch        *b_TruthVerticesAuxDyn_barcode;   //!
   TBranch        *b_TruthVerticesAuxDyn_id;   //!
   TBranch        *b_TruthVerticesAuxDyn_t;   //!
   TBranch        *b_egammaClustersAuxDyn_clusterSize;   //!
   TBranch        *b_egammaClustersAuxDyn_altE;   //!
   TBranch        *b_egammaClustersAuxDyn_calE;   //!
   TBranch        *b_egammaClustersAuxDyn_calEta;   //!
   TBranch        *b_egammaClustersAuxDyn_calPhi;   //!
   TBranch        *b_egammaClustersAuxDyn_calM;   //!
   TBranch        *b_egammaClustersAuxDyn_e_sampl;   //!
   TBranch        *b_egammaClustersAuxDyn_ETA2CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_ETACALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHI2CALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_PHICALOFRAME;   //!
   TBranch        *b_egammaClustersAuxDyn_constituentClusterLinks;   //!
   TBranch        *b_egammaClustersAuxDyn_eta_sampl;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ilooseAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu24_imediumAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ivarlooseAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu24_ivarmediumAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu26_imediumAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu26_ivarmediumAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu40AuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_mu50AuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_g120_looseAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_g140_looseAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_e140_lhloose_nod0AuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_phi;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHits;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHits;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_d0;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_z0;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_theta;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_qOverP;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_vz;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfTRTHits;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_TrigMatch_HLT_e60_mediumAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_e60_lhmedium_nod0AuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects;   //!
   TBranch        *b_TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects;   //!

   svj_tree_filler(TTree *tree=0);
   virtual ~svj_tree_filler();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef svj_tree_filler_cxx
svj_tree_filler::svj_tree_filler(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc16_13TeV.361031.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ11W.deriv.DAOD_EXOT27.e3569_s3126_r10201_p4049/DAOD_EXOT27.20138871._000190.pool.root.1");
      if (!f || !f->IsOpen()) {
         f = new TFile("mc16_13TeV.361031.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ11W.deriv.DAOD_EXOT27.e3569_s3126_r10201_p4049/DAOD_EXOT27.20138871._000190.pool.root.1");
      }
      f->GetObject("CollectionTree",tree);

   }
   Init(tree);
}

svj_tree_filler::~svj_tree_filler()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t svj_tree_filler::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t svj_tree_filler::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void svj_tree_filler::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   McEventInfo = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mht = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUC = 0;
   TrigConfKeys = 0;
   EventInfoAux_xAOD__AuxInfoBase = 0;
   xTrigDecisionAux_xAOD__AuxInfoBase = 0;
   EventInfo = 0;
   LVL1EnergySumRoI = 0;
   TrigNavigationAux_xAOD__AuxInfoBase = 0;
   xTrigDecision = 0;
   METAssoc_AntiKt4EMPFlowAux_xAOD__AuxContainerBase = 0;
   METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase = 0;
   METAssoc_AntiKt4EMPFlow = 0;
   METAssoc_AntiKt4EMTopo = 0;
   TrigNavigation = 0;
   Kt4EMPFlowEventShapeAux_xAOD__AuxInfoBase = 0;
   Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase = 0;
   Kt4LCTopoOriginEventShapeAux_xAOD__AuxInfoBase = 0;
   NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase = 0;
   NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase = 0;
   TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase = 0;
   TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase = 0;
   Kt4EMPFlowEventShape = 0;
   Kt4EMTopoOriginEventShape = 0;
   Kt4LCTopoOriginEventShape = 0;
   NeutralParticleFlowIsoCentralEventShape = 0;
   NeutralParticleFlowIsoForwardEventShape = 0;
   TopoClusterIsoCentralEventShape = 0;
   TopoClusterIsoForwardEventShape = 0;
   LVL1EnergySumRoIAux_xAOD__AuxInfoBase = 0;
   LVL1EmTauRoIs = 0;
   Electrons = 0;
   HLT_xAOD__ElectronContainer_egamma_Electrons = 0;
   GSFConversionVertices = 0;
   PrimaryVertices = 0;
   MET_Core_AntiKt4EMPFlow = 0;
   MET_Core_AntiKt4EMTopo = 0;
   MET_Reference_AntiKt4EMPFlow = 0;
   MET_Reference_AntiKt4EMTopo = 0;
   MET_Track = 0;
   MET_Truth = 0;
   HLT_xAOD__PhotonContainer_egamma_Photons = 0;
   Photons = 0;
   TauJets = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScan = 0;
   Muons = 0;
   egammaClusters = 0;
   BTagging_AntiKt4EMPFlow_201810Aux_ = 0;
   BTagging_AntiKt4EMPFlow_201903Aux_ = 0;
   BTagging_AntiKt4EMTopo_201810Aux_ = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAux_ = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux_ = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux_ = 0;
   CombinedMuonTrackParticlesAux_ = 0;
   ElectronsAux_ = 0;
   ExtrapolatedMuonTrackParticlesAux_ = 0;
   GSFConversionVerticesAux_ = 0;
   GSFTrackParticlesAux_ = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAux_ = 0;
   HLT_xAOD__MuonContainer_MuonEFInfoAux_ = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux_ = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAux_ = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux_ = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux_ = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux_ = 0;
   InDetForwardTrackParticlesAux_ = 0;
   InDetTrackParticlesAux_ = 0;
   LVL1EmTauRoIsAux_ = 0;
   LVL1MuonRoIsAux_ = 0;
   MET_Core_AntiKt4EMPFlowAux_ = 0;
   MET_Core_AntiKt4EMTopoAux_ = 0;
   MET_Reference_AntiKt4EMPFlowAux_ = 0;
   MET_Reference_AntiKt4EMTopoAux_ = 0;
   MET_TrackAux_ = 0;
   MET_TruthAux_ = 0;
   MuonSpectrometerTrackParticlesAux_ = 0;
   MuonsAux_ = 0;
   PhotonsAux_ = 0;
   PrimaryVerticesAux_ = 0;
   TauJetsAux_ = 0;
   TauTracksAux_ = 0;
   TrigMatch_HLT_e140_lhloose_nod0Aux_ = 0;
   TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux_ = 0;
   TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux_ = 0;
   TrigMatch_HLT_e300_etcutAux_ = 0;
   TrigMatch_HLT_e60_lhmedium_nod0Aux_ = 0;
   TrigMatch_HLT_e60_mediumAux_ = 0;
   TrigMatch_HLT_g120_looseAux_ = 0;
   TrigMatch_HLT_g140_looseAux_ = 0;
   TrigMatch_HLT_g200_etcutAux_ = 0;
   TrigMatch_HLT_g300_etcutAux_ = 0;
   TrigMatch_HLT_mu24_ilooseAux_ = 0;
   TrigMatch_HLT_mu24_imediumAux_ = 0;
   TrigMatch_HLT_mu24_ivarlooseAux_ = 0;
   TrigMatch_HLT_mu24_ivarmediumAux_ = 0;
   TrigMatch_HLT_mu26_imediumAux_ = 0;
   TrigMatch_HLT_mu26_ivarmediumAux_ = 0;
   TrigMatch_HLT_mu40Aux_ = 0;
   TrigMatch_HLT_mu50Aux_ = 0;
   TruthParticlesAux_ = 0;
   TruthVerticesAux_ = 0;
   egammaClustersAux_ = 0;
   TruthParticles = 0;
   TruthVertices = 0;
   AntiKt10LCTopoJets = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets = 0;
   AntiKt10TrackCaloClusterJets = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20Jets = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20Jets = 0;
   AntiKt2LCTopoJets = 0;
   AntiKt4EMPFlowJets = 0;
   AntiKt4EMPFlowJets_BTagging201810 = 0;
   AntiKt4EMPFlowJets_BTagging201903 = 0;
   AntiKt4EMTopoJets = 0;
   AntiKt4EMTopoJets_BTagging201810 = 0;
   AntiKt4LCTopoJets = 0;
   AntiKt4TruthJets = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJets = 0;
   AntiKtVR30Rmax4Rmin02TrackJets = 0;
   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903 = 0;
   BTagging_AntiKt4EMPFlow_201810 = 0;
   BTagging_AntiKt4EMPFlow_201903 = 0;
   BTagging_AntiKt4EMTopo_201810 = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTag = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903 = 0;
   CombinedMuonTrackParticles = 0;
   ExtrapolatedMuonTrackParticles = 0;
   GSFTrackParticles = 0;
   InDetForwardTrackParticles = 0;
   InDetTrackParticles = 0;
   MuonSpectrometerTrackParticles = 0;
   AntiKt10LCTopoJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase = 0;
   AntiKt10TrackCaloClusterJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase = 0;
   AntiKt2LCTopoJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt4EMPFlowJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase = 0;
   AntiKt4TruthJetsAux_xAOD__AuxContainerBase = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_xAOD__AuxContainerBase = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAux_xAOD__AuxContainerBase = 0;
   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_xAOD__AuxContainerBase = 0;
   TauTracks = 0;
   LVL1MuonRoIs = 0;
   TrigMatch_HLT_e140_lhloose_nod0 = 0;
   TrigMatch_HLT_e24_lhtight_nod0_ivarloose = 0;
   TrigMatch_HLT_e26_lhtight_nod0_ivarloose = 0;
   TrigMatch_HLT_e300_etcut = 0;
   TrigMatch_HLT_e60_lhmedium_nod0 = 0;
   TrigMatch_HLT_e60_medium = 0;
   TrigMatch_HLT_g120_loose = 0;
   TrigMatch_HLT_g140_loose = 0;
   TrigMatch_HLT_g200_etcut = 0;
   TrigMatch_HLT_g300_etcut = 0;
   TrigMatch_HLT_mu24_iloose = 0;
   TrigMatch_HLT_mu24_imedium = 0;
   TrigMatch_HLT_mu24_ivarloose = 0;
   TrigMatch_HLT_mu24_ivarmedium = 0;
   TrigMatch_HLT_mu26_imedium = 0;
   TrigMatch_HLT_mu26_ivarmedium = 0;
   TrigMatch_HLT_mu40 = 0;
   TrigMatch_HLT_mu50 = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt2TrackJet = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt10LCTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23 = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_HbbScore = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreQCD = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreHiggs = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreTop = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Width = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta = 0;
   AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ConstituentScale = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_InputType = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_AlgorithmType = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_SizeParameter = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJet = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_DetectorEta = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumMass = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_Width = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_DetectorY = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_Charge = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_DetectorPhi = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosons = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartons = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinal = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrack = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruth = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosons = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosons = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_JetGhostArea = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt1000 = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt500 = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_WidthPhi = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJet = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetCount = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetPt = 0;
   AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationFraction = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split12 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split23 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Qw = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12 = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Width = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta = 0;
   AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ConstituentScale = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_InputType = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_AlgorithmType = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_SizeParameter = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_EnergyPerSampling = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split12 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split23 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Qw = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Width = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Charge = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosons = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartons = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinal = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosons = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosons = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetGhostArea = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_WidthPhi = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_TransformType = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PtFrac = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_RClus = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split34 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut23 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut34 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF4 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_ungroomed = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2_2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_4_1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2_dichroic = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N3 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2_dichroic = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L2 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L3 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L4 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L5 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMin = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMaj = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram1 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram3 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram4 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Sphericity = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Mu12 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip12 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip13 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip23 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_DipExcl12 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullMag = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullPhi = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C00 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C01 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C10 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C11 = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_zg = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_rg = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2 = 0;
   AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt2LCTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt2LCTopoJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt2LCTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt2LCTopoJetsAuxDyn_DetectorEta = 0;
   AntiKt2LCTopoJetsAuxDyn_Width = 0;
   AntiKt2LCTopoJetsAuxDyn_DetectorY = 0;
   AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt2LCTopoJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt2LCTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt2LCTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt2LCTopoJetsAuxDyn_GhostTrackCount = 0;
   AntiKt2LCTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt2LCTopoJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt2LCTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt2LCTopoJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt2LCTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt2LCTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt2LCTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt2LCTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt2LCTopoJetsAuxDyn_JVFCorr = 0;
   AntiKt2LCTopoJetsAuxDyn_Jvt = 0;
   AntiKt2LCTopoJetsAuxDyn_JvtRpt = 0;
   AntiKt2LCTopoJetsAuxDyn_Timing = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1 = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt = 0;
   AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_DetectorEta = 0;
   AntiKt4EMPFlowJetsAuxDyn_Width = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMPFlowJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4EMPFlowJetsAuxDyn_JVFCorr = 0;
   AntiKt4EMPFlowJetsAuxDyn_Jvt = 0;
   AntiKt4EMPFlowJetsAuxDyn_JvtRpt = 0;
   AntiKt4EMPFlowJetsAuxDyn_Timing = 0;
   AntiKt4EMPFlowJetsAuxDyn_EMFrac = 0;
   AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000 = 0;
   AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500 = 0;
   AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad = 0;
   AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_DetectorEta = 0;
   AntiKt4EMTopoJetsAuxDyn_Width = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4EMTopoJetsAuxDyn_JVFCorr = 0;
   AntiKt4EMTopoJetsAuxDyn_Jvt = 0;
   AntiKt4EMTopoJetsAuxDyn_JvtRpt = 0;
   AntiKt4EMTopoJetsAuxDyn_Timing = 0;
   AntiKt4EMTopoJetsAuxDyn_EMFrac = 0;
   AntiKt4TruthJetsAuxDyn_ConstituentScale = 0;
   AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4TruthJetsAuxDyn_InputType = 0;
   AntiKt4TruthJetsAuxDyn_AlgorithmType = 0;
   AntiKt4TruthJetsAuxDyn_SizeParameter = 0;
   AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_Width = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKt4TruthJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostHBosons = 0;
   AntiKt4TruthJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostPartons = 0;
   AntiKt4TruthJetsAuxDyn_GhostPartonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostPartonsPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostTausFinal = 0;
   AntiKt4TruthJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostWBosons = 0;
   AntiKt4TruthJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKt4TruthJetsAuxDyn_GhostZBosons = 0;
   AntiKt4TruthJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKt4TruthJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_JetGhostArea = 0;
   AntiKt4TruthJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4TruthJetsAuxDyn_WidthPhi = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConstituentScale = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_InputType = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_AlgorithmType = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_SizeParameter = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_has_ATLASRECTS_5027_bug = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclBHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclCHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclTausFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitial = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitial = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosons = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartons = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrack = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruth = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosons = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosons = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsCount = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsPt = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetGhostArea = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedTracks = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedMuons = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMinRadius = 0;
   AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMassScale = 0;
   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclBHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclCHadronsFinal = 0;
   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclExtendedTruthLabelID = 0;
   AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclTruthLabelID = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pu = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pc = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pb = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pu = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pc = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pb = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pu = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pc = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pb = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pb = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pc = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pu = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2r_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2rmu_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pu = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pc = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pb = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pu = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pc = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pb = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pu = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pc = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pb = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2r_discriminant = 0;
   BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2rmu_discriminant = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pu = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pc = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pb = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pu = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pc = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pb = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pu = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pc = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pb = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pb = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pc = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pu = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_MV2r_discriminant = 0;
   BTagging_AntiKt4EMTopo_201810AuxDyn_MV2rmu_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2r_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2rmu_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2r_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2rmu_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pu = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pc = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pb = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c100_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c10_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2cl100_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2r_discriminant = 0;
   BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2rmu_discriminant = 0;
   CombinedMuonTrackParticlesAuxDyn_phi = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   CombinedMuonTrackParticlesAuxDyn_chiSquared = 0;
   CombinedMuonTrackParticlesAuxDyn_numberDoF = 0;
   CombinedMuonTrackParticlesAuxDyn_d0 = 0;
   CombinedMuonTrackParticlesAuxDyn_z0 = 0;
   CombinedMuonTrackParticlesAuxDyn_theta = 0;
   CombinedMuonTrackParticlesAuxDyn_qOverP = 0;
   CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   CombinedMuonTrackParticlesAuxDyn_vz = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectChId = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle = 0;
   CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans = 0;
   ElectronsAuxDyn_trackParticleLinks = 0;
   ElectronsAuxDyn_pt = 0;
   ElectronsAuxDyn_eta = 0;
   ElectronsAuxDyn_phi = 0;
   ElectronsAuxDyn_m = 0;
   ElectronsAuxDyn_charge = 0;
   ElectronsAuxDyn_DFCommonAddAmbiguity = 0;
   ElectronsAuxDyn_ptvarcone30_TightTTVA_pt1000 = 0;
   ElectronsAuxDyn_ptvarcone20_TightTTVA_pt1000 = 0;
   ElectronsAuxDyn_ptvarcone30_TightTTVA_pt500 = 0;
   ElectronsAuxDyn_ptvarcone40_TightTTVALooseCone_pt1000 = 0;
   ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt1000 = 0;
   ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt1000 = 0;
   ElectronsAuxDyn_ptvarcone20_TightTTVALooseCone_pt1000 = 0;
   ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt500 = 0;
   ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt500 = 0;
   ElectronsAuxDyn_topoetcone20 = 0;
   ElectronsAuxDyn_ptvarcone20 = 0;
   ElectronsAuxDyn_caloClusterLinks = 0;
   ElectronsAuxDyn_author = 0;
   ElectronsAuxDyn_OQ = 0;
   ElectronsAuxDyn_f1 = 0;
   ElectronsAuxDyn_ambiguityType = 0;
   ElectronsAuxDyn_core57cellsEnergyCorrection = 0;
   ElectronsAuxDyn_neflowisol20 = 0;
   ElectronsAuxDyn_topoetcone20ptCorrection = 0;
   ElectronsAuxDyn_topoetcone40 = 0;
   ElectronsAuxDyn_topoetconecoreConeEnergyCorrection = 0;
   ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection = 0;
   ElectronsAuxDyn_truthOrigin = 0;
   ElectronsAuxDyn_truthType = 0;
   ElectronsAuxDyn_DFCommonElectronsLHVeryLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLoose = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLooseBL = 0;
   ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHMedium = 0;
   ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsLHTight = 0;
   ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue = 0;
   ElectronsAuxDyn_DFCommonElectronsECIDS = 0;
   ElectronsAuxDyn_DFCommonElectronsECIDSResult = 0;
   ElectronsAuxDyn_DFCommonCrackVetoCleaning = 0;
   ElectronsAuxDyn_truthPdgId = 0;
   ElectronsAuxDyn_firstEgMotherTruthType = 0;
   ElectronsAuxDyn_firstEgMotherTruthOrigin = 0;
   ElectronsAuxDyn_firstEgMotherPdgId = 0;
   EventInfoAuxDyn_streamTagRobs = 0;
   EventInfoAuxDyn_streamTagDets = 0;
   EventInfoAuxDyn_subEventTime = 0;
   EventInfoAuxDyn_subEventIndex = 0;
   EventInfoAuxDyn_subEventType = 0;
   EventInfoAuxDyn_mcEventWeights = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_phi = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_d0 = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_z0 = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_theta = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_qOverP = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_vz = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans = 0;
   GSFConversionVerticesAuxDyn_trackParticleLinks = 0;
   GSFConversionVerticesAuxDyn_neutralParticleLinks = 0;
   GSFConversionVerticesAuxDyn_px = 0;
   GSFConversionVerticesAuxDyn_py = 0;
   GSFConversionVerticesAuxDyn_pz = 0;
   GSFConversionVerticesAuxDyn_x = 0;
   GSFConversionVerticesAuxDyn_y = 0;
   GSFConversionVerticesAuxDyn_z = 0;
   GSFConversionVerticesAuxDyn_minRfirstHit = 0;
   GSFConversionVerticesAuxDyn_pt1 = 0;
   GSFConversionVerticesAuxDyn_pt2 = 0;
   GSFTrackParticlesAuxDyn_phi = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelHits = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTHits = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   GSFTrackParticlesAuxDyn_chiSquared = 0;
   GSFTrackParticlesAuxDyn_d0 = 0;
   GSFTrackParticlesAuxDyn_z0 = 0;
   GSFTrackParticlesAuxDyn_theta = 0;
   GSFTrackParticlesAuxDyn_qOverP = 0;
   GSFTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   GSFTrackParticlesAuxDyn_vz = 0;
   GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers = 0;
   GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit = 0;
   GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers = 0;
   GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit = 0;
   GSFTrackParticlesAuxDyn_numberOfPixelOutliers = 0;
   GSFTrackParticlesAuxDyn_numberOfSCTOutliers = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta = 0;
   HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi = 0;
   HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_pt = 0;
   HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_eta = 0;
   HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_phi = 0;
   HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_author = 0;
   HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_muonType = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_pt = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_eta = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_phi = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_author = 0;
   HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_muonType = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta = 0;
   HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ex = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ey = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ez = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumEt = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumE = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ex = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ey = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ez = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumEt = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumE = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ex = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ey = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ez = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumEt = 0;
   HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumE = 0;
   InDetTrackParticlesAuxDyn_phi = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelHits = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelSharedHits = 0;
   InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTHits = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTSharedHits = 0;
   InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits = 0;
   InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits = 0;
   InDetTrackParticlesAuxDyn_chiSquared = 0;
   InDetTrackParticlesAuxDyn_numberDoF = 0;
   InDetTrackParticlesAuxDyn_d0 = 0;
   InDetTrackParticlesAuxDyn_z0 = 0;
   InDetTrackParticlesAuxDyn_theta = 0;
   InDetTrackParticlesAuxDyn_qOverP = 0;
   InDetTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   InDetTrackParticlesAuxDyn_vz = 0;
   InDetTrackParticlesAuxDyn_numberOfTRTHits = 0;
   InDetTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   InDetTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPhiLayers = 0;
   InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers = 0;
   InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit = 0;
   InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit = 0;
   InDetTrackParticlesAuxDyn_truthMatchProbability = 0;
   LVL1EmTauRoIsAuxDyn_thrNames = 0;
   LVL1EmTauRoIsAuxDyn_thrValues = 0;
   LVL1EmTauRoIsAuxDyn_eta = 0;
   LVL1EmTauRoIsAuxDyn_phi = 0;
   LVL1EmTauRoIsAuxDyn_roiWord = 0;
   LVL1EmTauRoIsAuxDyn_etScale = 0;
   LVL1EmTauRoIsAuxDyn_thrPattern = 0;
   LVL1EmTauRoIsAuxDyn_core = 0;
   LVL1EmTauRoIsAuxDyn_emClus = 0;
   LVL1EmTauRoIsAuxDyn_tauClus = 0;
   LVL1EmTauRoIsAuxDyn_emIsol = 0;
   LVL1EmTauRoIsAuxDyn_hadIsol = 0;
   LVL1EmTauRoIsAuxDyn_hadCore = 0;
   LVL1MuonRoIsAuxDyn_eta = 0;
   LVL1MuonRoIsAuxDyn_phi = 0;
   LVL1MuonRoIsAuxDyn_roiWord = 0;
   LVL1MuonRoIsAuxDyn_thrName = 0;
   LVL1MuonRoIsAuxDyn_thrValue = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_name = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_mpx = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_mpy = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_sumet = 0;
   MET_Core_AntiKt4EMPFlowAuxDyn_source = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_name = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_mpx = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_mpy = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_sumet = 0;
   MET_Core_AntiKt4EMTopoAuxDyn_source = 0;
   MET_Reference_AntiKt4EMPFlowAuxDyn_name = 0;
   MET_Reference_AntiKt4EMPFlowAuxDyn_mpx = 0;
   MET_Reference_AntiKt4EMPFlowAuxDyn_mpy = 0;
   MET_Reference_AntiKt4EMPFlowAuxDyn_sumet = 0;
   MET_Reference_AntiKt4EMPFlowAuxDyn_source = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_name = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_mpx = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_mpy = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_sumet = 0;
   MET_Reference_AntiKt4EMTopoAuxDyn_source = 0;
   MET_TrackAuxDyn_name = 0;
   MET_TrackAuxDyn_mpx = 0;
   MET_TrackAuxDyn_mpy = 0;
   MET_TruthAuxDyn_name = 0;
   MET_TruthAuxDyn_mpx = 0;
   MET_TruthAuxDyn_mpy = 0;
   MET_TruthAuxDyn_sumet = 0;
   MET_TruthAuxDyn_source = 0;
   MuonSpectrometerTrackParticlesAuxDyn_phi = 0;
   MuonSpectrometerTrackParticlesAuxDyn_d0 = 0;
   MuonSpectrometerTrackParticlesAuxDyn_z0 = 0;
   MuonSpectrometerTrackParticlesAuxDyn_theta = 0;
   MuonSpectrometerTrackParticlesAuxDyn_qOverP = 0;
   MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   MuonSpectrometerTrackParticlesAuxDyn_vz = 0;
   MuonsAuxDyn_pt = 0;
   MuonsAuxDyn_eta = 0;
   MuonsAuxDyn_phi = 0;
   MuonsAuxDyn_muonSegmentLinks = 0;
   MuonsAuxDyn_charge = 0;
   MuonsAuxDyn_ptvarcone30_TightTTVA_pt1000 = 0;
   MuonsAuxDyn_ptcone20_TightTTVA_pt1000 = 0;
   MuonsAuxDyn_ptvarcone30_TightTTVA_pt500 = 0;
   MuonsAuxDyn_ptcone20_TightTTVA_pt500 = 0;
   MuonsAuxDyn_topoetcone20 = 0;
   MuonsAuxDyn_ptvarcone20 = 0;
   MuonsAuxDyn_ptvarcone30 = 0;
   MuonsAuxDyn_numberOfPrecisionLayers = 0;
   MuonsAuxDyn_numberOfPrecisionHoleLayers = 0;
   MuonsAuxDyn_author = 0;
   MuonsAuxDyn_neflowisol20 = 0;
   MuonsAuxDyn_topoetcone40 = 0;
   MuonsAuxDyn_truthOrigin = 0;
   MuonsAuxDyn_truthType = 0;
   MuonsAuxDyn_muonType = 0;
   MuonsAuxDyn_ptcone20 = 0;
   MuonsAuxDyn_ptcone30 = 0;
   MuonsAuxDyn_ptcone40 = 0;
   MuonsAuxDyn_ptvarcone40 = 0;
   MuonsAuxDyn_topoetcone30 = 0;
   MuonsAuxDyn_allAuthors = 0;
   MuonsAuxDyn_quality = 0;
   MuonsAuxDyn_energyLossType = 0;
   MuonsAuxDyn_innerSmallHits = 0;
   MuonsAuxDyn_innerLargeHits = 0;
   MuonsAuxDyn_middleSmallHits = 0;
   MuonsAuxDyn_middleLargeHits = 0;
   MuonsAuxDyn_outerSmallHits = 0;
   MuonsAuxDyn_outerLargeHits = 0;
   MuonsAuxDyn_extendedSmallHits = 0;
   MuonsAuxDyn_extendedLargeHits = 0;
   MuonsAuxDyn_innerSmallHoles = 0;
   MuonsAuxDyn_innerLargeHoles = 0;
   MuonsAuxDyn_middleSmallHoles = 0;
   MuonsAuxDyn_middleLargeHoles = 0;
   MuonsAuxDyn_outerSmallHoles = 0;
   MuonsAuxDyn_outerLargeHoles = 0;
   MuonsAuxDyn_extendedSmallHoles = 0;
   MuonsAuxDyn_extendedLargeHoles = 0;
   MuonsAuxDyn_cscEtaHits = 0;
   MuonsAuxDyn_cscUnspoiledEtaHits = 0;
   MuonsAuxDyn_spectrometerFieldIntegral = 0;
   MuonsAuxDyn_scatteringCurvatureSignificance = 0;
   MuonsAuxDyn_scatteringNeighbourSignificance = 0;
   MuonsAuxDyn_momentumBalanceSignificance = 0;
   MuonsAuxDyn_segmentDeltaEta = 0;
   MuonsAuxDyn_CaloLRLikelihood = 0;
   MuonsAuxDyn_EnergyLoss = 0;
   MuonsAuxDyn_CaloMuonIDTag = 0;
   MuonsAuxDyn_InnerDetectorPt = 0;
   MuonsAuxDyn_MuonSpectrometerPt = 0;
   MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_extendedClosePrecisionHits = 0;
   MuonsAuxDyn_extendedOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_innerClosePrecisionHits = 0;
   MuonsAuxDyn_innerOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_isEndcapGoodLayers = 0;
   MuonsAuxDyn_isSmallGoodSectors = 0;
   MuonsAuxDyn_middleClosePrecisionHits = 0;
   MuonsAuxDyn_middleOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_numberOfGoodPrecisionLayers = 0;
   MuonsAuxDyn_outerClosePrecisionHits = 0;
   MuonsAuxDyn_outerOutBoundsPrecisionHits = 0;
   MuonsAuxDyn_DFCommonGoodMuon = 0;
   PhotonsAuxDyn_pt = 0;
   PhotonsAuxDyn_eta = 0;
   PhotonsAuxDyn_phi = 0;
   PhotonsAuxDyn_m = 0;
   PhotonsAuxDyn_ptcone20_TightTTVA_pt1000 = 0;
   PhotonsAuxDyn_topoetcone20 = 0;
   PhotonsAuxDyn_caloClusterLinks = 0;
   PhotonsAuxDyn_author = 0;
   PhotonsAuxDyn_OQ = 0;
   PhotonsAuxDyn_f1 = 0;
   PhotonsAuxDyn_core57cellsEnergyCorrection = 0;
   PhotonsAuxDyn_neflowisol20 = 0;
   PhotonsAuxDyn_topoetcone20ptCorrection = 0;
   PhotonsAuxDyn_topoetcone40 = 0;
   PhotonsAuxDyn_topoetconecoreConeEnergyCorrection = 0;
   PhotonsAuxDyn_topoetconecoreConeSCEnergyCorrection = 0;
   PhotonsAuxDyn_truthOrigin = 0;
   PhotonsAuxDyn_truthType = 0;
   PhotonsAuxDyn_DFCommonCrackVetoCleaning = 0;
   PhotonsAuxDyn_ptcone20 = 0;
   PhotonsAuxDyn_Tight = 0;
   PhotonsAuxDyn_topoetcone40ptCorrection = 0;
   PhotonsAuxDyn_vertexLinks = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMLoose = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTight = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtIncl = 0;
   PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtInclIsEMValue = 0;
   PhotonsAuxDyn_DFCommonPhotonsCleaning = 0;
   PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime = 0;
   PrimaryVerticesAuxDyn_trackParticleLinks = 0;
   PrimaryVerticesAuxDyn_neutralParticleLinks = 0;
   PrimaryVerticesAuxDyn_x = 0;
   PrimaryVerticesAuxDyn_y = 0;
   PrimaryVerticesAuxDyn_z = 0;
   PrimaryVerticesAuxDyn_vertexType = 0;
   TauJetsAuxDyn_pt = 0;
   TauJetsAuxDyn_eta = 0;
   TauJetsAuxDyn_phi = 0;
   TauJetsAuxDyn_m = 0;
   TauJetsAuxDyn_hadronicPFOLinks = 0;
   TauJetsAuxDyn_shotPFOLinks = 0;
   TauJetsAuxDyn_chargedPFOLinks = 0;
   TauJetsAuxDyn_neutralPFOLinks = 0;
   TauJetsAuxDyn_pi0PFOLinks = 0;
   TauJetsAuxDyn_protoChargedPFOLinks = 0;
   TauJetsAuxDyn_protoNeutralPFOLinks = 0;
   TauJetsAuxDyn_protoPi0PFOLinks = 0;
   TauJetsAuxDyn_tauTrackLinks = 0;
   TauJetsAuxDyn_charge = 0;
   TauJetsAuxDyn_RNNJetScore = 0;
   TauJetsAuxDyn_RNNJetScoreSigTrans = 0;
   TauJetsAuxDyn_BDTEleScore_retuned = 0;
   TauJetsAuxDyn_BDTEleScoreSigTrans_retuned = 0;
   TauJetsAuxDyn_ptDetectorAxis = 0;
   TauJetsAuxDyn_etaDetectorAxis = 0;
   TauJetsAuxDyn_mDetectorAxis = 0;
   TauJetsAuxDyn_ptFinalCalib = 0;
   TauJetsAuxDyn_etaFinalCalib = 0;
   TauJetsAuxDyn_phiFinalCalib = 0;
   TauJetsAuxDyn_mFinalCalib = 0;
   TauJetsAuxDyn_BDTJetScore = 0;
   TauJetsAuxDyn_BDTEleScore = 0;
   TauJetsAuxDyn_EleMatchLikelihoodScore = 0;
   TauJetsAuxDyn_BDTJetScoreSigTrans = 0;
   TauJetsAuxDyn_isTauFlags = 0;
   TauJetsAuxDyn_PanTau_DecayMode = 0;
   TauJetsAuxDyn_BDTEleScoreSigTrans = 0;
   TauJetsAuxDyn_eta_combined = 0;
   TauJetsAuxDyn_m_combined = 0;
   TauJetsAuxDyn_phi_combined = 0;
   TauJetsAuxDyn_pt_combined = 0;
   TauJetsAuxDyn_BDTEleLoose_retuned = 0;
   TauJetsAuxDyn_BDTEleMedium_retuned = 0;
   TauJetsAuxDyn_BDTEleTight_retuned = 0;
   TauJetsAuxDyn_seedJetWidth = 0;
   TauJetsAuxDyn_seedJetJvt = 0;
   TauJetsAuxDyn_seedTrackWidthPt1000 = 0;
   TauTracksAuxDyn_pt = 0;
   TauTracksAuxDyn_eta = 0;
   TauTracksAuxDyn_phi = 0;
   TauTracksAuxDyn_trackLinks = 0;
   TauTracksAuxDyn_flagSet = 0;
   TrigMatch_HLT_e300_etcutAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_g200_etcutAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_g300_etcutAuxDyn_TrigMatchedObjects = 0;
   TruthParticlesAuxDyn_phi = 0;
   TruthParticlesAuxDyn_m = 0;
   TruthParticlesAuxDyn_px = 0;
   TruthParticlesAuxDyn_py = 0;
   TruthParticlesAuxDyn_pz = 0;
   TruthParticlesAuxDyn_e = 0;
   TruthParticlesAuxDyn_pdgId = 0;
   TruthParticlesAuxDyn_d0 = 0;
   TruthParticlesAuxDyn_z0 = 0;
   TruthParticlesAuxDyn_theta = 0;
   TruthParticlesAuxDyn_qOverP = 0;
   TruthParticlesAuxDyn_barcode = 0;
   TruthParticlesAuxDyn_status = 0;
   TruthParticlesAuxDyn_polarizationPhi = 0;
   TruthParticlesAuxDyn_polarizationTheta = 0;
   TruthParticlesAuxDyn_prodR = 0;
   TruthParticlesAuxDyn_prodZ = 0;
   TruthParticlesAuxDyn_z0st = 0;
   TruthParticlesAuxDyn_classifierParticleOrigin = 0;
   TruthParticlesAuxDyn_classifierParticleType = 0;
   TruthParticlesAuxDyn_classifierParticleOutCome = 0;
   TruthParticlesAuxDyn_dressedPhoton = 0;
   TruthVerticesAuxDyn_incomingParticleLinks = 0;
   TruthVerticesAuxDyn_outgoingParticleLinks = 0;
   TruthVerticesAuxDyn_x = 0;
   TruthVerticesAuxDyn_y = 0;
   TruthVerticesAuxDyn_z = 0;
   TruthVerticesAuxDyn_barcode = 0;
   TruthVerticesAuxDyn_id = 0;
   TruthVerticesAuxDyn_t = 0;
   egammaClustersAuxDyn_clusterSize = 0;
   egammaClustersAuxDyn_altE = 0;
   egammaClustersAuxDyn_calE = 0;
   egammaClustersAuxDyn_calEta = 0;
   egammaClustersAuxDyn_calPhi = 0;
   egammaClustersAuxDyn_calM = 0;
   egammaClustersAuxDyn_e_sampl = 0;
   egammaClustersAuxDyn_ETA2CALOFRAME = 0;
   egammaClustersAuxDyn_ETACALOFRAME = 0;
   egammaClustersAuxDyn_PHI2CALOFRAME = 0;
   egammaClustersAuxDyn_PHICALOFRAME = 0;
   egammaClustersAuxDyn_constituentClusterLinks = 0;
   egammaClustersAuxDyn_eta_sampl = 0;
   TrigMatch_HLT_mu24_ilooseAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu24_imediumAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu24_ivarlooseAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu24_ivarmediumAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu26_imediumAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu26_ivarmediumAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu40AuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_mu50AuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_g120_looseAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_g140_looseAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_e140_lhloose_nod0AuxDyn_TrigMatchedObjects = 0;
   InDetForwardTrackParticlesAuxDyn_phi = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPixelHits = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfSCTHits = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors = 0;
   InDetForwardTrackParticlesAuxDyn_d0 = 0;
   InDetForwardTrackParticlesAuxDyn_z0 = 0;
   InDetForwardTrackParticlesAuxDyn_theta = 0;
   InDetForwardTrackParticlesAuxDyn_qOverP = 0;
   InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix = 0;
   InDetForwardTrackParticlesAuxDyn_vz = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfTRTHits = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers = 0;
   InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers = 0;
   TrigMatch_HLT_e60_mediumAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_e60_lhmedium_nod0AuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects = 0;
   TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("McEventInfo", &McEventInfo, &b_McEventInfo);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mht", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mht, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mht);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUC", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUC, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUC);
   fChain->SetBranchAddress("TrigConfKeys", &TrigConfKeys, &b_TrigConfKeys);
   fChain->SetBranchAddress("EventInfoAux.xAOD::AuxInfoBase", &EventInfoAux_xAOD__AuxInfoBase, &b_EventInfoAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("EventInfoAux.runNumber", &EventInfoAux_runNumber, &b_EventInfoAux_runNumber);
   fChain->SetBranchAddress("EventInfoAux.eventNumber", &EventInfoAux_eventNumber, &b_EventInfoAux_eventNumber);
   fChain->SetBranchAddress("EventInfoAux.lumiBlock", &EventInfoAux_lumiBlock, &b_EventInfoAux_lumiBlock);
   fChain->SetBranchAddress("EventInfoAux.timeStamp", &EventInfoAux_timeStamp, &b_EventInfoAux_timeStamp);
   fChain->SetBranchAddress("EventInfoAux.timeStampNSOffset", &EventInfoAux_timeStampNSOffset, &b_EventInfoAux_timeStampNSOffset);
   fChain->SetBranchAddress("EventInfoAux.bcid", &EventInfoAux_bcid, &b_EventInfoAux_bcid);
   fChain->SetBranchAddress("EventInfoAux.detectorMask0", &EventInfoAux_detectorMask0, &b_EventInfoAux_detectorMask0);
   fChain->SetBranchAddress("EventInfoAux.detectorMask1", &EventInfoAux_detectorMask1, &b_EventInfoAux_detectorMask1);
   fChain->SetBranchAddress("EventInfoAux.detectorMask2", &EventInfoAux_detectorMask2, &b_EventInfoAux_detectorMask2);
   fChain->SetBranchAddress("EventInfoAux.detectorMask3", &EventInfoAux_detectorMask3, &b_EventInfoAux_detectorMask3);
   fChain->SetBranchAddress("EventInfoAux.detDescrTags", &EventInfoAux_detDescrTags, &b_EventInfoAux_detDescrTags);
   fChain->SetBranchAddress("EventInfoAux.eventTypeBitmask", &EventInfoAux_eventTypeBitmask, &b_EventInfoAux_eventTypeBitmask);
   fChain->SetBranchAddress("EventInfoAux.statusElement", &EventInfoAux_statusElement, &b_EventInfoAux_statusElement);
   fChain->SetBranchAddress("EventInfoAux.extendedLevel1ID", &EventInfoAux_extendedLevel1ID, &b_EventInfoAux_extendedLevel1ID);
   fChain->SetBranchAddress("EventInfoAux.level1TriggerType", &EventInfoAux_level1TriggerType, &b_EventInfoAux_level1TriggerType);
   fChain->SetBranchAddress("EventInfoAux.streamTagNames", &EventInfoAux_streamTagNames, &b_EventInfoAux_streamTagNames);
   fChain->SetBranchAddress("EventInfoAux.streamTagTypes", &EventInfoAux_streamTagTypes, &b_EventInfoAux_streamTagTypes);
   fChain->SetBranchAddress("EventInfoAux.streamTagObeysLumiblock", &EventInfoAux_streamTagObeysLumiblock, &b_EventInfoAux_streamTagObeysLumiblock);
   fChain->SetBranchAddress("EventInfoAux.actualInteractionsPerCrossing", &EventInfoAux_actualInteractionsPerCrossing, &b_EventInfoAux_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.averageInteractionsPerCrossing", &EventInfoAux_averageInteractionsPerCrossing, &b_EventInfoAux_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.pixelFlags", &EventInfoAux_pixelFlags, &b_EventInfoAux_pixelFlags);
   fChain->SetBranchAddress("EventInfoAux.sctFlags", &EventInfoAux_sctFlags, &b_EventInfoAux_sctFlags);
   fChain->SetBranchAddress("EventInfoAux.trtFlags", &EventInfoAux_trtFlags, &b_EventInfoAux_trtFlags);
   fChain->SetBranchAddress("EventInfoAux.larFlags", &EventInfoAux_larFlags, &b_EventInfoAux_larFlags);
   fChain->SetBranchAddress("EventInfoAux.tileFlags", &EventInfoAux_tileFlags, &b_EventInfoAux_tileFlags);
   fChain->SetBranchAddress("EventInfoAux.muonFlags", &EventInfoAux_muonFlags, &b_EventInfoAux_muonFlags);
   fChain->SetBranchAddress("EventInfoAux.forwardDetFlags", &EventInfoAux_forwardDetFlags, &b_EventInfoAux_forwardDetFlags);
   fChain->SetBranchAddress("EventInfoAux.coreFlags", &EventInfoAux_coreFlags, &b_EventInfoAux_coreFlags);
   fChain->SetBranchAddress("EventInfoAux.backgroundFlags", &EventInfoAux_backgroundFlags, &b_EventInfoAux_backgroundFlags);
   fChain->SetBranchAddress("EventInfoAux.lumiFlags", &EventInfoAux_lumiFlags, &b_EventInfoAux_lumiFlags);
   fChain->SetBranchAddress("EventInfoAux.beamPosX", &EventInfoAux_beamPosX, &b_EventInfoAux_beamPosX);
   fChain->SetBranchAddress("EventInfoAux.beamPosY", &EventInfoAux_beamPosY, &b_EventInfoAux_beamPosY);
   fChain->SetBranchAddress("EventInfoAux.beamPosZ", &EventInfoAux_beamPosZ, &b_EventInfoAux_beamPosZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaX", &EventInfoAux_beamPosSigmaX, &b_EventInfoAux_beamPosSigmaX);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaY", &EventInfoAux_beamPosSigmaY, &b_EventInfoAux_beamPosSigmaY);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaZ", &EventInfoAux_beamPosSigmaZ, &b_EventInfoAux_beamPosSigmaZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaXY", &EventInfoAux_beamPosSigmaXY, &b_EventInfoAux_beamPosSigmaXY);
   fChain->SetBranchAddress("EventInfoAux.beamTiltXZ", &EventInfoAux_beamTiltXZ, &b_EventInfoAux_beamTiltXZ);
   fChain->SetBranchAddress("EventInfoAux.beamTiltYZ", &EventInfoAux_beamTiltYZ, &b_EventInfoAux_beamTiltYZ);
   fChain->SetBranchAddress("EventInfoAux.beamStatus", &EventInfoAux_beamStatus, &b_EventInfoAux_beamStatus);
   fChain->SetBranchAddress("xTrigDecisionAux.xAOD::AuxInfoBase", &xTrigDecisionAux_xAOD__AuxInfoBase, &b_xTrigDecisionAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("xTrigDecisionAux.smk", &xTrigDecisionAux_smk, &b_xTrigDecisionAux_smk);
   fChain->SetBranchAddress("xTrigDecisionAux.bgCode", &xTrigDecisionAux_bgCode, &b_xTrigDecisionAux_bgCode);
   fChain->SetBranchAddress("xTrigDecisionAux.tav", &xTrigDecisionAux_tav, &b_xTrigDecisionAux_tav);
   fChain->SetBranchAddress("xTrigDecisionAux.tap", &xTrigDecisionAux_tap, &b_xTrigDecisionAux_tap);
   fChain->SetBranchAddress("xTrigDecisionAux.tbp", &xTrigDecisionAux_tbp, &b_xTrigDecisionAux_tbp);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2ErrorBits", &xTrigDecisionAux_lvl2ErrorBits, &b_xTrigDecisionAux_lvl2ErrorBits);
   fChain->SetBranchAddress("xTrigDecisionAux.efErrorBits", &xTrigDecisionAux_efErrorBits, &b_xTrigDecisionAux_efErrorBits);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2Truncated", &xTrigDecisionAux_lvl2Truncated, &b_xTrigDecisionAux_lvl2Truncated);
   fChain->SetBranchAddress("xTrigDecisionAux.efTruncated", &xTrigDecisionAux_efTruncated, &b_xTrigDecisionAux_efTruncated);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2PassedPhysics", &xTrigDecisionAux_lvl2PassedPhysics, &b_xTrigDecisionAux_lvl2PassedPhysics);
   fChain->SetBranchAddress("xTrigDecisionAux.efPassedPhysics", &xTrigDecisionAux_efPassedPhysics, &b_xTrigDecisionAux_efPassedPhysics);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2PassedRaw", &xTrigDecisionAux_lvl2PassedRaw, &b_xTrigDecisionAux_lvl2PassedRaw);
   fChain->SetBranchAddress("xTrigDecisionAux.efPassedRaw", &xTrigDecisionAux_efPassedRaw, &b_xTrigDecisionAux_efPassedRaw);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2PassedThrough", &xTrigDecisionAux_lvl2PassedThrough, &b_xTrigDecisionAux_lvl2PassedThrough);
   fChain->SetBranchAddress("xTrigDecisionAux.efPassedThrough", &xTrigDecisionAux_efPassedThrough, &b_xTrigDecisionAux_efPassedThrough);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2Prescaled", &xTrigDecisionAux_lvl2Prescaled, &b_xTrigDecisionAux_lvl2Prescaled);
   fChain->SetBranchAddress("xTrigDecisionAux.efPrescaled", &xTrigDecisionAux_efPrescaled, &b_xTrigDecisionAux_efPrescaled);
   fChain->SetBranchAddress("xTrigDecisionAux.lvl2Resurrected", &xTrigDecisionAux_lvl2Resurrected, &b_xTrigDecisionAux_lvl2Resurrected);
   fChain->SetBranchAddress("xTrigDecisionAux.efResurrected", &xTrigDecisionAux_efResurrected, &b_xTrigDecisionAux_efResurrected);
   fChain->SetBranchAddress("EventInfo", &EventInfo, &b_EventInfo);
   fChain->SetBranchAddress("LVL1EnergySumRoI", &LVL1EnergySumRoI, &b_LVL1EnergySumRoI);
   fChain->SetBranchAddress("TrigNavigationAux.xAOD::AuxInfoBase", &TrigNavigationAux_xAOD__AuxInfoBase, &b_TrigNavigationAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("TrigNavigationAux.serialized", &TrigNavigationAux_serialized, &b_TrigNavigationAux_serialized);
   fChain->SetBranchAddress("xTrigDecision", &xTrigDecision, &b_xTrigDecision);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.xAOD::AuxContainerBase", &METAssoc_AntiKt4EMPFlowAux_xAOD__AuxContainerBase, &b_METAssoc_AntiKt4EMPFlowAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.jetLink", &METAssoc_AntiKt4EMPFlowAux_jetLink, &b_METAssoc_AntiKt4EMPFlowAux_jetLink);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.objectLinks", &METAssoc_AntiKt4EMPFlowAux_objectLinks, &b_METAssoc_AntiKt4EMPFlowAux_objectLinks);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.calpx", &METAssoc_AntiKt4EMPFlowAux_calpx, &b_METAssoc_AntiKt4EMPFlowAux_calpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.calpy", &METAssoc_AntiKt4EMPFlowAux_calpy, &b_METAssoc_AntiKt4EMPFlowAux_calpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.calpz", &METAssoc_AntiKt4EMPFlowAux_calpz, &b_METAssoc_AntiKt4EMPFlowAux_calpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.cale", &METAssoc_AntiKt4EMPFlowAux_cale, &b_METAssoc_AntiKt4EMPFlowAux_cale);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.calsumpt", &METAssoc_AntiKt4EMPFlowAux_calsumpt, &b_METAssoc_AntiKt4EMPFlowAux_calsumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.calkey", &METAssoc_AntiKt4EMPFlowAux_calkey, &b_METAssoc_AntiKt4EMPFlowAux_calkey);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.trkpx", &METAssoc_AntiKt4EMPFlowAux_trkpx, &b_METAssoc_AntiKt4EMPFlowAux_trkpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.trkpy", &METAssoc_AntiKt4EMPFlowAux_trkpy, &b_METAssoc_AntiKt4EMPFlowAux_trkpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.trkpz", &METAssoc_AntiKt4EMPFlowAux_trkpz, &b_METAssoc_AntiKt4EMPFlowAux_trkpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.trke", &METAssoc_AntiKt4EMPFlowAux_trke, &b_METAssoc_AntiKt4EMPFlowAux_trke);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.trksumpt", &METAssoc_AntiKt4EMPFlowAux_trksumpt, &b_METAssoc_AntiKt4EMPFlowAux_trksumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.trkkey", &METAssoc_AntiKt4EMPFlowAux_trkkey, &b_METAssoc_AntiKt4EMPFlowAux_trkkey);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.jettrkpx", &METAssoc_AntiKt4EMPFlowAux_jettrkpx, &b_METAssoc_AntiKt4EMPFlowAux_jettrkpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.jettrkpy", &METAssoc_AntiKt4EMPFlowAux_jettrkpy, &b_METAssoc_AntiKt4EMPFlowAux_jettrkpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.jettrkpz", &METAssoc_AntiKt4EMPFlowAux_jettrkpz, &b_METAssoc_AntiKt4EMPFlowAux_jettrkpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.jettrke", &METAssoc_AntiKt4EMPFlowAux_jettrke, &b_METAssoc_AntiKt4EMPFlowAux_jettrke);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.jettrksumpt", &METAssoc_AntiKt4EMPFlowAux_jettrksumpt, &b_METAssoc_AntiKt4EMPFlowAux_jettrksumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.overlapIndices", &METAssoc_AntiKt4EMPFlowAux_overlapIndices, &b_METAssoc_AntiKt4EMPFlowAux_overlapIndices);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.overlapTypes", &METAssoc_AntiKt4EMPFlowAux_overlapTypes, &b_METAssoc_AntiKt4EMPFlowAux_overlapTypes);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlowAux.isMisc", &METAssoc_AntiKt4EMPFlowAux_isMisc, &b_METAssoc_AntiKt4EMPFlowAux_isMisc);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.xAOD::AuxContainerBase", &METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase, &b_METAssoc_AntiKt4EMTopoAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jetLink", &METAssoc_AntiKt4EMTopoAux_jetLink, &b_METAssoc_AntiKt4EMTopoAux_jetLink);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.objectLinks", &METAssoc_AntiKt4EMTopoAux_objectLinks, &b_METAssoc_AntiKt4EMTopoAux_objectLinks);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calpx", &METAssoc_AntiKt4EMTopoAux_calpx, &b_METAssoc_AntiKt4EMTopoAux_calpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calpy", &METAssoc_AntiKt4EMTopoAux_calpy, &b_METAssoc_AntiKt4EMTopoAux_calpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calpz", &METAssoc_AntiKt4EMTopoAux_calpz, &b_METAssoc_AntiKt4EMTopoAux_calpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.cale", &METAssoc_AntiKt4EMTopoAux_cale, &b_METAssoc_AntiKt4EMTopoAux_cale);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calsumpt", &METAssoc_AntiKt4EMTopoAux_calsumpt, &b_METAssoc_AntiKt4EMTopoAux_calsumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.calkey", &METAssoc_AntiKt4EMTopoAux_calkey, &b_METAssoc_AntiKt4EMTopoAux_calkey);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkpx", &METAssoc_AntiKt4EMTopoAux_trkpx, &b_METAssoc_AntiKt4EMTopoAux_trkpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkpy", &METAssoc_AntiKt4EMTopoAux_trkpy, &b_METAssoc_AntiKt4EMTopoAux_trkpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkpz", &METAssoc_AntiKt4EMTopoAux_trkpz, &b_METAssoc_AntiKt4EMTopoAux_trkpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trke", &METAssoc_AntiKt4EMTopoAux_trke, &b_METAssoc_AntiKt4EMTopoAux_trke);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trksumpt", &METAssoc_AntiKt4EMTopoAux_trksumpt, &b_METAssoc_AntiKt4EMTopoAux_trksumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.trkkey", &METAssoc_AntiKt4EMTopoAux_trkkey, &b_METAssoc_AntiKt4EMTopoAux_trkkey);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrkpx", &METAssoc_AntiKt4EMTopoAux_jettrkpx, &b_METAssoc_AntiKt4EMTopoAux_jettrkpx);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrkpy", &METAssoc_AntiKt4EMTopoAux_jettrkpy, &b_METAssoc_AntiKt4EMTopoAux_jettrkpy);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrkpz", &METAssoc_AntiKt4EMTopoAux_jettrkpz, &b_METAssoc_AntiKt4EMTopoAux_jettrkpz);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrke", &METAssoc_AntiKt4EMTopoAux_jettrke, &b_METAssoc_AntiKt4EMTopoAux_jettrke);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.jettrksumpt", &METAssoc_AntiKt4EMTopoAux_jettrksumpt, &b_METAssoc_AntiKt4EMTopoAux_jettrksumpt);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.overlapIndices", &METAssoc_AntiKt4EMTopoAux_overlapIndices, &b_METAssoc_AntiKt4EMTopoAux_overlapIndices);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.overlapTypes", &METAssoc_AntiKt4EMTopoAux_overlapTypes, &b_METAssoc_AntiKt4EMTopoAux_overlapTypes);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopoAux.isMisc", &METAssoc_AntiKt4EMTopoAux_isMisc, &b_METAssoc_AntiKt4EMTopoAux_isMisc);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMPFlow", &METAssoc_AntiKt4EMPFlow, &b_METAssoc_AntiKt4EMPFlow);
   fChain->SetBranchAddress("METAssoc_AntiKt4EMTopo", &METAssoc_AntiKt4EMTopo, &b_METAssoc_AntiKt4EMTopo);
   fChain->SetBranchAddress("TrigNavigation", &TrigNavigation, &b_TrigNavigation);
   fChain->SetBranchAddress("Kt4EMPFlowEventShapeAux.xAOD::AuxInfoBase", &Kt4EMPFlowEventShapeAux_xAOD__AuxInfoBase, &b_Kt4EMPFlowEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShapeAux.xAOD::AuxInfoBase", &Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase, &b_Kt4EMTopoOriginEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("Kt4LCTopoOriginEventShapeAux.xAOD::AuxInfoBase", &Kt4LCTopoOriginEventShapeAux_xAOD__AuxInfoBase, &b_Kt4LCTopoOriginEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAux.xAOD::AuxInfoBase", &NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase, &b_NeutralParticleFlowIsoCentralEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAux.xAOD::AuxInfoBase", &NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase, &b_NeutralParticleFlowIsoForwardEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAux.xAOD::AuxInfoBase", &TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase, &b_TopoClusterIsoCentralEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAux.xAOD::AuxInfoBase", &TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase, &b_TopoClusterIsoForwardEventShapeAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("Kt4EMPFlowEventShape", &Kt4EMPFlowEventShape, &b_Kt4EMPFlowEventShape);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShape", &Kt4EMTopoOriginEventShape, &b_Kt4EMTopoOriginEventShape);
   fChain->SetBranchAddress("Kt4LCTopoOriginEventShape", &Kt4LCTopoOriginEventShape, &b_Kt4LCTopoOriginEventShape);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShape", &NeutralParticleFlowIsoCentralEventShape, &b_NeutralParticleFlowIsoCentralEventShape);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShape", &NeutralParticleFlowIsoForwardEventShape, &b_NeutralParticleFlowIsoForwardEventShape);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShape", &TopoClusterIsoCentralEventShape, &b_TopoClusterIsoCentralEventShape);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShape", &TopoClusterIsoForwardEventShape, &b_TopoClusterIsoForwardEventShape);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.xAOD::AuxInfoBase", &LVL1EnergySumRoIAux_xAOD__AuxInfoBase, &b_LVL1EnergySumRoIAux_xAOD__AuxInfoBase);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.roiWord0", &LVL1EnergySumRoIAux_roiWord0, &b_LVL1EnergySumRoIAux_roiWord0);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.roiWord1", &LVL1EnergySumRoIAux_roiWord1, &b_LVL1EnergySumRoIAux_roiWord1);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.roiWord2", &LVL1EnergySumRoIAux_roiWord2, &b_LVL1EnergySumRoIAux_roiWord2);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.roiWord3", &LVL1EnergySumRoIAux_roiWord3, &b_LVL1EnergySumRoIAux_roiWord3);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.roiWord4", &LVL1EnergySumRoIAux_roiWord4, &b_LVL1EnergySumRoIAux_roiWord4);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.roiWord5", &LVL1EnergySumRoIAux_roiWord5, &b_LVL1EnergySumRoIAux_roiWord5);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.thrNames", &LVL1EnergySumRoIAux_thrNames, &b_LVL1EnergySumRoIAux_thrNames);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.energyX", &LVL1EnergySumRoIAux_energyX, &b_LVL1EnergySumRoIAux_energyX);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.energyY", &LVL1EnergySumRoIAux_energyY, &b_LVL1EnergySumRoIAux_energyY);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.energyT", &LVL1EnergySumRoIAux_energyT, &b_LVL1EnergySumRoIAux_energyT);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.energyXRestricted", &LVL1EnergySumRoIAux_energyXRestricted, &b_LVL1EnergySumRoIAux_energyXRestricted);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.energyYRestricted", &LVL1EnergySumRoIAux_energyYRestricted, &b_LVL1EnergySumRoIAux_energyYRestricted);
   fChain->SetBranchAddress("LVL1EnergySumRoIAux.energyTRestricted", &LVL1EnergySumRoIAux_energyTRestricted, &b_LVL1EnergySumRoIAux_energyTRestricted);
   fChain->SetBranchAddress("LVL1EmTauRoIs", &LVL1EmTauRoIs, &b_LVL1EmTauRoIs);
   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_Electrons", &HLT_xAOD__ElectronContainer_egamma_Electrons, &b_HLT_xAOD__ElectronContainer_egamma_Electrons);
   fChain->SetBranchAddress("GSFConversionVertices", &GSFConversionVertices, &b_GSFConversionVertices);
   fChain->SetBranchAddress("PrimaryVertices", &PrimaryVertices, &b_PrimaryVertices);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlow", &MET_Core_AntiKt4EMPFlow, &b_MET_Core_AntiKt4EMPFlow);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopo", &MET_Core_AntiKt4EMTopo, &b_MET_Core_AntiKt4EMTopo);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlow", &MET_Reference_AntiKt4EMPFlow, &b_MET_Reference_AntiKt4EMPFlow);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopo", &MET_Reference_AntiKt4EMTopo, &b_MET_Reference_AntiKt4EMTopo);
   fChain->SetBranchAddress("MET_Track", &MET_Track, &b_MET_Track);
   fChain->SetBranchAddress("MET_Truth", &MET_Truth, &b_MET_Truth);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_Photons", &HLT_xAOD__PhotonContainer_egamma_Photons, &b_HLT_xAOD__PhotonContainer_egamma_Photons);
   fChain->SetBranchAddress("Photons", &Photons, &b_Photons);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201810Aux.m_locked", &AntiKt4EMPFlowJets_BTagging201810Aux_m_locked, &b_AntiKt4EMPFlowJets_BTagging201810Aux_m_locked);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201810Aux.m_parentLink", &AntiKt4EMPFlowJets_BTagging201810Aux_m_parentLink, &b_AntiKt4EMPFlowJets_BTagging201810Aux_m_parentLink);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201903Aux.m_locked", &AntiKt4EMPFlowJets_BTagging201903Aux_m_locked, &b_AntiKt4EMPFlowJets_BTagging201903Aux_m_locked);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201903Aux.m_parentLink", &AntiKt4EMPFlowJets_BTagging201903Aux_m_parentLink, &b_AntiKt4EMPFlowJets_BTagging201903Aux_m_parentLink);
   fChain->SetBranchAddress("AntiKt4EMTopoJets_BTagging201810Aux.m_locked", &AntiKt4EMTopoJets_BTagging201810Aux_m_locked, &b_AntiKt4EMTopoJets_BTagging201810Aux_m_locked);
   fChain->SetBranchAddress("AntiKt4EMTopoJets_BTagging201810Aux.m_parentLink", &AntiKt4EMTopoJets_BTagging201810Aux_m_parentLink, &b_AntiKt4EMTopoJets_BTagging201810Aux_m_parentLink);
   fChain->SetBranchAddress("TauJets", &TauJets, &b_TauJets);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo", &HLT_xAOD__MuonContainer_MuonEFInfo, &b_HLT_xAOD__MuonContainer_MuonEFInfo);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScan", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScan, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScan);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("egammaClusters", &egammaClusters, &b_egammaClusters);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810Aux.", &BTagging_AntiKt4EMPFlow_201810Aux_, &b_BTagging_AntiKt4EMPFlow_201810Aux_);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903Aux.", &BTagging_AntiKt4EMPFlow_201903Aux_, &b_BTagging_AntiKt4EMPFlow_201903Aux_);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810Aux.", &BTagging_AntiKt4EMTopo_201810Aux_, &b_BTagging_AntiKt4EMTopo_201810Aux_);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAux.", &BTagging_AntiKtVR30Rmax4Rmin02TrackAux_, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAux_);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux.", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux_, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAux_);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux.", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux_, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903Aux_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.", &CombinedMuonTrackParticlesAux_, &b_CombinedMuonTrackParticlesAux_);
   fChain->SetBranchAddress("ElectronsAux.", &ElectronsAux_, &b_ElectronsAux_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.", &ExtrapolatedMuonTrackParticlesAux_, &b_ExtrapolatedMuonTrackParticlesAux_);
   fChain->SetBranchAddress("GSFConversionVerticesAux.", &GSFConversionVerticesAux_, &b_GSFConversionVerticesAux_);
   fChain->SetBranchAddress("GSFTrackParticlesAux.", &GSFTrackParticlesAux_, &b_GSFTrackParticlesAux_);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAux.", &HLT_xAOD__ElectronContainer_egamma_ElectronsAux_, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAux_);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAux.", &HLT_xAOD__MuonContainer_MuonEFInfoAux_, &b_HLT_xAOD__MuonContainer_MuonEFInfoAux_);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux.", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux_, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAux_);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAux.", &HLT_xAOD__PhotonContainer_egamma_PhotonsAux_, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux.", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux_, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux.", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux_, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAux_);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux.", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux_, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAux_);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAux.", &InDetForwardTrackParticlesAux_, &b_InDetForwardTrackParticlesAux_);
   fChain->SetBranchAddress("InDetTrackParticlesAux.", &InDetTrackParticlesAux_, &b_InDetTrackParticlesAux_);
   fChain->SetBranchAddress("LVL1EmTauRoIsAux.", &LVL1EmTauRoIsAux_, &b_LVL1EmTauRoIsAux_);
   fChain->SetBranchAddress("LVL1MuonRoIsAux.", &LVL1MuonRoIsAux_, &b_LVL1MuonRoIsAux_);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAux.", &MET_Core_AntiKt4EMPFlowAux_, &b_MET_Core_AntiKt4EMPFlowAux_);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAux.", &MET_Core_AntiKt4EMTopoAux_, &b_MET_Core_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlowAux.", &MET_Reference_AntiKt4EMPFlowAux_, &b_MET_Reference_AntiKt4EMPFlowAux_);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAux.", &MET_Reference_AntiKt4EMTopoAux_, &b_MET_Reference_AntiKt4EMTopoAux_);
   fChain->SetBranchAddress("MET_TrackAux.", &MET_TrackAux_, &b_MET_TrackAux_);
   fChain->SetBranchAddress("MET_TruthAux.", &MET_TruthAux_, &b_MET_TruthAux_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAux.", &MuonSpectrometerTrackParticlesAux_, &b_MuonSpectrometerTrackParticlesAux_);
   fChain->SetBranchAddress("MuonsAux.", &MuonsAux_, &b_MuonsAux_);
   fChain->SetBranchAddress("PhotonsAux.", &PhotonsAux_, &b_PhotonsAux_);
   fChain->SetBranchAddress("PrimaryVerticesAux.", &PrimaryVerticesAux_, &b_PrimaryVerticesAux_);
   fChain->SetBranchAddress("TauJetsAux.", &TauJetsAux_, &b_TauJetsAux_);
   fChain->SetBranchAddress("TauTracksAux.", &TauTracksAux_, &b_TauTracksAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_e140_lhloose_nod0Aux.", &TrigMatch_HLT_e140_lhloose_nod0Aux_, &b_TrigMatch_HLT_e140_lhloose_nod0Aux_);
   fChain->SetBranchAddress("TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux.", &TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux_, &b_TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux.", &TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux_, &b_TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_e300_etcutAux.", &TrigMatch_HLT_e300_etcutAux_, &b_TrigMatch_HLT_e300_etcutAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_e60_lhmedium_nod0Aux.", &TrigMatch_HLT_e60_lhmedium_nod0Aux_, &b_TrigMatch_HLT_e60_lhmedium_nod0Aux_);
   fChain->SetBranchAddress("TrigMatch_HLT_e60_mediumAux.", &TrigMatch_HLT_e60_mediumAux_, &b_TrigMatch_HLT_e60_mediumAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_g120_looseAux.", &TrigMatch_HLT_g120_looseAux_, &b_TrigMatch_HLT_g120_looseAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_g140_looseAux.", &TrigMatch_HLT_g140_looseAux_, &b_TrigMatch_HLT_g140_looseAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_g200_etcutAux.", &TrigMatch_HLT_g200_etcutAux_, &b_TrigMatch_HLT_g200_etcutAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_g300_etcutAux.", &TrigMatch_HLT_g300_etcutAux_, &b_TrigMatch_HLT_g300_etcutAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ilooseAux.", &TrigMatch_HLT_mu24_ilooseAux_, &b_TrigMatch_HLT_mu24_ilooseAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_imediumAux.", &TrigMatch_HLT_mu24_imediumAux_, &b_TrigMatch_HLT_mu24_imediumAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ivarlooseAux.", &TrigMatch_HLT_mu24_ivarlooseAux_, &b_TrigMatch_HLT_mu24_ivarlooseAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ivarmediumAux.", &TrigMatch_HLT_mu24_ivarmediumAux_, &b_TrigMatch_HLT_mu24_ivarmediumAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu26_imediumAux.", &TrigMatch_HLT_mu26_imediumAux_, &b_TrigMatch_HLT_mu26_imediumAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu26_ivarmediumAux.", &TrigMatch_HLT_mu26_ivarmediumAux_, &b_TrigMatch_HLT_mu26_ivarmediumAux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu40Aux.", &TrigMatch_HLT_mu40Aux_, &b_TrigMatch_HLT_mu40Aux_);
   fChain->SetBranchAddress("TrigMatch_HLT_mu50Aux.", &TrigMatch_HLT_mu50Aux_, &b_TrigMatch_HLT_mu50Aux_);
   fChain->SetBranchAddress("TruthParticlesAux.", &TruthParticlesAux_, &b_TruthParticlesAux_);
   fChain->SetBranchAddress("TruthVerticesAux.", &TruthVerticesAux_, &b_TruthVerticesAux_);
   fChain->SetBranchAddress("egammaClustersAux.", &egammaClustersAux_, &b_egammaClustersAux_);
   fChain->SetBranchAddress("TruthParticles", &TruthParticles, &b_TruthParticles);
   fChain->SetBranchAddress("TruthVertices", &TruthVertices, &b_TruthVertices);
   fChain->SetBranchAddress("AntiKt10LCTopoJets", &AntiKt10LCTopoJets, &b_AntiKt10LCTopoJets);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets", &AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJets", &AntiKt10TrackCaloClusterJets, &b_AntiKt10TrackCaloClusterJets);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20Jets", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20Jets, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20Jets);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20Jets", &AntiKt10TruthTrimmedPtFrac5SmallR20Jets, &b_AntiKt10TruthTrimmedPtFrac5SmallR20Jets);
   fChain->SetBranchAddress("AntiKt2LCTopoJets", &AntiKt2LCTopoJets, &b_AntiKt2LCTopoJets);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets", &AntiKt4EMPFlowJets, &b_AntiKt4EMPFlowJets);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201810", &AntiKt4EMPFlowJets_BTagging201810, &b_AntiKt4EMPFlowJets_BTagging201810);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201903", &AntiKt4EMPFlowJets_BTagging201903, &b_AntiKt4EMPFlowJets_BTagging201903);
   fChain->SetBranchAddress("AntiKt4EMTopoJets", &AntiKt4EMTopoJets, &b_AntiKt4EMTopoJets);
   fChain->SetBranchAddress("AntiKt4EMTopoJets_BTagging201810", &AntiKt4EMTopoJets_BTagging201810, &b_AntiKt4EMTopoJets_BTagging201810);
   fChain->SetBranchAddress("AntiKt4LCTopoJets", &AntiKt4LCTopoJets, &b_AntiKt4LCTopoJets);
   fChain->SetBranchAddress("AntiKt4TruthJets", &AntiKt4TruthJets, &b_AntiKt4TruthJets);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJets", &AntiKtVR30Rmax4Rmin02TrackGhostTagJets, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJets);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets", &AntiKtVR30Rmax4Rmin02TrackJets, &b_AntiKtVR30Rmax4Rmin02TrackJets);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810", &BTagging_AntiKt4EMPFlow_201810, &b_BTagging_AntiKt4EMPFlow_201810);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903", &BTagging_AntiKt4EMPFlow_201903, &b_BTagging_AntiKt4EMPFlow_201903);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810", &BTagging_AntiKt4EMTopo_201810, &b_BTagging_AntiKt4EMTopo_201810);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track", &BTagging_AntiKtVR30Rmax4Rmin02Track, &b_BTagging_AntiKtVR30Rmax4Rmin02Track);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTag", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTag, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTag);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903);
   fChain->SetBranchAddress("CombinedMuonTrackParticles", &CombinedMuonTrackParticles, &b_CombinedMuonTrackParticles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticles", &ExtrapolatedMuonTrackParticles, &b_ExtrapolatedMuonTrackParticles);
   fChain->SetBranchAddress("GSFTrackParticles", &GSFTrackParticles, &b_GSFTrackParticles);
   fChain->SetBranchAddress("InDetForwardTrackParticles", &InDetForwardTrackParticles, &b_InDetForwardTrackParticles);
   fChain->SetBranchAddress("InDetTrackParticles", &InDetTrackParticles, &b_InDetTrackParticles);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticles", &MuonSpectrometerTrackParticles, &b_MuonSpectrometerTrackParticles);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.xAOD::AuxContainerBase", &AntiKt10LCTopoJetsAux_xAOD__AuxContainerBase, &b_AntiKt10LCTopoJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.pt", &AntiKt10LCTopoJetsAux_pt, &b_AntiKt10LCTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.eta", &AntiKt10LCTopoJetsAux_eta, &b_AntiKt10LCTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.phi", &AntiKt10LCTopoJetsAux_phi, &b_AntiKt10LCTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.m", &AntiKt10LCTopoJetsAux_m, &b_AntiKt10LCTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.constituentLinks", &AntiKt10LCTopoJetsAux_constituentLinks, &b_AntiKt10LCTopoJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.constituentWeights", &AntiKt10LCTopoJetsAux_constituentWeights, &b_AntiKt10LCTopoJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.xAOD::AuxContainerBase", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.pt", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_pt, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.eta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_eta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.phi", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_phi, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.m", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_m, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_m);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.constituentLinks", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentLinks, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux.constituentWeights", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentWeights, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.xAOD::AuxContainerBase", &AntiKt10TrackCaloClusterJetsAux_xAOD__AuxContainerBase, &b_AntiKt10TrackCaloClusterJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.pt", &AntiKt10TrackCaloClusterJetsAux_pt, &b_AntiKt10TrackCaloClusterJetsAux_pt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.eta", &AntiKt10TrackCaloClusterJetsAux_eta, &b_AntiKt10TrackCaloClusterJetsAux_eta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.phi", &AntiKt10TrackCaloClusterJetsAux_phi, &b_AntiKt10TrackCaloClusterJetsAux_phi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.m", &AntiKt10TrackCaloClusterJetsAux_m, &b_AntiKt10TrackCaloClusterJetsAux_m);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.constituentLinks", &AntiKt10TrackCaloClusterJetsAux_constituentLinks, &b_AntiKt10TrackCaloClusterJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAux.constituentWeights", &AntiKt10TrackCaloClusterJetsAux_constituentWeights, &b_AntiKt10TrackCaloClusterJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.xAOD::AuxContainerBase", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.pt", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_pt, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_pt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.eta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_eta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_eta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.phi", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_phi, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_phi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.m", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_m, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_m);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.constituentLinks", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentLinks, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux.constituentWeights", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentWeights, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.xAOD::AuxContainerBase", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.constituentLinks", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentLinks, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.constituentWeights", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.xAOD::AuxContainerBase", &AntiKt2LCTopoJetsAux_xAOD__AuxContainerBase, &b_AntiKt2LCTopoJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.pt", &AntiKt2LCTopoJetsAux_pt, &b_AntiKt2LCTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.eta", &AntiKt2LCTopoJetsAux_eta, &b_AntiKt2LCTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.phi", &AntiKt2LCTopoJetsAux_phi, &b_AntiKt2LCTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.m", &AntiKt2LCTopoJetsAux_m, &b_AntiKt2LCTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.constituentLinks", &AntiKt2LCTopoJetsAux_constituentLinks, &b_AntiKt2LCTopoJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAux.constituentWeights", &AntiKt2LCTopoJetsAux_constituentWeights, &b_AntiKt2LCTopoJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.xAOD::AuxContainerBase", &AntiKt4EMPFlowJetsAux_xAOD__AuxContainerBase, &b_AntiKt4EMPFlowJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.pt", &AntiKt4EMPFlowJetsAux_pt, &b_AntiKt4EMPFlowJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.eta", &AntiKt4EMPFlowJetsAux_eta, &b_AntiKt4EMPFlowJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.phi", &AntiKt4EMPFlowJetsAux_phi, &b_AntiKt4EMPFlowJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.m", &AntiKt4EMPFlowJetsAux_m, &b_AntiKt4EMPFlowJetsAux_m);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.constituentLinks", &AntiKt4EMPFlowJetsAux_constituentLinks, &b_AntiKt4EMPFlowJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAux.constituentWeights", &AntiKt4EMPFlowJetsAux_constituentWeights, &b_AntiKt4EMPFlowJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.xAOD::AuxContainerBase", &AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase, &b_AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.pt", &AntiKt4EMTopoJetsAux_pt, &b_AntiKt4EMTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.eta", &AntiKt4EMTopoJetsAux_eta, &b_AntiKt4EMTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.phi", &AntiKt4EMTopoJetsAux_phi, &b_AntiKt4EMTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.m", &AntiKt4EMTopoJetsAux_m, &b_AntiKt4EMTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.constituentLinks", &AntiKt4EMTopoJetsAux_constituentLinks, &b_AntiKt4EMTopoJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.constituentWeights", &AntiKt4EMTopoJetsAux_constituentWeights, &b_AntiKt4EMTopoJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.xAOD::AuxContainerBase", &AntiKt4TruthJetsAux_xAOD__AuxContainerBase, &b_AntiKt4TruthJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.pt", &AntiKt4TruthJetsAux_pt, &b_AntiKt4TruthJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.eta", &AntiKt4TruthJetsAux_eta, &b_AntiKt4TruthJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.phi", &AntiKt4TruthJetsAux_phi, &b_AntiKt4TruthJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.m", &AntiKt4TruthJetsAux_m, &b_AntiKt4TruthJetsAux_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.constituentLinks", &AntiKt4TruthJetsAux_constituentLinks, &b_AntiKt4TruthJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.constituentWeights", &AntiKt4TruthJetsAux_constituentWeights, &b_AntiKt4TruthJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.xAOD::AuxContainerBase", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_xAOD__AuxContainerBase, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.pt", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_pt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.eta", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_eta);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.phi", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_phi);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.m", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_m);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.constituentLinks", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentLinks, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux.constituentWeights", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentWeights, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.xAOD::AuxContainerBase", &AntiKtVR30Rmax4Rmin02TrackJetsAux_xAOD__AuxContainerBase, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.pt", &AntiKtVR30Rmax4Rmin02TrackJetsAux_pt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_pt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.eta", &AntiKtVR30Rmax4Rmin02TrackJetsAux_eta, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_eta);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.phi", &AntiKtVR30Rmax4Rmin02TrackJetsAux_phi, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_phi);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.m", &AntiKtVR30Rmax4Rmin02TrackJetsAux_m, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_m);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.constituentLinks", &AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentLinks, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentLinks);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAux.constituentWeights", &AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentWeights, &b_AntiKtVR30Rmax4Rmin02TrackJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.xAOD::AuxContainerBase", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_xAOD__AuxContainerBase, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.pt", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_pt, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_pt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.eta", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_eta, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_eta);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.phi", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_phi, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_phi);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.m", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_m, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_m);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.constituentLinks", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentLinks, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentLinks);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux.constituentWeights", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentWeights, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903Aux_constituentWeights);
   fChain->SetBranchAddress("TauTracks", &TauTracks, &b_TauTracks);
   fChain->SetBranchAddress("LVL1MuonRoIs", &LVL1MuonRoIs, &b_LVL1MuonRoIs);
   fChain->SetBranchAddress("TrigMatch_HLT_e140_lhloose_nod0", &TrigMatch_HLT_e140_lhloose_nod0, &b_TrigMatch_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("TrigMatch_HLT_e24_lhtight_nod0_ivarloose", &TrigMatch_HLT_e24_lhtight_nod0_ivarloose, &b_TrigMatch_HLT_e24_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("TrigMatch_HLT_e26_lhtight_nod0_ivarloose", &TrigMatch_HLT_e26_lhtight_nod0_ivarloose, &b_TrigMatch_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("TrigMatch_HLT_e300_etcut", &TrigMatch_HLT_e300_etcut, &b_TrigMatch_HLT_e300_etcut);
   fChain->SetBranchAddress("TrigMatch_HLT_e60_lhmedium_nod0", &TrigMatch_HLT_e60_lhmedium_nod0, &b_TrigMatch_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("TrigMatch_HLT_e60_medium", &TrigMatch_HLT_e60_medium, &b_TrigMatch_HLT_e60_medium);
   fChain->SetBranchAddress("TrigMatch_HLT_g120_loose", &TrigMatch_HLT_g120_loose, &b_TrigMatch_HLT_g120_loose);
   fChain->SetBranchAddress("TrigMatch_HLT_g140_loose", &TrigMatch_HLT_g140_loose, &b_TrigMatch_HLT_g140_loose);
   fChain->SetBranchAddress("TrigMatch_HLT_g200_etcut", &TrigMatch_HLT_g200_etcut, &b_TrigMatch_HLT_g200_etcut);
   fChain->SetBranchAddress("TrigMatch_HLT_g300_etcut", &TrigMatch_HLT_g300_etcut, &b_TrigMatch_HLT_g300_etcut);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_iloose", &TrigMatch_HLT_mu24_iloose, &b_TrigMatch_HLT_mu24_iloose);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_imedium", &TrigMatch_HLT_mu24_imedium, &b_TrigMatch_HLT_mu24_imedium);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ivarloose", &TrigMatch_HLT_mu24_ivarloose, &b_TrigMatch_HLT_mu24_ivarloose);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ivarmedium", &TrigMatch_HLT_mu24_ivarmedium, &b_TrigMatch_HLT_mu24_ivarmedium);
   fChain->SetBranchAddress("TrigMatch_HLT_mu26_imedium", &TrigMatch_HLT_mu26_imedium, &b_TrigMatch_HLT_mu26_imedium);
   fChain->SetBranchAddress("TrigMatch_HLT_mu26_ivarmedium", &TrigMatch_HLT_mu26_ivarmedium, &b_TrigMatch_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("TrigMatch_HLT_mu40", &TrigMatch_HLT_mu40, &b_TrigMatch_HLT_mu40);
   fChain->SetBranchAddress("TrigMatch_HLT_mu50", &TrigMatch_HLT_mu50, &b_TrigMatch_HLT_mu50);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt2TrackJet", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt2TrackJet, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt2TrackJet);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostVR30Rmax4Rmin02TrackJetGhostTag", &AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag, &b_AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostVR30Rmax4Rmin02TrackJet", &AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet, &b_AntiKt10LCTopoJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostBQuarksFinal", &AntiKt10LCTopoJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt10LCTopoJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.NumTrkPt500", &AntiKt10LCTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persKey", AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persIndex", AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.GhostAntiKt2TrackJet", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ECF1", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ECF2", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.ECF3", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram2", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram0", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Split12", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Split23", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Qw", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Qw);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.PlanarFlow", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Angularity", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Aplanarity", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.KtDR", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.HbbScore", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_HbbScore, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_HbbScore);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.XbbScoreQCD", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreQCD, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreQCD);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.XbbScoreHiggs", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreHiggs, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreHiggs);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.XbbScoreTop", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreTop, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_XbbScoreTop);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBQuarksFinal", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.DetectorEta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.TrackSumMass", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumMass);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.TrackSumPt", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_TrackSumPt);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Width", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Width, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.NTrimSubjets", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.Tau4_wta", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta);
   fChain->SetBranchAddress("AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn.DetectorY", &AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY, &b_AntiKt10LCTopoTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ConstituentScale", &AntiKt10TrackCaloClusterJetsAuxDyn_ConstituentScale, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.InputType", &AntiKt10TrackCaloClusterJetsAuxDyn_InputType, &b_AntiKt10TrackCaloClusterJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.AlgorithmType", &AntiKt10TrackCaloClusterJetsAuxDyn_AlgorithmType, &b_AntiKt10TrackCaloClusterJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.SizeParameter", &AntiKt10TrackCaloClusterJetsAuxDyn_SizeParameter, &b_AntiKt10TrackCaloClusterJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.EnergyPerSampling", &AntiKt10TrackCaloClusterJetsAuxDyn_EnergyPerSampling, &b_AntiKt10TrackCaloClusterJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostAntiKt2TrackJet", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJet, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJet);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostVR30Rmax4Rmin02TrackJetGhostTag", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJetGhostTag);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostVR30Rmax4Rmin02TrackJet", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostVR30Rmax4Rmin02TrackJet);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBQuarksFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.NumTrkPt500", &AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt500, &b_AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.DetectorEta", &AntiKt10TrackCaloClusterJetsAuxDyn_DetectorEta, &b_AntiKt10TrackCaloClusterJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TrackSumMass", &AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumMass, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumMass);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TrackSumPt", &AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackSumPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.Width", &AntiKt10TrackCaloClusterJetsAuxDyn_Width, &b_AntiKt10TrackCaloClusterJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.DetectorY", &AntiKt10TrackCaloClusterJetsAuxDyn_DetectorY, &b_AntiKt10TrackCaloClusterJetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ActiveArea", &AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ActiveArea4vec_eta", &AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ActiveArea4vec_m", &AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ActiveArea4vec_phi", &AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ActiveArea4vec_pt", &AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.Charge", &AntiKt10TrackCaloClusterJetsAuxDyn_Charge, &b_AntiKt10TrackCaloClusterJetsAuxDyn_Charge);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ConeExclTausFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclTausFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.ConeTruthLabelID", &AntiKt10TrackCaloClusterJetsAuxDyn_ConeTruthLabelID, &b_AntiKt10TrackCaloClusterJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.DetectorPhi", &AntiKt10TrackCaloClusterJetsAuxDyn_DetectorPhi, &b_AntiKt10TrackCaloClusterJetsAuxDyn_DetectorPhi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBHadronsFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBHadronsInitial", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitial, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBHadronsInitialCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBHadronsInitialPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBQuarksFinalCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostBQuarksFinalPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCHadronsFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCHadronsInitial", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitial, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCHadronsInitialCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCHadronsInitialPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCQuarksFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCQuarksFinalCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostCQuarksFinalPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostHBosons", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosons, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostHBosonsCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostHBosonsPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostMuonSegment", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegment, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostMuonSegmentCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostPartons", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartons, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostPartonsCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostPartonsPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTQuarksFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTQuarksFinalCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTQuarksFinalPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTausFinal", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinal, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTausFinalCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTausFinalPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTrack", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrack, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTrackCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTrackPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruth", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruth, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostWBosons", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosons, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostWBosonsCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostWBosonsPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostZBosons", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosons, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostZBosonsCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostZBosonsPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt10TrackCaloClusterJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.JetGhostArea", &AntiKt10TrackCaloClusterJetsAuxDyn_JetGhostArea, &b_AntiKt10TrackCaloClusterJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.NumTrkPt1000", &AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt1000, &b_AntiKt10TrackCaloClusterJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.OriginVertex", &AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_, &b_AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.OriginVertex.m_persKey", AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persKey, &b_AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persKey);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.OriginVertex.m_persIndex", AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persIndex, &b_AntiKt10TrackCaloClusterJetsAuxDyn_OriginVertex_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.PartonTruthLabelID", &AntiKt10TrackCaloClusterJetsAuxDyn_PartonTruthLabelID, &b_AntiKt10TrackCaloClusterJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.SumPtTrkPt1000", &AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt1000, &b_AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt1000);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.SumPtTrkPt500", &AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt500, &b_AntiKt10TrackCaloClusterJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TrackWidthPt1000", &AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt1000, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TrackWidthPt500", &AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt500, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TrackWidthPt500);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt10TrackCaloClusterJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.WidthPhi", &AntiKt10TrackCaloClusterJetsAuxDyn_WidthPhi, &b_AntiKt10TrackCaloClusterJetsAuxDyn_WidthPhi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostAntiKt2TrackJetCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostAntiKt2TrackJetPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt2TrackJetPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostAntiKt4TrackJet", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJet, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJet);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostAntiKt4TrackJetCount", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetCount, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostAntiKt4TrackJetPt", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetPt, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostAntiKt4TrackJetPt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthAssociationFraction", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationFraction, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationFraction);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthAssociationLink", &AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthAssociationLink.m_persKey", AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persKey, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persKey);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterJetsAuxDyn.GhostTruthAssociationLink.m_persIndex", AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persIndex, &b_AntiKt10TrackCaloClusterJetsAuxDyn_GhostTruthAssociationLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Parent", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persKey", AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persIndex", AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.GhostAntiKt2TrackJet", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostAntiKt2TrackJet);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.ECF1", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.ECF2", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.ECF3", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1_wta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram2", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram0", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Split12", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split12, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Split23", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split23, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Qw", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Qw, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Qw);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.PlanarFlow", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Angularity", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Aplanarity", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.ZCut12", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.KtDR", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBQuarksFinal", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.DetectorEta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Width", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Width, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.NTrimSubjets", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.Tau4_wta", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta);
   fChain->SetBranchAddress("AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn.DetectorY", &AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY, &b_AntiKt10TrackCaloClusterTrimmedPtFrac5SmallR20JetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ConstituentScale", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ConstituentScale, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetEMScaleMomentum_m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.InputType", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_InputType, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.AlgorithmType", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_AlgorithmType, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.SizeParameter", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_SizeParameter, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.EnergyPerSampling", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_EnergyPerSampling, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Parent", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persKey", AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persKey);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Parent.m_persIndex", AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Parent_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF3", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram0", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Split12", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split12, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Split23", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split23, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Qw", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Qw, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Qw);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.PlanarFlow", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Angularity", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Aplanarity", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ZCut12", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.KtDR", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBQuarksFinal", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Width", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Width, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.NTrimSubjets", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_NTrimSubjets);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau4_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ActiveArea", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ActiveArea4vec_eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ActiveArea4vec_m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_m, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ActiveArea4vec_phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ActiveArea4vec_pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Charge", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Charge, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Charge);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinal", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinal, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsFinalPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsInitial", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitial, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsInitialCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBHadronsInitialPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBQuarksFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostBQuarksFinalPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCHadronsFinal", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinal, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCHadronsFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCHadronsFinalPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCHadronsInitial", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitial, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCHadronsInitialCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCHadronsInitialPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCQuarksFinal", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinal, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCQuarksFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostCQuarksFinalPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostHBosons", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosons, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostHBosonsCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostHBosonsPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostPartons", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartons, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostPartonsCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostPartonsPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostTQuarksFinal", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinal, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostTQuarksFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostTQuarksFinalPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostTausFinal", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinal, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostTausFinalCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostTausFinalPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostWBosons", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosons, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostWBosonsCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostWBosonsPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostZBosons", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosons, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostZBosonsCount", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsCount, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.GhostZBosonsPt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsPt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.JetGhostArea", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetGhostArea, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.WidthPhi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_WidthPhi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_WidthPhi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.TransformType", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_TransformType, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_TransformType);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.PtFrac", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PtFrac, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PtFrac);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.RClus", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_RClus, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_RClus);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau4", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau4_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau4_wta_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau4_wta_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Split34", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split34, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ZCut23", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut23, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ZCut34", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut34, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF4", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF4, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF4);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF1_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF1_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF2_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF2_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECF3_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECF3_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_2_1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_4_2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_2_1_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_2_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_1_ungroomed", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_ungroomed, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_ungroomed);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_3_2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_2_2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_3_1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_3_1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_4_2_2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2_2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_2_2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_4_4_1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_4_1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_4_4_1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_2_1_2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_2_1_2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_2_1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_2_1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ECFG_3_1_1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ECFG_3_1_1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.N2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.N2_dichroic", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2_dichroic, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N2_dichroic);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.N3", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N3, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_N3);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.M2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.M2_dichroic", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2_dichroic, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_M2_dichroic);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.L1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.L2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L2);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.L3", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L3, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L3);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.L4", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L4, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L4);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.L5", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L5, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_L5);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ThrustMin", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMin, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.ThrustMaj", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMaj, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram1", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram1, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram3", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram3, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.FoxWolfram4", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram4, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Sphericity", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Sphericity, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Mu12", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Mu12, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Dip12", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip12, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Dip13", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip13, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Dip23", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip23, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.DipExcl12", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_DipExcl12, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.PullMag", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullMag, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullMag);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.PullPhi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullPhi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_PullPhi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Pull_C00", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C00, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C00);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Pull_C01", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C01, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C01);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Pull_C10", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C10, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C10);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Pull_C11", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C11, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Pull_C11);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.zg", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_zg, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_zg);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.rg", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_rg, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_rg);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.D2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt2LCTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.EnergyPerSampling", &AntiKt2LCTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt2LCTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.GhostBQuarksFinal", &AntiKt2LCTopoJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt2LCTopoJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.NumTrkPt500", &AntiKt2LCTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt2LCTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.DetectorEta", &AntiKt2LCTopoJetsAuxDyn_DetectorEta, &b_AntiKt2LCTopoJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.Width", &AntiKt2LCTopoJetsAuxDyn_Width, &b_AntiKt2LCTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.DetectorY", &AntiKt2LCTopoJetsAuxDyn_DetectorY, &b_AntiKt2LCTopoJetsAuxDyn_DetectorY);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt2LCTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.ConeTruthLabelID", &AntiKt2LCTopoJetsAuxDyn_ConeTruthLabelID, &b_AntiKt2LCTopoJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt2LCTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt2LCTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.GhostTrack", &AntiKt2LCTopoJetsAuxDyn_GhostTrack, &b_AntiKt2LCTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.GhostTrackCount", &AntiKt2LCTopoJetsAuxDyn_GhostTrackCount, &b_AntiKt2LCTopoJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt2LCTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt2LCTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt2LCTopoJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt2LCTopoJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.NumTrkPt1000", &AntiKt2LCTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt2LCTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.PartonTruthLabelID", &AntiKt2LCTopoJetsAuxDyn_PartonTruthLabelID, &b_AntiKt2LCTopoJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt2LCTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt2LCTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt2LCTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt2LCTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.FracSamplingMax", &AntiKt2LCTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt2LCTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt2LCTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt2LCTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.JVFCorr", &AntiKt2LCTopoJetsAuxDyn_JVFCorr, &b_AntiKt2LCTopoJetsAuxDyn_JVFCorr);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.Jvt", &AntiKt2LCTopoJetsAuxDyn_Jvt, &b_AntiKt2LCTopoJetsAuxDyn_Jvt);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.JvtRpt", &AntiKt2LCTopoJetsAuxDyn_JvtRpt, &b_AntiKt2LCTopoJetsAuxDyn_JvtRpt);
   fChain->SetBranchAddress("AntiKt2LCTopoJetsAuxDyn.Timing", &AntiKt2LCTopoJetsAuxDyn_Timing, &b_AntiKt2LCTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMPFlowJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.EnergyPerSampling", &AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling, &b_AntiKt4EMPFlowJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_NTracks", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_NTracks);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_TracksWidth", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksWidth);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_TracksC1", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_TracksC1);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_truthjet_nCharged", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_nCharged);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_truthjet_pt", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DFCommonJets_QGTagger_truthjet_eta", &AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta, &b_AntiKt4EMPFlowJetsAuxDyn_DFCommonJets_QGTagger_truthjet_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumTrkPt500", &AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500, &b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.DetectorEta", &AntiKt4EMPFlowJetsAuxDyn_DetectorEta, &b_AntiKt4EMPFlowJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.Width", &AntiKt4EMPFlowJetsAuxDyn_Width, &b_AntiKt4EMPFlowJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMPFlowJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ConeTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMPFlowJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.GhostTrack", &AntiKt4EMPFlowJetsAuxDyn_GhostTrack, &b_AntiKt4EMPFlowJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumTrkPt1000", &AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.PartonTruthLabelID", &AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMPFlowJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.SumPtTrkPt500", &AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4EMPFlowJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.TrackWidthPt1000", &AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.FracSamplingMax", &AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax, &b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4EMPFlowJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JVFCorr", &AntiKt4EMPFlowJetsAuxDyn_JVFCorr, &b_AntiKt4EMPFlowJetsAuxDyn_JVFCorr);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.Jvt", &AntiKt4EMPFlowJetsAuxDyn_Jvt, &b_AntiKt4EMPFlowJetsAuxDyn_Jvt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.JvtRpt", &AntiKt4EMPFlowJetsAuxDyn_JvtRpt, &b_AntiKt4EMPFlowJetsAuxDyn_JvtRpt);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.Timing", &AntiKt4EMPFlowJetsAuxDyn_Timing, &b_AntiKt4EMPFlowJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.EMFrac", &AntiKt4EMPFlowJetsAuxDyn_EMFrac, &b_AntiKt4EMPFlowJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.ChargedPFOWidthPt1000", &AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_ChargedPFOWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumChargedPFOPt1000", &AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000, &b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt1000);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.NumChargedPFOPt500", &AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500, &b_AntiKt4EMPFlowJetsAuxDyn_NumChargedPFOPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJetsAuxDyn.SumPtChargedPFOPt500", &AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500, &b_AntiKt4EMPFlowJetsAuxDyn_SumPtChargedPFOPt500);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201810AuxDyn.btaggingLink", &AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_, &b_AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201810AuxDyn.btaggingLink.m_persKey", AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persKey, &b_AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201810AuxDyn.btaggingLink.m_persIndex", AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persIndex, &b_AntiKt4EMPFlowJets_BTagging201810AuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201903AuxDyn.btaggingLink", &AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_, &b_AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201903AuxDyn.btaggingLink.m_persKey", AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persKey, &b_AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMPFlowJets_BTagging201903AuxDyn.btaggingLink.m_persIndex", AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persIndex, &b_AntiKt4EMPFlowJets_BTagging201903AuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EnergyPerSampling", &AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_jetClean_LooseBad", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_LooseBad);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DFCommonJets_jetClean_TightBad", &AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad, &b_AntiKt4EMTopoJetsAuxDyn_DFCommonJets_jetClean_TightBad);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt500", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DetectorEta", &AntiKt4EMTopoJetsAuxDyn_DetectorEta, &b_AntiKt4EMTopoJetsAuxDyn_DetectorEta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Width", &AntiKt4EMTopoJetsAuxDyn_Width, &b_AntiKt4EMTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConeTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTrack", &AntiKt4EMTopoJetsAuxDyn_GhostTrack, &b_AntiKt4EMTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt1000", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.PartonTruthLabelID", &AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMax", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JVFCorr", &AntiKt4EMTopoJetsAuxDyn_JVFCorr, &b_AntiKt4EMTopoJetsAuxDyn_JVFCorr);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Jvt", &AntiKt4EMTopoJetsAuxDyn_Jvt, &b_AntiKt4EMTopoJetsAuxDyn_Jvt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JvtRpt", &AntiKt4EMTopoJetsAuxDyn_JvtRpt, &b_AntiKt4EMTopoJetsAuxDyn_JvtRpt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Timing", &AntiKt4EMTopoJetsAuxDyn_Timing, &b_AntiKt4EMTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMFrac", &AntiKt4EMTopoJetsAuxDyn_EMFrac, &b_AntiKt4EMTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4EMTopoJets_BTagging201810AuxDyn.btaggingLink", &AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_, &b_AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4EMTopoJets_BTagging201810AuxDyn.btaggingLink.m_persKey", AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persKey, &b_AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMTopoJets_BTagging201810AuxDyn.btaggingLink.m_persIndex", AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persIndex, &b_AntiKt4EMTopoJets_BTagging201810AuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConstituentScale", &AntiKt4TruthJetsAuxDyn_ConstituentScale, &b_AntiKt4TruthJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4TruthJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.InputType", &AntiKt4TruthJetsAuxDyn_InputType, &b_AntiKt4TruthJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.AlgorithmType", &AntiKt4TruthJetsAuxDyn_AlgorithmType, &b_AntiKt4TruthJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.SizeParameter", &AntiKt4TruthJetsAuxDyn_SizeParameter, &b_AntiKt4TruthJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBQuarksFinal", &AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal, &b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Width", &AntiKt4TruthJetsAuxDyn_Width, &b_AntiKt4TruthJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea", &AntiKt4TruthJetsAuxDyn_ActiveArea, &b_AntiKt4TruthJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_m", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4TruthJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeExclBHadronsFinal", &AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeExclCHadronsFinal", &AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeExclTausFinal", &AntiKt4TruthJetsAuxDyn_ConeExclTausFinal, &b_AntiKt4TruthJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConeTruthLabelID", &AntiKt4TruthJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsFinal", &AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsFinalPt", &AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsInitial", &AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsInitialCount", &AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBHadronsInitialPt", &AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKt4TruthJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBQuarksFinalCount", &AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostBQuarksFinalPt", &AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsFinal", &AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsFinalPt", &AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsInitial", &AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsInitialCount", &AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCHadronsInitialPt", &AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKt4TruthJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCQuarksFinal", &AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal, &b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCQuarksFinalCount", &AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostCQuarksFinalPt", &AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostHBosons", &AntiKt4TruthJetsAuxDyn_GhostHBosons, &b_AntiKt4TruthJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostHBosonsCount", &AntiKt4TruthJetsAuxDyn_GhostHBosonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostHBosonsPt", &AntiKt4TruthJetsAuxDyn_GhostHBosonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostPartons", &AntiKt4TruthJetsAuxDyn_GhostPartons, &b_AntiKt4TruthJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostPartonsCount", &AntiKt4TruthJetsAuxDyn_GhostPartonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostPartonsPt", &AntiKt4TruthJetsAuxDyn_GhostPartonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTQuarksFinal", &AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal, &b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTQuarksFinalCount", &AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTQuarksFinalPt", &AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTausFinal", &AntiKt4TruthJetsAuxDyn_GhostTausFinal, &b_AntiKt4TruthJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTausFinalCount", &AntiKt4TruthJetsAuxDyn_GhostTausFinalCount, &b_AntiKt4TruthJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostTausFinalPt", &AntiKt4TruthJetsAuxDyn_GhostTausFinalPt, &b_AntiKt4TruthJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostWBosons", &AntiKt4TruthJetsAuxDyn_GhostWBosons, &b_AntiKt4TruthJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostWBosonsCount", &AntiKt4TruthJetsAuxDyn_GhostWBosonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostWBosonsPt", &AntiKt4TruthJetsAuxDyn_GhostWBosonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostZBosons", &AntiKt4TruthJetsAuxDyn_GhostZBosons, &b_AntiKt4TruthJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostZBosonsCount", &AntiKt4TruthJetsAuxDyn_GhostZBosonsCount, &b_AntiKt4TruthJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.GhostZBosonsPt", &AntiKt4TruthJetsAuxDyn_GhostZBosonsPt, &b_AntiKt4TruthJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetGhostArea", &AntiKt4TruthJetsAuxDyn_JetGhostArea, &b_AntiKt4TruthJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.PartonTruthLabelID", &AntiKt4TruthJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4TruthJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.WidthPhi", &AntiKt4TruthJetsAuxDyn_WidthPhi, &b_AntiKt4TruthJetsAuxDyn_WidthPhi);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.btaggingLink", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.btaggingLink.m_persKey", AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.btaggingLink.m_persIndex", AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.GhostBHadronsFinalCount", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.ConeExclBHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.ConeExclCHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.GhostBHadronsFinalPt", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.GhostCHadronsFinalCount", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.GhostCHadronsFinalPt", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKtVR30Rmax4Rmin02TrackGhostTagJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.ConstituentScale", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConstituentScale, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetEMScaleMomentum_m", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.InputType", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_InputType, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.AlgorithmType", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_AlgorithmType, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.SizeParameter", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_SizeParameter, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.btaggingLink", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.btaggingLink.m_persKey", AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.btaggingLink.m_persIndex", AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.has_ATLASRECTS_5027_bug", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_has_ATLASRECTS_5027_bug, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_has_ATLASRECTS_5027_bug);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBQuarksFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBHadronsFinalCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.ConeExclBHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclBHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.ConeExclCHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclCHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.ConeExclTausFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclTausFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_ConeExclTausFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBHadronsFinalPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBHadronsInitial", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitial, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitial);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBHadronsInitialCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBHadronsInitialPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBHadronsInitialPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBQuarksFinalCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostBQuarksFinalPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostBQuarksFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCHadronsFinalCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCHadronsFinalPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCHadronsInitial", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitial, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitial);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCHadronsInitialCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCHadronsInitialPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCHadronsInitialPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCQuarksFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCQuarksFinalCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostCQuarksFinalPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostCQuarksFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostHBosons", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosons, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosons);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostHBosonsCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostHBosonsPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostHBosonsPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostPartons", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartons, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartons);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostPartonsCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostPartonsPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostPartonsPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTQuarksFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTQuarksFinalCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTQuarksFinalPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTQuarksFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTausFinal", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinal, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTausFinalCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTausFinalPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTausFinalPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTrack", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrack, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTrackCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTrackPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTruth", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruth, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTruthCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostTruthPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostWBosons", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosons, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosons);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostWBosonsCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostWBosonsPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostWBosonsPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostZBosons", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosons, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosons);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostZBosonsCount", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsCount, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsCount);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.GhostZBosonsPt", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsPt, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_GhostZBosonsPt);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.JetGhostArea", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetGhostArea, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.OriginVertex", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.OriginVertex.m_persKey", AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persKey, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persKey);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.OriginVertex.m_persIndex", AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persIndex, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_OriginVertex_m_persIndex);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.MatchedTracks", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedTracks, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedTracks);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.MatchedMuons", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedMuons, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_MatchedMuons);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.VariableRMinRadius", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMinRadius, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMinRadius);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn.VariableRMassScale", &AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMassScale, &b_AntiKtVR30Rmax4Rmin02TrackJetsAuxDyn_VariableRMassScale);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.btaggingLink", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.btaggingLink.m_persKey", AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persKey, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.btaggingLink.m_persIndex", AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persIndex, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.ConeExclBHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclBHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclBHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.ConeExclCHadronsFinal", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclCHadronsFinal, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_ConeExclCHadronsFinal);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.HadronConeExclExtendedTruthLabelID", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclExtendedTruthLabelID, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclExtendedTruthLabelID);
   fChain->SetBranchAddress("AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn.HadronConeExclTruthLabelID", &AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclTruthLabelID, &b_AntiKtVR30Rmax4Rmin02TrackJets_BTagging201903AuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1r_pu", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pu, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1r_pc", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pc, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1r_pb", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pb, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1r_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1_pu", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pu, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1_pc", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pc, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1_pb", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pb, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1rmu_pu", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pu, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1rmu_pc", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pc, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1rmu_pb", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pb, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1rmu_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1mu_pb", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pb, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1mu_pc", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pc, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.DL1mu_pu", &BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pu, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_DL1mu_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.MV2c100_discriminant", &BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c100_discriminant, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.MV2c10_discriminant", &BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c10_discriminant, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.MV2cl100_discriminant", &BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.MV2r_discriminant", &BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2r_discriminant, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2r_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201810AuxDyn.MV2rmu_discriminant", &BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2rmu_discriminant, &b_BTagging_AntiKt4EMPFlow_201810AuxDyn_MV2rmu_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1r_pu", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pu, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1r_pc", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pc, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1r_pb", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pb, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1r_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1_pu", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pu, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1_pc", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pc, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1_pb", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pb, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1rmu_pu", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pu, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1rmu_pc", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pc, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.DL1rmu_pb", &BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pb, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_DL1rmu_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.MV2c100_discriminant", &BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c100_discriminant, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.MV2c10_discriminant", &BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c10_discriminant, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.MV2cl100_discriminant", &BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.MV2r_discriminant", &BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2r_discriminant, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2r_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMPFlow_201903AuxDyn.MV2rmu_discriminant", &BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2rmu_discriminant, &b_BTagging_AntiKt4EMPFlow_201903AuxDyn_MV2rmu_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1r_pu", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pu, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1r_pc", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pc, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1r_pb", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pb, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1r_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1_pu", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pu, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1_pc", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pc, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1_pb", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pb, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1rmu_pu", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pu, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1rmu_pc", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pc, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1rmu_pb", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pb, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1rmu_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1mu_pb", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pb, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1mu_pc", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pc, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.DL1mu_pu", &BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pu, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_DL1mu_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.MV2c100_discriminant", &BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c100_discriminant, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.MV2c10_discriminant", &BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c10_discriminant, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.MV2cl100_discriminant", &BTagging_AntiKt4EMTopo_201810AuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.MV2r_discriminant", &BTagging_AntiKt4EMTopo_201810AuxDyn_MV2r_discriminant, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2r_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo_201810AuxDyn.MV2rmu_discriminant", &BTagging_AntiKt4EMTopo_201810AuxDyn_MV2rmu_discriminant, &b_BTagging_AntiKt4EMTopo_201810AuxDyn_MV2rmu_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1r_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1r_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1r_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1r_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1rmu_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1rmu_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1rmu_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1rmu_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1mu_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1mu_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.DL1mu_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_DL1mu_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.MV2c100_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c100_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.MV2c10_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c10_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.MV2cl100_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.MV2r_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2r_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2r_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn.MV2rmu_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2rmu_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackAuxDyn_MV2rmu_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1r_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1r_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1r_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1r_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1rmu_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1rmu_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1rmu_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1rmu_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1mu_pb", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1mu_pc", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.DL1mu_pu", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_DL1mu_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.MV2c100_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c100_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.MV2c10_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c10_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.MV2cl100_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.MV2r_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2r_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2r_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn.MV2rmu_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2rmu_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02TrackGhostTagAuxDyn_MV2rmu_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1r_pu", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1r_pc", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1r_pb", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1r_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1_pu", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1_pc", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1_pb", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1rmu_pu", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pu, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pu);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1rmu_pc", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pc, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pc);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.DL1rmu_pb", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pb, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_DL1rmu_pb);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.MV2c100_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c100_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.MV2c10_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c10_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2c10_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.MV2cl100_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2cl100_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2cl100_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.MV2r_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2r_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2r_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn.MV2rmu_discriminant", &BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2rmu_discriminant, &b_BTagging_AntiKtVR30Rmax4Rmin02Track_201903AuxDyn_MV2rmu_discriminant);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.phi", &CombinedMuonTrackParticlesAuxDyn_phi, &b_CombinedMuonTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vertexLink", &CombinedMuonTrackParticlesAuxDyn_vertexLink_, &b_CombinedMuonTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vertexLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vertexLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelHits", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelHoles", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPixelDeadSensors", &CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTHits", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTHoles", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfSCTDeadSensors", &CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_CombinedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink", &CombinedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.chiSquared", &CombinedMuonTrackParticlesAuxDyn_chiSquared, &b_CombinedMuonTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberDoF", &CombinedMuonTrackParticlesAuxDyn_numberDoF, &b_CombinedMuonTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.d0", &CombinedMuonTrackParticlesAuxDyn_d0, &b_CombinedMuonTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.z0", &CombinedMuonTrackParticlesAuxDyn_z0, &b_CombinedMuonTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.theta", &CombinedMuonTrackParticlesAuxDyn_theta, &b_CombinedMuonTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.qOverP", &CombinedMuonTrackParticlesAuxDyn_qOverP, &b_CombinedMuonTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.definingParametersCovMatrix", &CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix, &b_CombinedMuonTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.vz", &CombinedMuonTrackParticlesAuxDyn_vz, &b_CombinedMuonTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfTRTHits", &CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits, &b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfTRTOutliers", &CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPrecisionLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPhiLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.numberOfPhiHoleLayers", &CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_CombinedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectChId", &CombinedMuonTrackParticlesAuxDyn_alignEffectChId, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectChId);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectDeltaAngle", &CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectDeltaTrans", &CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaAngle", &CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaTrans", &CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans, &b_CombinedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans);
   fChain->SetBranchAddress("ElectronsAuxDyn.trackParticleLinks", &ElectronsAuxDyn_trackParticleLinks, &b_ElectronsAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.pt", &ElectronsAuxDyn_pt, &b_ElectronsAuxDyn_pt);
   fChain->SetBranchAddress("ElectronsAuxDyn.eta", &ElectronsAuxDyn_eta, &b_ElectronsAuxDyn_eta);
   fChain->SetBranchAddress("ElectronsAuxDyn.phi", &ElectronsAuxDyn_phi, &b_ElectronsAuxDyn_phi);
   fChain->SetBranchAddress("ElectronsAuxDyn.m", &ElectronsAuxDyn_m, &b_ElectronsAuxDyn_m);
   fChain->SetBranchAddress("ElectronsAuxDyn.charge", &ElectronsAuxDyn_charge, &b_ElectronsAuxDyn_charge);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonAddAmbiguity", &ElectronsAuxDyn_DFCommonAddAmbiguity, &b_ElectronsAuxDyn_DFCommonAddAmbiguity);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_TightTTVA_pt1000", &ElectronsAuxDyn_ptvarcone30_TightTTVA_pt1000, &b_ElectronsAuxDyn_ptvarcone30_TightTTVA_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone20_TightTTVA_pt1000", &ElectronsAuxDyn_ptvarcone20_TightTTVA_pt1000, &b_ElectronsAuxDyn_ptvarcone20_TightTTVA_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_TightTTVA_pt500", &ElectronsAuxDyn_ptvarcone30_TightTTVA_pt500, &b_ElectronsAuxDyn_ptvarcone30_TightTTVA_pt500);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone40_TightTTVALooseCone_pt1000", &ElectronsAuxDyn_ptvarcone40_TightTTVALooseCone_pt1000, &b_ElectronsAuxDyn_ptvarcone40_TightTTVALooseCone_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_TightTTVALooseCone_pt1000", &ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt1000, &b_ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone20_TightTTVALooseCone_pt1000", &ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt1000, &b_ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone20_TightTTVALooseCone_pt1000", &ElectronsAuxDyn_ptvarcone20_TightTTVALooseCone_pt1000, &b_ElectronsAuxDyn_ptvarcone20_TightTTVALooseCone_pt1000);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone30_TightTTVALooseCone_pt500", &ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt500, &b_ElectronsAuxDyn_ptvarcone30_TightTTVALooseCone_pt500);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptcone20_TightTTVALooseCone_pt500", &ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt500, &b_ElectronsAuxDyn_ptcone20_TightTTVALooseCone_pt500);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20", &ElectronsAuxDyn_topoetcone20, &b_ElectronsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.ptvarcone20", &ElectronsAuxDyn_ptvarcone20, &b_ElectronsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink", &ElectronsAuxDyn_truthParticleLink_, &b_ElectronsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink.m_persKey", ElectronsAuxDyn_truthParticleLink_m_persKey, &b_ElectronsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthParticleLink.m_persIndex", ElectronsAuxDyn_truthParticleLink_m_persIndex, &b_ElectronsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.caloClusterLinks", &ElectronsAuxDyn_caloClusterLinks, &b_ElectronsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("ElectronsAuxDyn.author", &ElectronsAuxDyn_author, &b_ElectronsAuxDyn_author);
   fChain->SetBranchAddress("ElectronsAuxDyn.OQ", &ElectronsAuxDyn_OQ, &b_ElectronsAuxDyn_OQ);
   fChain->SetBranchAddress("ElectronsAuxDyn.f1", &ElectronsAuxDyn_f1, &b_ElectronsAuxDyn_f1);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink", &ElectronsAuxDyn_ambiguityLink_, &b_ElectronsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink.m_persKey", ElectronsAuxDyn_ambiguityLink_m_persKey, &b_ElectronsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityLink.m_persIndex", ElectronsAuxDyn_ambiguityLink_m_persIndex, &b_ElectronsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.ambiguityType", &ElectronsAuxDyn_ambiguityType, &b_ElectronsAuxDyn_ambiguityType);
   fChain->SetBranchAddress("ElectronsAuxDyn.core57cellsEnergyCorrection", &ElectronsAuxDyn_core57cellsEnergyCorrection, &b_ElectronsAuxDyn_core57cellsEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.neflowisol20", &ElectronsAuxDyn_neflowisol20, &b_ElectronsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone20ptCorrection", &ElectronsAuxDyn_topoetcone20ptCorrection, &b_ElectronsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetcone40", &ElectronsAuxDyn_topoetcone40, &b_ElectronsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetconecoreConeEnergyCorrection", &ElectronsAuxDyn_topoetconecoreConeEnergyCorrection, &b_ElectronsAuxDyn_topoetconecoreConeEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.topoetconecoreConeSCEnergyCorrection", &ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection, &b_ElectronsAuxDyn_topoetconecoreConeSCEnergyCorrection);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthOrigin", &ElectronsAuxDyn_truthOrigin, &b_ElectronsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthType", &ElectronsAuxDyn_truthType, &b_ElectronsAuxDyn_truthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHVeryLoose", &ElectronsAuxDyn_DFCommonElectronsLHVeryLoose, &b_ElectronsAuxDyn_DFCommonElectronsLHVeryLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHVeryLooseIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHVeryLooseIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLoose", &ElectronsAuxDyn_DFCommonElectronsLHLoose, &b_ElectronsAuxDyn_DFCommonElectronsLHLoose);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLooseIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHLooseIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLooseBL", &ElectronsAuxDyn_DFCommonElectronsLHLooseBL, &b_ElectronsAuxDyn_DFCommonElectronsLHLooseBL);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHLooseBLIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHLooseBLIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHMedium", &ElectronsAuxDyn_DFCommonElectronsLHMedium, &b_ElectronsAuxDyn_DFCommonElectronsLHMedium);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHMediumIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHMediumIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHTight", &ElectronsAuxDyn_DFCommonElectronsLHTight, &b_ElectronsAuxDyn_DFCommonElectronsLHTight);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsLHTightIsEMValue", &ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue, &b_ElectronsAuxDyn_DFCommonElectronsLHTightIsEMValue);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsECIDS", &ElectronsAuxDyn_DFCommonElectronsECIDS, &b_ElectronsAuxDyn_DFCommonElectronsECIDS);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonElectronsECIDSResult", &ElectronsAuxDyn_DFCommonElectronsECIDSResult, &b_ElectronsAuxDyn_DFCommonElectronsECIDSResult);
   fChain->SetBranchAddress("ElectronsAuxDyn.DFCommonCrackVetoCleaning", &ElectronsAuxDyn_DFCommonCrackVetoCleaning, &b_ElectronsAuxDyn_DFCommonCrackVetoCleaning);
   fChain->SetBranchAddress("ElectronsAuxDyn.truthPdgId", &ElectronsAuxDyn_truthPdgId, &b_ElectronsAuxDyn_truthPdgId);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthType", &ElectronsAuxDyn_firstEgMotherTruthType, &b_ElectronsAuxDyn_firstEgMotherTruthType);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthOrigin", &ElectronsAuxDyn_firstEgMotherTruthOrigin, &b_ElectronsAuxDyn_firstEgMotherTruthOrigin);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink", &ElectronsAuxDyn_firstEgMotherTruthParticleLink_, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persKey", ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherTruthParticleLink.m_persIndex", ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex, &b_ElectronsAuxDyn_firstEgMotherTruthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ElectronsAuxDyn.firstEgMotherPdgId", &ElectronsAuxDyn_firstEgMotherPdgId, &b_ElectronsAuxDyn_firstEgMotherPdgId);
   fChain->SetBranchAddress("EventInfoAuxDyn.streamTagRobs", &EventInfoAuxDyn_streamTagRobs, &b_EventInfoAuxDyn_streamTagRobs);
   fChain->SetBranchAddress("EventInfoAuxDyn.streamTagDets", &EventInfoAuxDyn_streamTagDets, &b_EventInfoAuxDyn_streamTagDets);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventTime", &EventInfoAuxDyn_subEventTime, &b_EventInfoAuxDyn_subEventTime);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventIndex", &EventInfoAuxDyn_subEventIndex, &b_EventInfoAuxDyn_subEventIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink", &EventInfoAuxDyn_subEventLink_, &b_EventInfoAuxDyn_subEventLink_);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink.m_persKey", &EventInfoAuxDyn_subEventLink_m_persKey, &b_EventInfoAuxDyn_subEventLink_m_persKey);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink.m_persIndex", &EventInfoAuxDyn_subEventLink_m_persIndex, &b_EventInfoAuxDyn_subEventLink_m_persIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventType", &EventInfoAuxDyn_subEventType, &b_EventInfoAuxDyn_subEventType);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltHT", &EventInfoAuxDyn_GenFiltHT, &b_GenFiltHT);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltMET", &EventInfoAuxDyn_GenFiltMET, &b_GenFiltMET);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltPTZ", &EventInfoAuxDyn_GenFiltPTZ, &b_GenFiltPTZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_eventClean_LooseBad", &EventInfoAuxDyn_DFCommonJets_eventClean_LooseBad, &b_DFCommonJets_eventClean_LooseBad);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_eventClean_LooseBadLLP", &EventInfoAuxDyn_DFCommonJets_eventClean_LooseBadLLP, &b_DFCommonJets_eventClean_LooseBadLLP);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcChannelNumber", &EventInfoAuxDyn_mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.TruthIsoCentralEventShape_rho", &EventInfoAuxDyn_TruthIsoCentralEventShape_rho, &b_TruthIsoCentralEventShape_rho);
   fChain->SetBranchAddress("EventInfoAuxDyn.TruthIsoForwardEventShape_rho", &EventInfoAuxDyn_TruthIsoForwardEventShape_rho, &b_TruthIsoForwardEventShape_rho);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventNumber", &EventInfoAuxDyn_mcEventNumber, &b_mcEventNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventWeights", &EventInfoAuxDyn_mcEventWeights, &b_EventInfoAuxDyn_mcEventWeights);
   fChain->SetBranchAddress("EventInfoAuxDyn.DFCommonJets_isBadBatman", &EventInfoAuxDyn_DFCommonJets_isBadBatman, &b_DFCommonJets_isBadBatman);
   fChain->SetBranchAddress("EventInfoAuxDyn.HTXS_prodMode", &EventInfoAuxDyn_HTXS_prodMode, &b_HTXS_prodMode);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.phi", &ExtrapolatedMuonTrackParticlesAuxDyn_phi, &b_ExtrapolatedMuonTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink", &ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vertexLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelHoles", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPixelDeadSensors", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTHoles", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfSCTDeadSensors", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink", &ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.chiSquared", &ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared, &b_ExtrapolatedMuonTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberDoF", &ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.d0", &ExtrapolatedMuonTrackParticlesAuxDyn_d0, &b_ExtrapolatedMuonTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.z0", &ExtrapolatedMuonTrackParticlesAuxDyn_z0, &b_ExtrapolatedMuonTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.theta", &ExtrapolatedMuonTrackParticlesAuxDyn_theta, &b_ExtrapolatedMuonTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.qOverP", &ExtrapolatedMuonTrackParticlesAuxDyn_qOverP, &b_ExtrapolatedMuonTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.definingParametersCovMatrix", &ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix, &b_ExtrapolatedMuonTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.vz", &ExtrapolatedMuonTrackParticlesAuxDyn_vz, &b_ExtrapolatedMuonTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfTRTHits", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfTRTOutliers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPrecisionLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPhiLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.numberOfPhiHoleLayers", &ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_ExtrapolatedMuonTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectChId", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectChId);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectDeltaAngle", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaAngle);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectDeltaTrans", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectDeltaTrans);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaAngle", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaAngle);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.alignEffectSigmaDeltaTrans", &ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans, &b_ExtrapolatedMuonTrackParticlesAuxDyn_alignEffectSigmaDeltaTrans);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.trackParticleLinks", &GSFConversionVerticesAuxDyn_trackParticleLinks, &b_GSFConversionVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.neutralParticleLinks", &GSFConversionVerticesAuxDyn_neutralParticleLinks, &b_GSFConversionVerticesAuxDyn_neutralParticleLinks);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.px", &GSFConversionVerticesAuxDyn_px, &b_GSFConversionVerticesAuxDyn_px);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.py", &GSFConversionVerticesAuxDyn_py, &b_GSFConversionVerticesAuxDyn_py);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pz", &GSFConversionVerticesAuxDyn_pz, &b_GSFConversionVerticesAuxDyn_pz);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.x", &GSFConversionVerticesAuxDyn_x, &b_GSFConversionVerticesAuxDyn_x);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.y", &GSFConversionVerticesAuxDyn_y, &b_GSFConversionVerticesAuxDyn_y);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.z", &GSFConversionVerticesAuxDyn_z, &b_GSFConversionVerticesAuxDyn_z);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.minRfirstHit", &GSFConversionVerticesAuxDyn_minRfirstHit, &b_GSFConversionVerticesAuxDyn_minRfirstHit);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pt1", &GSFConversionVerticesAuxDyn_pt1, &b_GSFConversionVerticesAuxDyn_pt1);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pt2", &GSFConversionVerticesAuxDyn_pt2, &b_GSFConversionVerticesAuxDyn_pt2);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.phi", &GSFTrackParticlesAuxDyn_phi, &b_GSFTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vertexLink", &GSFTrackParticlesAuxDyn_vertexLink_, &b_GSFTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vertexLink.m_persKey", GSFTrackParticlesAuxDyn_vertexLink_m_persKey, &b_GSFTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vertexLink.m_persIndex", GSFTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelHits", &GSFTrackParticlesAuxDyn_numberOfPixelHits, &b_GSFTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelDeadSensors", &GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_GSFTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTHits", &GSFTrackParticlesAuxDyn_numberOfSCTHits, &b_GSFTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTDeadSensors", &GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_GSFTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerHits", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink", &GSFTrackParticlesAuxDyn_truthParticleLink_, &b_GSFTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persKey", GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persIndex", GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.chiSquared", &GSFTrackParticlesAuxDyn_chiSquared, &b_GSFTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.d0", &GSFTrackParticlesAuxDyn_d0, &b_GSFTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.z0", &GSFTrackParticlesAuxDyn_z0, &b_GSFTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.theta", &GSFTrackParticlesAuxDyn_theta, &b_GSFTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.qOverP", &GSFTrackParticlesAuxDyn_qOverP, &b_GSFTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.definingParametersCovMatrix", &GSFTrackParticlesAuxDyn_definingParametersCovMatrix, &b_GSFTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.vz", &GSFTrackParticlesAuxDyn_vz, &b_GSFTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfInnermostPixelLayerOutliers", &GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers, &b_GSFTrackParticlesAuxDyn_numberOfInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.expectInnermostPixelLayerHit", &GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit, &b_GSFTrackParticlesAuxDyn_expectInnermostPixelLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerOutliers", &GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers, &b_GSFTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.expectNextToInnermostPixelLayerHit", &GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit, &b_GSFTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfPixelOutliers", &GSFTrackParticlesAuxDyn_numberOfPixelOutliers, &b_GSFTrackParticlesAuxDyn_numberOfPixelOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.numberOfSCTOutliers", &GSFTrackParticlesAuxDyn_numberOfSCTOutliers, &b_GSFTrackParticlesAuxDyn_numberOfSCTOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle", &GSFTrackParticlesAuxDyn_originalTrackParticle_, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.pt", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.eta", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn.phi", &HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi, &b_HLT_xAOD__ElectronContainer_egamma_ElectronsAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.pt", &HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_pt, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.eta", &HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_eta, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.phi", &HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_phi, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.author", &HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_author, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_author);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.muonType", &HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_muonType, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_muonType);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.inDetTrackParticleLink", &HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.inDetTrackParticleLink.m_persKey", HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persKey, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn.inDetTrackParticleLink.m_persIndex", HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persIndex, &b_HLT_xAOD__MuonContainer_MuonEFInfoAuxDyn_inDetTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.pt", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_pt, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.eta", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_eta, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.phi", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_phi, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.author", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_author, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_author);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.muonType", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_muonType, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_muonType);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.inDetTrackParticleLink", &HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.inDetTrackParticleLink.m_persKey", HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persKey, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn.inDetTrackParticleLink.m_persIndex", HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persIndex, &b_HLT_xAOD__MuonContainer_MuonEFInfo_FullScanAuxDyn_inDetTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.pt", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_pt);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.eta", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_eta);
   fChain->SetBranchAddress("HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn.phi", &HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi, &b_HLT_xAOD__PhotonContainer_egamma_PhotonsAuxDyn_phi);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn.ex", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ex, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ex);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn.ey", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ey, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ey);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn.ez", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ez, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_ez);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn.sumEt", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumEt, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumEt);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn.sumE", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumE, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingETAuxDyn_sumE);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn.ex", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ex, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ex);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn.ey", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ey, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ey);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn.ez", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ez, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_ez);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn.sumEt", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumEt, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumEt);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn.sumE", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumE, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_mhtAuxDyn_sumE);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn.ex", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ex, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ex);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn.ey", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ey, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ey);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn.ez", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ez, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_ez);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn.sumEt", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumEt, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumEt);
   fChain->SetBranchAddress("HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn.sumE", &HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumE, &b_HLT_xAOD__TrigMissingETContainer_TrigEFMissingET_topocl_PUCAuxDyn_sumE);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.phi", &InDetTrackParticlesAuxDyn_phi, &b_InDetTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vertexLink", &InDetTrackParticlesAuxDyn_vertexLink_, &b_InDetTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vertexLink.m_persKey", InDetTrackParticlesAuxDyn_vertexLink_m_persKey, &b_InDetTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vertexLink.m_persIndex", InDetTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelHits", &InDetTrackParticlesAuxDyn_numberOfPixelHits, &b_InDetTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelHoles", &InDetTrackParticlesAuxDyn_numberOfPixelHoles, &b_InDetTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelSharedHits", &InDetTrackParticlesAuxDyn_numberOfPixelSharedHits, &b_InDetTrackParticlesAuxDyn_numberOfPixelSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPixelDeadSensors", &InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_InDetTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTHits", &InDetTrackParticlesAuxDyn_numberOfSCTHits, &b_InDetTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTHoles", &InDetTrackParticlesAuxDyn_numberOfSCTHoles, &b_InDetTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTSharedHits", &InDetTrackParticlesAuxDyn_numberOfSCTSharedHits, &b_InDetTrackParticlesAuxDyn_numberOfSCTSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfSCTDeadSensors", &InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_InDetTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfNextToInnermostPixelLayerHits", &InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits, &b_InDetTrackParticlesAuxDyn_numberOfNextToInnermostPixelLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfInnermostPixelLayerHits", &InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits, &b_InDetTrackParticlesAuxDyn_numberOfInnermostPixelLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink", &InDetTrackParticlesAuxDyn_truthParticleLink_, &b_InDetTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persKey", InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persIndex", InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.chiSquared", &InDetTrackParticlesAuxDyn_chiSquared, &b_InDetTrackParticlesAuxDyn_chiSquared);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberDoF", &InDetTrackParticlesAuxDyn_numberDoF, &b_InDetTrackParticlesAuxDyn_numberDoF);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.d0", &InDetTrackParticlesAuxDyn_d0, &b_InDetTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.z0", &InDetTrackParticlesAuxDyn_z0, &b_InDetTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.theta", &InDetTrackParticlesAuxDyn_theta, &b_InDetTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.qOverP", &InDetTrackParticlesAuxDyn_qOverP, &b_InDetTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.definingParametersCovMatrix", &InDetTrackParticlesAuxDyn_definingParametersCovMatrix, &b_InDetTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.vz", &InDetTrackParticlesAuxDyn_vz, &b_InDetTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfTRTHits", &InDetTrackParticlesAuxDyn_numberOfTRTHits, &b_InDetTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfTRTOutliers", &InDetTrackParticlesAuxDyn_numberOfTRTOutliers, &b_InDetTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPrecisionLayers", &InDetTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_InDetTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_InDetTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPhiLayers", &InDetTrackParticlesAuxDyn_numberOfPhiLayers, &b_InDetTrackParticlesAuxDyn_numberOfPhiLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.numberOfPhiHoleLayers", &InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers, &b_InDetTrackParticlesAuxDyn_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.expectInnermostPixelLayerHit", &InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit, &b_InDetTrackParticlesAuxDyn_expectInnermostPixelLayerHit);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.expectNextToInnermostPixelLayerHit", &InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit, &b_InDetTrackParticlesAuxDyn_expectNextToInnermostPixelLayerHit);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthMatchProbability", &InDetTrackParticlesAuxDyn_truthMatchProbability, &b_InDetTrackParticlesAuxDyn_truthMatchProbability);
   fChain->SetBranchAddress("Kt4EMPFlowEventShapeAuxDyn.Density", &Kt4EMPFlowEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("Kt4EMTopoOriginEventShapeAuxDyn.Density", &Kt4EMTopoOriginEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("Kt4LCTopoOriginEventShapeAuxDyn.Density", &Kt4LCTopoOriginEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.thrNames", &LVL1EmTauRoIsAuxDyn_thrNames, &b_LVL1EmTauRoIsAuxDyn_thrNames);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.thrValues", &LVL1EmTauRoIsAuxDyn_thrValues, &b_LVL1EmTauRoIsAuxDyn_thrValues);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.eta", &LVL1EmTauRoIsAuxDyn_eta, &b_LVL1EmTauRoIsAuxDyn_eta);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.phi", &LVL1EmTauRoIsAuxDyn_phi, &b_LVL1EmTauRoIsAuxDyn_phi);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.roiWord", &LVL1EmTauRoIsAuxDyn_roiWord, &b_LVL1EmTauRoIsAuxDyn_roiWord);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.etScale", &LVL1EmTauRoIsAuxDyn_etScale, &b_LVL1EmTauRoIsAuxDyn_etScale);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.thrPattern", &LVL1EmTauRoIsAuxDyn_thrPattern, &b_LVL1EmTauRoIsAuxDyn_thrPattern);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.core", &LVL1EmTauRoIsAuxDyn_core, &b_LVL1EmTauRoIsAuxDyn_core);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.emClus", &LVL1EmTauRoIsAuxDyn_emClus, &b_LVL1EmTauRoIsAuxDyn_emClus);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.tauClus", &LVL1EmTauRoIsAuxDyn_tauClus, &b_LVL1EmTauRoIsAuxDyn_tauClus);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.emIsol", &LVL1EmTauRoIsAuxDyn_emIsol, &b_LVL1EmTauRoIsAuxDyn_emIsol);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.hadIsol", &LVL1EmTauRoIsAuxDyn_hadIsol, &b_LVL1EmTauRoIsAuxDyn_hadIsol);
   fChain->SetBranchAddress("LVL1EmTauRoIsAuxDyn.hadCore", &LVL1EmTauRoIsAuxDyn_hadCore, &b_LVL1EmTauRoIsAuxDyn_hadCore);
   fChain->SetBranchAddress("LVL1MuonRoIsAuxDyn.eta", &LVL1MuonRoIsAuxDyn_eta, &b_LVL1MuonRoIsAuxDyn_eta);
   fChain->SetBranchAddress("LVL1MuonRoIsAuxDyn.phi", &LVL1MuonRoIsAuxDyn_phi, &b_LVL1MuonRoIsAuxDyn_phi);
   fChain->SetBranchAddress("LVL1MuonRoIsAuxDyn.roiWord", &LVL1MuonRoIsAuxDyn_roiWord, &b_LVL1MuonRoIsAuxDyn_roiWord);
   fChain->SetBranchAddress("LVL1MuonRoIsAuxDyn.thrName", &LVL1MuonRoIsAuxDyn_thrName, &b_LVL1MuonRoIsAuxDyn_thrName);
   fChain->SetBranchAddress("LVL1MuonRoIsAuxDyn.thrValue", &LVL1MuonRoIsAuxDyn_thrValue, &b_LVL1MuonRoIsAuxDyn_thrValue);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.name", &MET_Core_AntiKt4EMPFlowAuxDyn_name, &b_MET_Core_AntiKt4EMPFlowAuxDyn_name);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.mpx", &MET_Core_AntiKt4EMPFlowAuxDyn_mpx, &b_MET_Core_AntiKt4EMPFlowAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.mpy", &MET_Core_AntiKt4EMPFlowAuxDyn_mpy, &b_MET_Core_AntiKt4EMPFlowAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.sumet", &MET_Core_AntiKt4EMPFlowAuxDyn_sumet, &b_MET_Core_AntiKt4EMPFlowAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMPFlowAuxDyn.source", &MET_Core_AntiKt4EMPFlowAuxDyn_source, &b_MET_Core_AntiKt4EMPFlowAuxDyn_source);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.name", &MET_Core_AntiKt4EMTopoAuxDyn_name, &b_MET_Core_AntiKt4EMTopoAuxDyn_name);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.mpx", &MET_Core_AntiKt4EMTopoAuxDyn_mpx, &b_MET_Core_AntiKt4EMTopoAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.mpy", &MET_Core_AntiKt4EMTopoAuxDyn_mpy, &b_MET_Core_AntiKt4EMTopoAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.sumet", &MET_Core_AntiKt4EMTopoAuxDyn_sumet, &b_MET_Core_AntiKt4EMTopoAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Core_AntiKt4EMTopoAuxDyn.source", &MET_Core_AntiKt4EMTopoAuxDyn_source, &b_MET_Core_AntiKt4EMTopoAuxDyn_source);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlowAuxDyn.name", &MET_Reference_AntiKt4EMPFlowAuxDyn_name, &b_MET_Reference_AntiKt4EMPFlowAuxDyn_name);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlowAuxDyn.mpx", &MET_Reference_AntiKt4EMPFlowAuxDyn_mpx, &b_MET_Reference_AntiKt4EMPFlowAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlowAuxDyn.mpy", &MET_Reference_AntiKt4EMPFlowAuxDyn_mpy, &b_MET_Reference_AntiKt4EMPFlowAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlowAuxDyn.sumet", &MET_Reference_AntiKt4EMPFlowAuxDyn_sumet, &b_MET_Reference_AntiKt4EMPFlowAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMPFlowAuxDyn.source", &MET_Reference_AntiKt4EMPFlowAuxDyn_source, &b_MET_Reference_AntiKt4EMPFlowAuxDyn_source);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.name", &MET_Reference_AntiKt4EMTopoAuxDyn_name, &b_MET_Reference_AntiKt4EMTopoAuxDyn_name);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.mpx", &MET_Reference_AntiKt4EMTopoAuxDyn_mpx, &b_MET_Reference_AntiKt4EMTopoAuxDyn_mpx);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.mpy", &MET_Reference_AntiKt4EMTopoAuxDyn_mpy, &b_MET_Reference_AntiKt4EMTopoAuxDyn_mpy);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.sumet", &MET_Reference_AntiKt4EMTopoAuxDyn_sumet, &b_MET_Reference_AntiKt4EMTopoAuxDyn_sumet);
   fChain->SetBranchAddress("MET_Reference_AntiKt4EMTopoAuxDyn.source", &MET_Reference_AntiKt4EMTopoAuxDyn_source, &b_MET_Reference_AntiKt4EMTopoAuxDyn_source);
   fChain->SetBranchAddress("MET_TrackAuxDyn.name", &MET_TrackAuxDyn_name, &b_MET_TrackAuxDyn_name);
   fChain->SetBranchAddress("MET_TrackAuxDyn.mpx", &MET_TrackAuxDyn_mpx, &b_MET_TrackAuxDyn_mpx);
   fChain->SetBranchAddress("MET_TrackAuxDyn.mpy", &MET_TrackAuxDyn_mpy, &b_MET_TrackAuxDyn_mpy);
   fChain->SetBranchAddress("MET_TruthAuxDyn.name", &MET_TruthAuxDyn_name, &b_MET_TruthAuxDyn_name);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpx", &MET_TruthAuxDyn_mpx, &b_MET_TruthAuxDyn_mpx);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpy", &MET_TruthAuxDyn_mpy, &b_MET_TruthAuxDyn_mpy);
   fChain->SetBranchAddress("MET_TruthAuxDyn.sumet", &MET_TruthAuxDyn_sumet, &b_MET_TruthAuxDyn_sumet);
   fChain->SetBranchAddress("MET_TruthAuxDyn.source", &MET_TruthAuxDyn_source, &b_MET_TruthAuxDyn_source);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.phi", &MuonSpectrometerTrackParticlesAuxDyn_phi, &b_MuonSpectrometerTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vertexLink", &MuonSpectrometerTrackParticlesAuxDyn_vertexLink_, &b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vertexLink.m_persKey", MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey, &b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vertexLink.m_persIndex", MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex, &b_MuonSpectrometerTrackParticlesAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink", &MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink.m_persKey", MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.truthParticleLink.m_persIndex", MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_MuonSpectrometerTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.d0", &MuonSpectrometerTrackParticlesAuxDyn_d0, &b_MuonSpectrometerTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.z0", &MuonSpectrometerTrackParticlesAuxDyn_z0, &b_MuonSpectrometerTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.theta", &MuonSpectrometerTrackParticlesAuxDyn_theta, &b_MuonSpectrometerTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.qOverP", &MuonSpectrometerTrackParticlesAuxDyn_qOverP, &b_MuonSpectrometerTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.definingParametersCovMatrix", &MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix, &b_MuonSpectrometerTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("MuonSpectrometerTrackParticlesAuxDyn.vz", &MuonSpectrometerTrackParticlesAuxDyn_vz, &b_MuonSpectrometerTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("MuonsAuxDyn.pt", &MuonsAuxDyn_pt, &b_MuonsAuxDyn_pt);
   fChain->SetBranchAddress("MuonsAuxDyn.eta", &MuonsAuxDyn_eta, &b_MuonsAuxDyn_eta);
   fChain->SetBranchAddress("MuonsAuxDyn.phi", &MuonsAuxDyn_phi, &b_MuonsAuxDyn_phi);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSegmentLinks", &MuonsAuxDyn_muonSegmentLinks, &b_MuonsAuxDyn_muonSegmentLinks);
   fChain->SetBranchAddress("MuonsAuxDyn.charge", &MuonsAuxDyn_charge, &b_MuonsAuxDyn_charge);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30_TightTTVA_pt1000", &MuonsAuxDyn_ptvarcone30_TightTTVA_pt1000, &b_MuonsAuxDyn_ptvarcone30_TightTTVA_pt1000);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20_TightTTVA_pt1000", &MuonsAuxDyn_ptcone20_TightTTVA_pt1000, &b_MuonsAuxDyn_ptcone20_TightTTVA_pt1000);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30_TightTTVA_pt500", &MuonsAuxDyn_ptvarcone30_TightTTVA_pt500, &b_MuonsAuxDyn_ptvarcone30_TightTTVA_pt500);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20_TightTTVA_pt500", &MuonsAuxDyn_ptcone20_TightTTVA_pt500, &b_MuonsAuxDyn_ptcone20_TightTTVA_pt500);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone20", &MuonsAuxDyn_topoetcone20, &b_MuonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone20", &MuonsAuxDyn_ptvarcone20, &b_MuonsAuxDyn_ptvarcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone30", &MuonsAuxDyn_ptvarcone30, &b_MuonsAuxDyn_ptvarcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink", &MuonsAuxDyn_truthParticleLink_, &b_MuonsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink.m_persKey", MuonsAuxDyn_truthParticleLink_m_persKey, &b_MuonsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.truthParticleLink.m_persIndex", MuonsAuxDyn_truthParticleLink_m_persIndex, &b_MuonsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfPrecisionLayers", &MuonsAuxDyn_numberOfPrecisionLayers, &b_MuonsAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfPrecisionHoleLayers", &MuonsAuxDyn_numberOfPrecisionHoleLayers, &b_MuonsAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.author", &MuonsAuxDyn_author, &b_MuonsAuxDyn_author);
   fChain->SetBranchAddress("MuonsAuxDyn.neflowisol20", &MuonsAuxDyn_neflowisol20, &b_MuonsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone40", &MuonsAuxDyn_topoetcone40, &b_MuonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.truthOrigin", &MuonsAuxDyn_truthOrigin, &b_MuonsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("MuonsAuxDyn.truthType", &MuonsAuxDyn_truthType, &b_MuonsAuxDyn_truthType);
   fChain->SetBranchAddress("MuonsAuxDyn.muonType", &MuonsAuxDyn_muonType, &b_MuonsAuxDyn_muonType);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink", &MuonsAuxDyn_inDetTrackParticleLink_, &b_MuonsAuxDyn_inDetTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink.m_persKey", MuonsAuxDyn_inDetTrackParticleLink_m_persKey, &b_MuonsAuxDyn_inDetTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.inDetTrackParticleLink.m_persIndex", MuonsAuxDyn_inDetTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_inDetTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone20", &MuonsAuxDyn_ptcone20, &b_MuonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone30", &MuonsAuxDyn_ptcone30, &b_MuonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.ptcone40", &MuonsAuxDyn_ptcone40, &b_MuonsAuxDyn_ptcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.ptvarcone40", &MuonsAuxDyn_ptvarcone40, &b_MuonsAuxDyn_ptvarcone40);
   fChain->SetBranchAddress("MuonsAuxDyn.topoetcone30", &MuonsAuxDyn_topoetcone30, &b_MuonsAuxDyn_topoetcone30);
   fChain->SetBranchAddress("MuonsAuxDyn.allAuthors", &MuonsAuxDyn_allAuthors, &b_MuonsAuxDyn_allAuthors);
   fChain->SetBranchAddress("MuonsAuxDyn.quality", &MuonsAuxDyn_quality, &b_MuonsAuxDyn_quality);
   fChain->SetBranchAddress("MuonsAuxDyn.energyLossType", &MuonsAuxDyn_energyLossType, &b_MuonsAuxDyn_energyLossType);
   fChain->SetBranchAddress("MuonsAuxDyn.innerSmallHits", &MuonsAuxDyn_innerSmallHits, &b_MuonsAuxDyn_innerSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerLargeHits", &MuonsAuxDyn_innerLargeHits, &b_MuonsAuxDyn_innerLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleSmallHits", &MuonsAuxDyn_middleSmallHits, &b_MuonsAuxDyn_middleSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleLargeHits", &MuonsAuxDyn_middleLargeHits, &b_MuonsAuxDyn_middleLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerSmallHits", &MuonsAuxDyn_outerSmallHits, &b_MuonsAuxDyn_outerSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerLargeHits", &MuonsAuxDyn_outerLargeHits, &b_MuonsAuxDyn_outerLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedSmallHits", &MuonsAuxDyn_extendedSmallHits, &b_MuonsAuxDyn_extendedSmallHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedLargeHits", &MuonsAuxDyn_extendedLargeHits, &b_MuonsAuxDyn_extendedLargeHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerSmallHoles", &MuonsAuxDyn_innerSmallHoles, &b_MuonsAuxDyn_innerSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.innerLargeHoles", &MuonsAuxDyn_innerLargeHoles, &b_MuonsAuxDyn_innerLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.middleSmallHoles", &MuonsAuxDyn_middleSmallHoles, &b_MuonsAuxDyn_middleSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.middleLargeHoles", &MuonsAuxDyn_middleLargeHoles, &b_MuonsAuxDyn_middleLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.outerSmallHoles", &MuonsAuxDyn_outerSmallHoles, &b_MuonsAuxDyn_outerSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.outerLargeHoles", &MuonsAuxDyn_outerLargeHoles, &b_MuonsAuxDyn_outerLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedSmallHoles", &MuonsAuxDyn_extendedSmallHoles, &b_MuonsAuxDyn_extendedSmallHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedLargeHoles", &MuonsAuxDyn_extendedLargeHoles, &b_MuonsAuxDyn_extendedLargeHoles);
   fChain->SetBranchAddress("MuonsAuxDyn.cscEtaHits", &MuonsAuxDyn_cscEtaHits, &b_MuonsAuxDyn_cscEtaHits);
   fChain->SetBranchAddress("MuonsAuxDyn.cscUnspoiledEtaHits", &MuonsAuxDyn_cscUnspoiledEtaHits, &b_MuonsAuxDyn_cscUnspoiledEtaHits);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink", &MuonsAuxDyn_muonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.muonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_muonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink", &MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.extrapolatedMuonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_extrapolatedMuonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink", &MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink.m_persKey", MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.msOnlyExtrapolatedMuonSpectrometerTrackParticleLink.m_persIndex", MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_msOnlyExtrapolatedMuonSpectrometerTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink", &MuonsAuxDyn_combinedTrackParticleLink_, &b_MuonsAuxDyn_combinedTrackParticleLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink.m_persKey", MuonsAuxDyn_combinedTrackParticleLink_m_persKey, &b_MuonsAuxDyn_combinedTrackParticleLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackParticleLink.m_persIndex", MuonsAuxDyn_combinedTrackParticleLink_m_persIndex, &b_MuonsAuxDyn_combinedTrackParticleLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink", &MuonsAuxDyn_clusterLink_, &b_MuonsAuxDyn_clusterLink_);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink.m_persKey", MuonsAuxDyn_clusterLink_m_persKey, &b_MuonsAuxDyn_clusterLink_m_persKey);
   fChain->SetBranchAddress("MuonsAuxDyn.clusterLink.m_persIndex", MuonsAuxDyn_clusterLink_m_persIndex, &b_MuonsAuxDyn_clusterLink_m_persIndex);
   fChain->SetBranchAddress("MuonsAuxDyn.spectrometerFieldIntegral", &MuonsAuxDyn_spectrometerFieldIntegral, &b_MuonsAuxDyn_spectrometerFieldIntegral);
   fChain->SetBranchAddress("MuonsAuxDyn.scatteringCurvatureSignificance", &MuonsAuxDyn_scatteringCurvatureSignificance, &b_MuonsAuxDyn_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.scatteringNeighbourSignificance", &MuonsAuxDyn_scatteringNeighbourSignificance, &b_MuonsAuxDyn_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.momentumBalanceSignificance", &MuonsAuxDyn_momentumBalanceSignificance, &b_MuonsAuxDyn_momentumBalanceSignificance);
   fChain->SetBranchAddress("MuonsAuxDyn.segmentDeltaEta", &MuonsAuxDyn_segmentDeltaEta, &b_MuonsAuxDyn_segmentDeltaEta);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloLRLikelihood", &MuonsAuxDyn_CaloLRLikelihood, &b_MuonsAuxDyn_CaloLRLikelihood);
   fChain->SetBranchAddress("MuonsAuxDyn.EnergyLoss", &MuonsAuxDyn_EnergyLoss, &b_MuonsAuxDyn_EnergyLoss);
   fChain->SetBranchAddress("MuonsAuxDyn.CaloMuonIDTag", &MuonsAuxDyn_CaloMuonIDTag, &b_MuonsAuxDyn_CaloMuonIDTag);
   fChain->SetBranchAddress("MuonsAuxDyn.InnerDetectorPt", &MuonsAuxDyn_InnerDetectorPt, &b_MuonsAuxDyn_InnerDetectorPt);
   fChain->SetBranchAddress("MuonsAuxDyn.MuonSpectrometerPt", &MuonsAuxDyn_MuonSpectrometerPt, &b_MuonsAuxDyn_MuonSpectrometerPt);
   fChain->SetBranchAddress("MuonsAuxDyn.combinedTrackOutBoundsPrecisionHits", &MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits, &b_MuonsAuxDyn_combinedTrackOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedClosePrecisionHits", &MuonsAuxDyn_extendedClosePrecisionHits, &b_MuonsAuxDyn_extendedClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.extendedOutBoundsPrecisionHits", &MuonsAuxDyn_extendedOutBoundsPrecisionHits, &b_MuonsAuxDyn_extendedOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerClosePrecisionHits", &MuonsAuxDyn_innerClosePrecisionHits, &b_MuonsAuxDyn_innerClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.innerOutBoundsPrecisionHits", &MuonsAuxDyn_innerOutBoundsPrecisionHits, &b_MuonsAuxDyn_innerOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.isEndcapGoodLayers", &MuonsAuxDyn_isEndcapGoodLayers, &b_MuonsAuxDyn_isEndcapGoodLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.isSmallGoodSectors", &MuonsAuxDyn_isSmallGoodSectors, &b_MuonsAuxDyn_isSmallGoodSectors);
   fChain->SetBranchAddress("MuonsAuxDyn.middleClosePrecisionHits", &MuonsAuxDyn_middleClosePrecisionHits, &b_MuonsAuxDyn_middleClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.middleOutBoundsPrecisionHits", &MuonsAuxDyn_middleOutBoundsPrecisionHits, &b_MuonsAuxDyn_middleOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.numberOfGoodPrecisionLayers", &MuonsAuxDyn_numberOfGoodPrecisionLayers, &b_MuonsAuxDyn_numberOfGoodPrecisionLayers);
   fChain->SetBranchAddress("MuonsAuxDyn.outerClosePrecisionHits", &MuonsAuxDyn_outerClosePrecisionHits, &b_MuonsAuxDyn_outerClosePrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.outerOutBoundsPrecisionHits", &MuonsAuxDyn_outerOutBoundsPrecisionHits, &b_MuonsAuxDyn_outerOutBoundsPrecisionHits);
   fChain->SetBranchAddress("MuonsAuxDyn.DFCommonGoodMuon", &MuonsAuxDyn_DFCommonGoodMuon, &b_MuonsAuxDyn_DFCommonGoodMuon);
   fChain->SetBranchAddress("NeutralParticleFlowIsoCentralEventShapeAuxDyn.Density", &NeutralParticleFlowIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("NeutralParticleFlowIsoForwardEventShapeAuxDyn.Density", &NeutralParticleFlowIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("PhotonsAuxDyn.pt", &PhotonsAuxDyn_pt, &b_PhotonsAuxDyn_pt);
   fChain->SetBranchAddress("PhotonsAuxDyn.eta", &PhotonsAuxDyn_eta, &b_PhotonsAuxDyn_eta);
   fChain->SetBranchAddress("PhotonsAuxDyn.phi", &PhotonsAuxDyn_phi, &b_PhotonsAuxDyn_phi);
   fChain->SetBranchAddress("PhotonsAuxDyn.m", &PhotonsAuxDyn_m, &b_PhotonsAuxDyn_m);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone20_TightTTVA_pt1000", &PhotonsAuxDyn_ptcone20_TightTTVA_pt1000, &b_PhotonsAuxDyn_ptcone20_TightTTVA_pt1000);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20", &PhotonsAuxDyn_topoetcone20, &b_PhotonsAuxDyn_topoetcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink", &PhotonsAuxDyn_truthParticleLink_, &b_PhotonsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink.m_persKey", PhotonsAuxDyn_truthParticleLink_m_persKey, &b_PhotonsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthParticleLink.m_persIndex", PhotonsAuxDyn_truthParticleLink_m_persIndex, &b_PhotonsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.caloClusterLinks", &PhotonsAuxDyn_caloClusterLinks, &b_PhotonsAuxDyn_caloClusterLinks);
   fChain->SetBranchAddress("PhotonsAuxDyn.author", &PhotonsAuxDyn_author, &b_PhotonsAuxDyn_author);
   fChain->SetBranchAddress("PhotonsAuxDyn.OQ", &PhotonsAuxDyn_OQ, &b_PhotonsAuxDyn_OQ);
   fChain->SetBranchAddress("PhotonsAuxDyn.f1", &PhotonsAuxDyn_f1, &b_PhotonsAuxDyn_f1);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink", &PhotonsAuxDyn_ambiguityLink_, &b_PhotonsAuxDyn_ambiguityLink_);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink.m_persKey", PhotonsAuxDyn_ambiguityLink_m_persKey, &b_PhotonsAuxDyn_ambiguityLink_m_persKey);
   fChain->SetBranchAddress("PhotonsAuxDyn.ambiguityLink.m_persIndex", PhotonsAuxDyn_ambiguityLink_m_persIndex, &b_PhotonsAuxDyn_ambiguityLink_m_persIndex);
   fChain->SetBranchAddress("PhotonsAuxDyn.core57cellsEnergyCorrection", &PhotonsAuxDyn_core57cellsEnergyCorrection, &b_PhotonsAuxDyn_core57cellsEnergyCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.neflowisol20", &PhotonsAuxDyn_neflowisol20, &b_PhotonsAuxDyn_neflowisol20);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone20ptCorrection", &PhotonsAuxDyn_topoetcone20ptCorrection, &b_PhotonsAuxDyn_topoetcone20ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40", &PhotonsAuxDyn_topoetcone40, &b_PhotonsAuxDyn_topoetcone40);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetconecoreConeEnergyCorrection", &PhotonsAuxDyn_topoetconecoreConeEnergyCorrection, &b_PhotonsAuxDyn_topoetconecoreConeEnergyCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetconecoreConeSCEnergyCorrection", &PhotonsAuxDyn_topoetconecoreConeSCEnergyCorrection, &b_PhotonsAuxDyn_topoetconecoreConeSCEnergyCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthOrigin", &PhotonsAuxDyn_truthOrigin, &b_PhotonsAuxDyn_truthOrigin);
   fChain->SetBranchAddress("PhotonsAuxDyn.truthType", &PhotonsAuxDyn_truthType, &b_PhotonsAuxDyn_truthType);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonCrackVetoCleaning", &PhotonsAuxDyn_DFCommonCrackVetoCleaning, &b_PhotonsAuxDyn_DFCommonCrackVetoCleaning);
   fChain->SetBranchAddress("PhotonsAuxDyn.ptcone20", &PhotonsAuxDyn_ptcone20, &b_PhotonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("PhotonsAuxDyn.Tight", &PhotonsAuxDyn_Tight, &b_PhotonsAuxDyn_Tight);
   fChain->SetBranchAddress("PhotonsAuxDyn.topoetcone40ptCorrection", &PhotonsAuxDyn_topoetcone40ptCorrection, &b_PhotonsAuxDyn_topoetcone40ptCorrection);
   fChain->SetBranchAddress("PhotonsAuxDyn.vertexLinks", &PhotonsAuxDyn_vertexLinks, &b_PhotonsAuxDyn_vertexLinks);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMLoose", &PhotonsAuxDyn_DFCommonPhotonsIsEMLoose, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMLoose);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTight", &PhotonsAuxDyn_DFCommonPhotonsIsEMTight, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTight);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTightIsEMValue", &PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightIsEMValue);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTightPtIncl", &PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtIncl, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtIncl);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsIsEMTightPtInclIsEMValue", &PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtInclIsEMValue, &b_PhotonsAuxDyn_DFCommonPhotonsIsEMTightPtInclIsEMValue);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsCleaning", &PhotonsAuxDyn_DFCommonPhotonsCleaning, &b_PhotonsAuxDyn_DFCommonPhotonsCleaning);
   fChain->SetBranchAddress("PhotonsAuxDyn.DFCommonPhotonsCleaningNoTime", &PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime, &b_PhotonsAuxDyn_DFCommonPhotonsCleaningNoTime);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.trackParticleLinks", &PrimaryVerticesAuxDyn_trackParticleLinks, &b_PrimaryVerticesAuxDyn_trackParticleLinks);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.neutralParticleLinks", &PrimaryVerticesAuxDyn_neutralParticleLinks, &b_PrimaryVerticesAuxDyn_neutralParticleLinks);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.x", &PrimaryVerticesAuxDyn_x, &b_PrimaryVerticesAuxDyn_x);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.y", &PrimaryVerticesAuxDyn_y, &b_PrimaryVerticesAuxDyn_y);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.z", &PrimaryVerticesAuxDyn_z, &b_PrimaryVerticesAuxDyn_z);
   fChain->SetBranchAddress("PrimaryVerticesAuxDyn.vertexType", &PrimaryVerticesAuxDyn_vertexType, &b_PrimaryVerticesAuxDyn_vertexType);
   fChain->SetBranchAddress("TauJetsAuxDyn.pt", &TauJetsAuxDyn_pt, &b_TauJetsAuxDyn_pt);
   fChain->SetBranchAddress("TauJetsAuxDyn.eta", &TauJetsAuxDyn_eta, &b_TauJetsAuxDyn_eta);
   fChain->SetBranchAddress("TauJetsAuxDyn.phi", &TauJetsAuxDyn_phi, &b_TauJetsAuxDyn_phi);
   fChain->SetBranchAddress("TauJetsAuxDyn.m", &TauJetsAuxDyn_m, &b_TauJetsAuxDyn_m);
   fChain->SetBranchAddress("TauJetsAuxDyn.jetLink", &TauJetsAuxDyn_jetLink_, &b_TauJetsAuxDyn_jetLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.jetLink.m_persKey", TauJetsAuxDyn_jetLink_m_persKey, &b_TauJetsAuxDyn_jetLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.jetLink.m_persIndex", TauJetsAuxDyn_jetLink_m_persIndex, &b_TauJetsAuxDyn_jetLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink", &TauJetsAuxDyn_vertexLink_, &b_TauJetsAuxDyn_vertexLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink.m_persKey", TauJetsAuxDyn_vertexLink_m_persKey, &b_TauJetsAuxDyn_vertexLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.vertexLink.m_persIndex", TauJetsAuxDyn_vertexLink_m_persIndex, &b_TauJetsAuxDyn_vertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink", &TauJetsAuxDyn_secondaryVertexLink_, &b_TauJetsAuxDyn_secondaryVertexLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink.m_persKey", TauJetsAuxDyn_secondaryVertexLink_m_persKey, &b_TauJetsAuxDyn_secondaryVertexLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.secondaryVertexLink.m_persIndex", TauJetsAuxDyn_secondaryVertexLink_m_persIndex, &b_TauJetsAuxDyn_secondaryVertexLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.hadronicPFOLinks", &TauJetsAuxDyn_hadronicPFOLinks, &b_TauJetsAuxDyn_hadronicPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.shotPFOLinks", &TauJetsAuxDyn_shotPFOLinks, &b_TauJetsAuxDyn_shotPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.chargedPFOLinks", &TauJetsAuxDyn_chargedPFOLinks, &b_TauJetsAuxDyn_chargedPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.neutralPFOLinks", &TauJetsAuxDyn_neutralPFOLinks, &b_TauJetsAuxDyn_neutralPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.pi0PFOLinks", &TauJetsAuxDyn_pi0PFOLinks, &b_TauJetsAuxDyn_pi0PFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.protoChargedPFOLinks", &TauJetsAuxDyn_protoChargedPFOLinks, &b_TauJetsAuxDyn_protoChargedPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.protoNeutralPFOLinks", &TauJetsAuxDyn_protoNeutralPFOLinks, &b_TauJetsAuxDyn_protoNeutralPFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.protoPi0PFOLinks", &TauJetsAuxDyn_protoPi0PFOLinks, &b_TauJetsAuxDyn_protoPi0PFOLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.tauTrackLinks", &TauJetsAuxDyn_tauTrackLinks, &b_TauJetsAuxDyn_tauTrackLinks);
   fChain->SetBranchAddress("TauJetsAuxDyn.charge", &TauJetsAuxDyn_charge, &b_TauJetsAuxDyn_charge);
   fChain->SetBranchAddress("TauJetsAuxDyn.RNNJetScore", &TauJetsAuxDyn_RNNJetScore, &b_TauJetsAuxDyn_RNNJetScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.RNNJetScoreSigTrans", &TauJetsAuxDyn_RNNJetScoreSigTrans, &b_TauJetsAuxDyn_RNNJetScoreSigTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleScore_retuned", &TauJetsAuxDyn_BDTEleScore_retuned, &b_TauJetsAuxDyn_BDTEleScore_retuned);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleScoreSigTrans_retuned", &TauJetsAuxDyn_BDTEleScoreSigTrans_retuned, &b_TauJetsAuxDyn_BDTEleScoreSigTrans_retuned);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthParticleLink", &TauJetsAuxDyn_truthParticleLink_, &b_TauJetsAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthParticleLink.m_persKey", TauJetsAuxDyn_truthParticleLink_m_persKey, &b_TauJetsAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthParticleLink.m_persIndex", TauJetsAuxDyn_truthParticleLink_m_persIndex, &b_TauJetsAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.ptDetectorAxis", &TauJetsAuxDyn_ptDetectorAxis, &b_TauJetsAuxDyn_ptDetectorAxis);
   fChain->SetBranchAddress("TauJetsAuxDyn.etaDetectorAxis", &TauJetsAuxDyn_etaDetectorAxis, &b_TauJetsAuxDyn_etaDetectorAxis);
   fChain->SetBranchAddress("TauJetsAuxDyn.mDetectorAxis", &TauJetsAuxDyn_mDetectorAxis, &b_TauJetsAuxDyn_mDetectorAxis);
   fChain->SetBranchAddress("TauJetsAuxDyn.ptFinalCalib", &TauJetsAuxDyn_ptFinalCalib, &b_TauJetsAuxDyn_ptFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.etaFinalCalib", &TauJetsAuxDyn_etaFinalCalib, &b_TauJetsAuxDyn_etaFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.phiFinalCalib", &TauJetsAuxDyn_phiFinalCalib, &b_TauJetsAuxDyn_phiFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.mFinalCalib", &TauJetsAuxDyn_mFinalCalib, &b_TauJetsAuxDyn_mFinalCalib);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTJetScore", &TauJetsAuxDyn_BDTJetScore, &b_TauJetsAuxDyn_BDTJetScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleScore", &TauJetsAuxDyn_BDTEleScore, &b_TauJetsAuxDyn_BDTEleScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.EleMatchLikelihoodScore", &TauJetsAuxDyn_EleMatchLikelihoodScore, &b_TauJetsAuxDyn_EleMatchLikelihoodScore);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTJetScoreSigTrans", &TauJetsAuxDyn_BDTJetScoreSigTrans, &b_TauJetsAuxDyn_BDTJetScoreSigTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.isTauFlags", &TauJetsAuxDyn_isTauFlags, &b_TauJetsAuxDyn_isTauFlags);
   fChain->SetBranchAddress("TauJetsAuxDyn.PanTau_DecayMode", &TauJetsAuxDyn_PanTau_DecayMode, &b_TauJetsAuxDyn_PanTau_DecayMode);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleScoreSigTrans", &TauJetsAuxDyn_BDTEleScoreSigTrans, &b_TauJetsAuxDyn_BDTEleScoreSigTrans);
   fChain->SetBranchAddress("TauJetsAuxDyn.electronLink", &TauJetsAuxDyn_electronLink_, &b_TauJetsAuxDyn_electronLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.electronLink.m_persKey", TauJetsAuxDyn_electronLink_m_persKey, &b_TauJetsAuxDyn_electronLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.electronLink.m_persIndex", TauJetsAuxDyn_electronLink_m_persIndex, &b_TauJetsAuxDyn_electronLink_m_persIndex);
   fChain->SetBranchAddress("TauJetsAuxDyn.eta_combined", &TauJetsAuxDyn_eta_combined, &b_TauJetsAuxDyn_eta_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.m_combined", &TauJetsAuxDyn_m_combined, &b_TauJetsAuxDyn_m_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.phi_combined", &TauJetsAuxDyn_phi_combined, &b_TauJetsAuxDyn_phi_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.pt_combined", &TauJetsAuxDyn_pt_combined, &b_TauJetsAuxDyn_pt_combined);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleLoose_retuned", &TauJetsAuxDyn_BDTEleLoose_retuned, &b_TauJetsAuxDyn_BDTEleLoose_retuned);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleMedium_retuned", &TauJetsAuxDyn_BDTEleMedium_retuned, &b_TauJetsAuxDyn_BDTEleMedium_retuned);
   fChain->SetBranchAddress("TauJetsAuxDyn.BDTEleTight_retuned", &TauJetsAuxDyn_BDTEleTight_retuned, &b_TauJetsAuxDyn_BDTEleTight_retuned);
   fChain->SetBranchAddress("TauJetsAuxDyn.seedJetWidth", &TauJetsAuxDyn_seedJetWidth, &b_TauJetsAuxDyn_seedJetWidth);
   fChain->SetBranchAddress("TauJetsAuxDyn.seedJetJvt", &TauJetsAuxDyn_seedJetJvt, &b_TauJetsAuxDyn_seedJetJvt);
   fChain->SetBranchAddress("TauJetsAuxDyn.seedTrackWidthPt1000", &TauJetsAuxDyn_seedTrackWidthPt1000, &b_TauJetsAuxDyn_seedTrackWidthPt1000);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthJetLink", &TauJetsAuxDyn_truthJetLink_, &b_TauJetsAuxDyn_truthJetLink_);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthJetLink.m_persKey", TauJetsAuxDyn_truthJetLink_m_persKey, &b_TauJetsAuxDyn_truthJetLink_m_persKey);
   fChain->SetBranchAddress("TauJetsAuxDyn.truthJetLink.m_persIndex", TauJetsAuxDyn_truthJetLink_m_persIndex, &b_TauJetsAuxDyn_truthJetLink_m_persIndex);
   fChain->SetBranchAddress("TauTracksAuxDyn.pt", &TauTracksAuxDyn_pt, &b_TauTracksAuxDyn_pt);
   fChain->SetBranchAddress("TauTracksAuxDyn.eta", &TauTracksAuxDyn_eta, &b_TauTracksAuxDyn_eta);
   fChain->SetBranchAddress("TauTracksAuxDyn.phi", &TauTracksAuxDyn_phi, &b_TauTracksAuxDyn_phi);
   fChain->SetBranchAddress("TauTracksAuxDyn.trackLinks", &TauTracksAuxDyn_trackLinks, &b_TauTracksAuxDyn_trackLinks);
   fChain->SetBranchAddress("TauTracksAuxDyn.flagSet", &TauTracksAuxDyn_flagSet, &b_TauTracksAuxDyn_flagSet);
   fChain->SetBranchAddress("TopoClusterIsoCentralEventShapeAuxDyn.Density", &TopoClusterIsoCentralEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("TopoClusterIsoForwardEventShapeAuxDyn.Density", &TopoClusterIsoForwardEventShapeAuxDyn_Density, &b_Density);
   fChain->SetBranchAddress("TrigMatch_HLT_e300_etcutAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_e300_etcutAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_e300_etcutAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_g200_etcutAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_g200_etcutAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_g200_etcutAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_g300_etcutAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_g300_etcutAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_g300_etcutAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodVtxLink", &TruthParticlesAuxDyn_prodVtxLink_, &b_TruthParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodVtxLink.m_persKey", TruthParticlesAuxDyn_prodVtxLink_m_persKey, &b_TruthParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodVtxLink.m_persIndex", TruthParticlesAuxDyn_prodVtxLink_m_persIndex, &b_TruthParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.decayVtxLink", &TruthParticlesAuxDyn_decayVtxLink_, &b_TruthParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.decayVtxLink.m_persKey", TruthParticlesAuxDyn_decayVtxLink_m_persKey, &b_TruthParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.decayVtxLink.m_persIndex", TruthParticlesAuxDyn_decayVtxLink_m_persIndex, &b_TruthParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.phi", &TruthParticlesAuxDyn_phi, &b_TruthParticlesAuxDyn_phi);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.m", &TruthParticlesAuxDyn_m, &b_TruthParticlesAuxDyn_m);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.px", &TruthParticlesAuxDyn_px, &b_TruthParticlesAuxDyn_px);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.py", &TruthParticlesAuxDyn_py, &b_TruthParticlesAuxDyn_py);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.pz", &TruthParticlesAuxDyn_pz, &b_TruthParticlesAuxDyn_pz);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.e", &TruthParticlesAuxDyn_e, &b_TruthParticlesAuxDyn_e);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.pdgId", &TruthParticlesAuxDyn_pdgId, &b_TruthParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.d0", &TruthParticlesAuxDyn_d0, &b_TruthParticlesAuxDyn_d0);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.z0", &TruthParticlesAuxDyn_z0, &b_TruthParticlesAuxDyn_z0);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.theta", &TruthParticlesAuxDyn_theta, &b_TruthParticlesAuxDyn_theta);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.qOverP", &TruthParticlesAuxDyn_qOverP, &b_TruthParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.barcode", &TruthParticlesAuxDyn_barcode, &b_TruthParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.status", &TruthParticlesAuxDyn_status, &b_TruthParticlesAuxDyn_status);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.polarizationPhi", &TruthParticlesAuxDyn_polarizationPhi, &b_TruthParticlesAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.polarizationTheta", &TruthParticlesAuxDyn_polarizationTheta, &b_TruthParticlesAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodR", &TruthParticlesAuxDyn_prodR, &b_TruthParticlesAuxDyn_prodR);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.prodZ", &TruthParticlesAuxDyn_prodZ, &b_TruthParticlesAuxDyn_prodZ);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.z0st", &TruthParticlesAuxDyn_z0st, &b_TruthParticlesAuxDyn_z0st);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.classifierParticleOrigin", &TruthParticlesAuxDyn_classifierParticleOrigin, &b_TruthParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.classifierParticleType", &TruthParticlesAuxDyn_classifierParticleType, &b_TruthParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.classifierParticleOutCome", &TruthParticlesAuxDyn_classifierParticleOutCome, &b_TruthParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthParticlesAuxDyn.dressedPhoton", &TruthParticlesAuxDyn_dressedPhoton, &b_TruthParticlesAuxDyn_dressedPhoton);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.incomingParticleLinks", &TruthVerticesAuxDyn_incomingParticleLinks, &b_TruthVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.outgoingParticleLinks", &TruthVerticesAuxDyn_outgoingParticleLinks, &b_TruthVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.x", &TruthVerticesAuxDyn_x, &b_TruthVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.y", &TruthVerticesAuxDyn_y, &b_TruthVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.z", &TruthVerticesAuxDyn_z, &b_TruthVerticesAuxDyn_z);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.barcode", &TruthVerticesAuxDyn_barcode, &b_TruthVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.id", &TruthVerticesAuxDyn_id, &b_TruthVerticesAuxDyn_id);
   fChain->SetBranchAddress("TruthVerticesAuxDyn.t", &TruthVerticesAuxDyn_t, &b_TruthVerticesAuxDyn_t);
   fChain->SetBranchAddress("egammaClustersAuxDyn.clusterSize", &egammaClustersAuxDyn_clusterSize, &b_egammaClustersAuxDyn_clusterSize);
   fChain->SetBranchAddress("egammaClustersAuxDyn.altE", &egammaClustersAuxDyn_altE, &b_egammaClustersAuxDyn_altE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calE", &egammaClustersAuxDyn_calE, &b_egammaClustersAuxDyn_calE);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calEta", &egammaClustersAuxDyn_calEta, &b_egammaClustersAuxDyn_calEta);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calPhi", &egammaClustersAuxDyn_calPhi, &b_egammaClustersAuxDyn_calPhi);
   fChain->SetBranchAddress("egammaClustersAuxDyn.calM", &egammaClustersAuxDyn_calM, &b_egammaClustersAuxDyn_calM);
   fChain->SetBranchAddress("egammaClustersAuxDyn.e_sampl", &egammaClustersAuxDyn_e_sampl, &b_egammaClustersAuxDyn_e_sampl);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETA2CALOFRAME", &egammaClustersAuxDyn_ETA2CALOFRAME, &b_egammaClustersAuxDyn_ETA2CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.ETACALOFRAME", &egammaClustersAuxDyn_ETACALOFRAME, &b_egammaClustersAuxDyn_ETACALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHI2CALOFRAME", &egammaClustersAuxDyn_PHI2CALOFRAME, &b_egammaClustersAuxDyn_PHI2CALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.PHICALOFRAME", &egammaClustersAuxDyn_PHICALOFRAME, &b_egammaClustersAuxDyn_PHICALOFRAME);
   fChain->SetBranchAddress("egammaClustersAuxDyn.constituentClusterLinks", &egammaClustersAuxDyn_constituentClusterLinks, &b_egammaClustersAuxDyn_constituentClusterLinks);
   fChain->SetBranchAddress("egammaClustersAuxDyn.eta_sampl", &egammaClustersAuxDyn_eta_sampl, &b_egammaClustersAuxDyn_eta_sampl);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ilooseAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu24_ilooseAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu24_ilooseAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_imediumAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu24_imediumAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu24_imediumAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ivarlooseAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu24_ivarlooseAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu24_ivarlooseAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu24_ivarmediumAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu24_ivarmediumAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu24_ivarmediumAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu26_imediumAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu26_imediumAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu26_imediumAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu26_ivarmediumAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu26_ivarmediumAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu26_ivarmediumAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu40AuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu40AuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu40AuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_mu50AuxDyn.TrigMatchedObjects", &TrigMatch_HLT_mu50AuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_mu50AuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_g120_looseAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_g120_looseAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_g120_looseAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_g140_looseAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_g140_looseAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_g140_looseAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_e140_lhloose_nod0AuxDyn.TrigMatchedObjects", &TrigMatch_HLT_e140_lhloose_nod0AuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_e140_lhloose_nod0AuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.phi", &InDetForwardTrackParticlesAuxDyn_phi, &b_InDetForwardTrackParticlesAuxDyn_phi);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPixelHits", &InDetForwardTrackParticlesAuxDyn_numberOfPixelHits, &b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHits);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPixelHoles", &InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles, &b_InDetForwardTrackParticlesAuxDyn_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPixelDeadSensors", &InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors, &b_InDetForwardTrackParticlesAuxDyn_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfSCTHits", &InDetForwardTrackParticlesAuxDyn_numberOfSCTHits, &b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHits);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfSCTHoles", &InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles, &b_InDetForwardTrackParticlesAuxDyn_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfSCTDeadSensors", &InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors, &b_InDetForwardTrackParticlesAuxDyn_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.d0", &InDetForwardTrackParticlesAuxDyn_d0, &b_InDetForwardTrackParticlesAuxDyn_d0);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.z0", &InDetForwardTrackParticlesAuxDyn_z0, &b_InDetForwardTrackParticlesAuxDyn_z0);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.theta", &InDetForwardTrackParticlesAuxDyn_theta, &b_InDetForwardTrackParticlesAuxDyn_theta);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.qOverP", &InDetForwardTrackParticlesAuxDyn_qOverP, &b_InDetForwardTrackParticlesAuxDyn_qOverP);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.definingParametersCovMatrix", &InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix, &b_InDetForwardTrackParticlesAuxDyn_definingParametersCovMatrix);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.vz", &InDetForwardTrackParticlesAuxDyn_vz, &b_InDetForwardTrackParticlesAuxDyn_vz);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfTRTHits", &InDetForwardTrackParticlesAuxDyn_numberOfTRTHits, &b_InDetForwardTrackParticlesAuxDyn_numberOfTRTHits);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfTRTOutliers", &InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers, &b_InDetForwardTrackParticlesAuxDyn_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPrecisionLayers", &InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers, &b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetForwardTrackParticlesAuxDyn.numberOfPrecisionHoleLayers", &InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers, &b_InDetForwardTrackParticlesAuxDyn_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("TrigMatch_HLT_e60_mediumAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_e60_mediumAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_e60_mediumAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_e60_lhmedium_nod0AuxDyn.TrigMatchedObjects", &TrigMatch_HLT_e60_lhmedium_nod0AuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_e60_lhmedium_nod0AuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_e24_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects);
   fChain->SetBranchAddress("TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAuxDyn.TrigMatchedObjects", &TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects, &b_TrigMatch_HLT_e26_lhtight_nod0_ivarlooseAuxDyn_TrigMatchedObjects);
   Notify();
}

Bool_t svj_tree_filler::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void svj_tree_filler::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t svj_tree_filler::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef svj_tree_filler_cxx
