#include "xAODAnaHelpers/TruthContainer.h"
#include <xAODAnaHelpers/HelperFunctions.h>
#include <iostream>
#include <xAODTruth/TruthVertex.h>
#include <xAODTruth/TruthParticle.h>
//#include "xAODTruth/TruthEventContainer.h"

using namespace xAH;

TruthContainer::TruthContainer(const std::string& name, const std::string& detailStr, float units)
  : ParticleContainer(name,detailStr,units,true)

{
  m_pdgId   = new std::vector<int>();
  m_status  = new std::vector<int>();
  m_barcode = new std::vector<int>();

  m_m = new std::vector<float>();
  m_px = new std::vector<float>();
  m_py = new std::vector<float>();
  m_pz = new std::vector<float>();
  m_e = new std::vector<float>();
  m_pt = new std::vector<float>();

  m_eta = new std::vector<float>();
  m_phi = new std::vector<float>();

  if(m_infoSwitch.m_type){
    m_is_higgs  = new std::vector<int>();
    m_is_bhad   = new std::vector<int>();
  }

  if(m_infoSwitch.m_bVtx){
    m_Bdecay_x  = new std::vector<float>();
    m_Bdecay_y  = new std::vector<float>();
    m_Bdecay_z  = new std::vector<float>();
  }

  if(m_infoSwitch.m_parents){
    m_nParents        = new std::vector<int>();
    m_parent_pdgId    = new std::vector< std::vector<int> >();
    m_parent_barcode  = new std::vector< std::vector<int> >();
    m_parent_status   = new std::vector< std::vector<int> >();
  }

  if(m_infoSwitch.m_children){
    m_nChildren      = new std::vector<int>();
    m_child_pdgId    = new std::vector< std::vector<int> >();
    m_child_barcode  = new std::vector< std::vector<int> >();
    m_child_status   = new std::vector< std::vector<int> >();
  }

  if(m_infoSwitch.m_dressed){
    m_pt_dressed  = new std::vector<float>();
    m_eta_dressed = new std::vector<float>();
    m_phi_dressed = new std::vector<float>();
    m_e_dressed   = new std::vector<float>();
  }

  if(m_infoSwitch.m_origin){
    m_origin = new std::vector<unsigned int>();
  }

  if(m_infoSwitch.m_particleType){
    m_particleType = new std::vector<unsigned int>();
  }

}

TruthContainer::~TruthContainer()
{
  if(m_debug) std::cout << " Deleting TruthContainer "  << std::endl;

  delete m_pdgId;
  delete m_status;
  delete m_barcode;

  delete m_m;
  delete m_px;
  delete m_py;
  delete m_pz;
  delete m_e;
  delete m_pt;

  delete m_eta;
  delete m_phi;

  if(m_infoSwitch.m_type){
    delete m_is_higgs;
    delete m_is_bhad ;
  }

  if(m_infoSwitch.m_bVtx){
    delete m_Bdecay_x;
    delete m_Bdecay_y;
    delete m_Bdecay_z;
  }

  if(m_infoSwitch.m_parents){
    delete m_nParents;
    delete m_parent_pdgId;
    delete m_parent_barcode;
    delete m_parent_status;
  }

  if(m_infoSwitch.m_children){
    delete m_nChildren;
    delete m_child_pdgId;
    delete m_child_barcode;
    delete m_child_status;
  }

  if(m_infoSwitch.m_dressed){
    delete m_pt_dressed;
    delete m_eta_dressed;
    delete m_phi_dressed;
    delete m_e_dressed;
  }

  if(m_infoSwitch.m_origin){
    delete m_origin;
  }

  if(m_infoSwitch.m_particleType){
    delete m_particleType;
  }

}

void TruthContainer::setTree(TTree *tree)
{
  //
  // Connect branches
  ParticleContainer::setTree(tree);

  connectBranch<int>(tree,"pdgId",                      &m_pdgId);
  connectBranch<int>(tree,"status",                     &m_status);
  connectBranch<int>(tree,"barcode",                    &m_barcode);

  connectBranch<float>(tree, "m", &m_m);
  connectBranch<float>(tree, "px", &m_px);
  connectBranch<float>(tree, "py", &m_py);
  connectBranch<float>(tree, "pz", &m_pz);
  connectBranch<float>(tree, "e", &m_e);
  connectBranch<float>(tree, "pt", &m_pt);

  connectBranch<float>(tree, "eta", &m_eta);
  connectBranch<float>(tree, "phi", &m_phi);

  if(m_infoSwitch.m_type){
    connectBranch<int>(tree,"is_higgs",  &m_is_higgs);
    connectBranch<int>(tree,"is_bhad",   &m_is_bhad);
  }

  if(m_infoSwitch.m_bVtx){
    connectBranch<float>(tree,"Bdecay_x",   &m_Bdecay_x);
    connectBranch<float>(tree,"Bdecay_y",   &m_Bdecay_y);
    connectBranch<float>(tree,"Bdecay_z",   &m_Bdecay_z);
  }

  if(m_infoSwitch.m_parents){
    connectBranch<int>(tree,"nParents",   &m_nParents);
    connectBranch<std::vector<int> >(tree,"parent_pdgId",   &m_parent_pdgId);
    connectBranch<std::vector<int> >(tree,"parent_barcode", &m_parent_barcode);
    connectBranch<std::vector<int> >(tree,"parent_status",  &m_parent_status);
  }

  if(m_infoSwitch.m_children){
    connectBranch<int>         (tree,"nChildren",     &m_nChildren);
    connectBranch<std::vector<int> >(tree,"child_pdgId",   &m_child_pdgId);
    connectBranch<std::vector<int> >(tree,"child_barcode", &m_child_barcode);
    connectBranch<std::vector<int> >(tree,"child_status",  &m_child_status);
  }

  if(m_infoSwitch.m_dressed){
    connectBranch<float> (tree,"pt_dressed",  &m_pt_dressed);
    connectBranch<float> (tree,"eta_dressed", &m_eta_dressed);
    connectBranch<float> (tree,"phi_dressed", &m_phi_dressed);
    connectBranch<float> (tree,"e_dressed",   &m_e_dressed);
  }

  if(m_infoSwitch.m_origin){
    connectBranch<unsigned int> (tree,"origin",  &m_origin);
  }

  if(m_infoSwitch.m_particleType){
    connectBranch<unsigned int> (tree,"type",  &m_particleType);
  }

}

void TruthContainer::updateParticle(uint idx, TruthPart& truth)
{
  if(m_debug) std::cout << "in TruthContainer::updateParticle " << std::endl;
  ParticleContainer::updateParticle(idx,truth);

  truth.pdgId                    =m_pdgId                    ->at(idx);
  truth.status                   =m_status                   ->at(idx);
  truth.barcode                  =m_barcode                  ->at(idx);

  truth.m = m_m->at(idx);
  truth.px = m_px->at(idx);
  truth.py = m_py->at(idx);
  truth.pz = m_pz->at(idx);
  truth.e = m_e->at(idx);
  truth.pt = m_pt->at(idx);

  truth.eta = m_eta->at(idx);
  truth.phi = m_phi->at(idx);

  if(m_infoSwitch.m_type){
    truth.is_higgs = (bool)m_is_higgs->at(idx);
    truth.is_bhad  = (bool)m_is_bhad ->at(idx);
  }


  if(m_infoSwitch.m_bVtx){
    truth.Bdecay_x = m_Bdecay_x->at(idx);
    truth.Bdecay_y = m_Bdecay_y->at(idx);
    truth.Bdecay_z = m_Bdecay_z->at(idx);
  }

  if(m_infoSwitch.m_parents){
    truth.nParents       = m_nParents->at(idx);
    truth.parent_pdgId   = m_parent_pdgId->at(idx);
    truth.parent_barcode = m_parent_barcode->at(idx);
    truth.parent_status  = m_parent_status ->at(idx);
  }

  if(m_infoSwitch.m_children){
    truth.nChildren     = m_nChildren->at(idx);
    truth.child_pdgId   = m_child_pdgId->at(idx);
    truth.child_barcode = m_child_barcode->at(idx);
    truth.child_status  = m_child_status ->at(idx);
  }

  if(m_infoSwitch.m_dressed){
    truth.pt_dressed  = m_pt_dressed->at(idx);
    truth.eta_dressed = m_eta_dressed->at(idx);
    truth.phi_dressed = m_phi_dressed->at(idx);
    truth.e_dressed   = m_e_dressed->at(idx);
  }

  if(m_infoSwitch.m_origin){
    truth.origin = m_origin->at(idx);
  }

  if(m_infoSwitch.m_particleType){
    truth.type = m_particleType->at(idx);
  }

  if(m_debug) std::cout << "leave TruthContainer::updateParticle " << std::endl;
  return;
}



void TruthContainer::setBranches(TTree *tree)
{
  ParticleContainer::setBranches(tree);

  setBranch<int>(tree,"pdgId",                      m_pdgId              );
  setBranch<int>(tree,"status",                     m_status             );
  setBranch<int>(tree,"barcode",                    m_barcode             );

  setBranch<float>(tree, "m", m_m);
  setBranch<float>(tree, "px", m_px);
  setBranch<float>(tree, "py", m_py);
  setBranch<float>(tree, "pz", m_pz);
  setBranch<float>(tree, "e", m_e);
  setBranch<float>(tree, "pt", m_pt);

  setBranch<float>(tree, "eta", m_eta);
  setBranch<float>(tree, "phi", m_phi);

  if(m_infoSwitch.m_type){
    setBranch<int>(tree,"is_higgs",                      m_is_higgs              );
    setBranch<int>(tree,"is_bhad",                       m_is_bhad              );
  }


  if(m_infoSwitch.m_bVtx){
    setBranch<float>(tree,"Bdecay_x",                      m_Bdecay_x              );
    setBranch<float>(tree,"Bdecay_y",                      m_Bdecay_y              );
    setBranch<float>(tree,"Bdecay_z",                      m_Bdecay_z              );
  }

  if(m_infoSwitch.m_parents){
    setBranch<int>         (tree,"nParents",                      m_nParents              );
    setBranch<std::vector<int> >(tree,"parent_pdgId",                  m_parent_pdgId          );
    setBranch<std::vector<int> >(tree,"parent_barcode",                m_parent_barcode        );
    setBranch<std::vector<int> >(tree,"parent_status",                 m_parent_status         );
  }

  if(m_infoSwitch.m_children){
    setBranch<int>         (tree,"nChildren",                    m_nChildren            );
    setBranch<std::vector<int> >(tree,"child_pdgId",                  m_child_pdgId          );
    setBranch<std::vector<int> >(tree,"child_barcode",                m_child_barcode        );
    setBranch<std::vector<int> >(tree,"child_status",                 m_child_status         );
  }

  if(m_infoSwitch.m_dressed){
    setBranch<float> (tree,"pt_dressed", m_pt_dressed );
    setBranch<float> (tree,"eta_dressed", m_eta_dressed );
    setBranch<float> (tree,"phi_dressed", m_phi_dressed );
    setBranch<float> (tree,"e_dressed", m_e_dressed );
  }

  if(m_infoSwitch.m_origin){
    setBranch<unsigned int> (tree,"origin",m_origin);
  }

  if(m_infoSwitch.m_particleType){
    setBranch<unsigned int> (tree,"type",m_particleType);
  }

  return;
}


void TruthContainer::clear()
{

  ParticleContainer::clear();

  m_pdgId ->clear();
  m_status->clear();
  m_barcode->clear();

  m_m->clear();
  m_px->clear();
  m_py->clear();
  m_pz->clear();
  m_e->clear();
  m_pt->clear();

  m_eta->clear();
  m_phi->clear();

  if(m_infoSwitch.m_type){
    m_is_higgs  ->clear();
    m_is_bhad   ->clear();
  }

  if(m_infoSwitch.m_bVtx){
    m_Bdecay_x->clear();
    m_Bdecay_y->clear();
    m_Bdecay_z->clear();
  }

  if(m_infoSwitch.m_parents){
    m_nParents->clear();
    m_parent_pdgId->clear();
    m_parent_barcode->clear();
    m_parent_status->clear();
  }

  if(m_infoSwitch.m_children){
    m_nChildren->clear();
    m_child_pdgId->clear();
    m_child_barcode->clear();
    m_child_status->clear();
  }

  if(m_infoSwitch.m_dressed){
    m_pt_dressed->clear();
    m_eta_dressed->clear();
    m_phi_dressed->clear();
    m_e_dressed->clear();
  }

  if(m_infoSwitch.m_origin){
    m_origin->clear();
  }

  if(m_infoSwitch.m_particleType){
    m_particleType->clear();
  }

  return;
}

void TruthContainer::FillTruth( const xAOD::TruthParticle* truth ){
  return FillTruth(static_cast<const xAOD::IParticle*>(truth));
}

void TruthContainer::FillTruth( const xAOD::IParticle* particle ){
  if(m_debug) std::cout << "In Fill Truth " << std::endl;
  ParticleContainer::FillParticle(particle);

  const xAOD::TruthParticle* truth=dynamic_cast<const xAOD::TruthParticle*>(particle);
  if(m_debug) std::cout << "Got TP " << std::endl;

  m_pdgId  ->push_back( truth->pdgId() );
  m_status ->push_back( truth->status() );
  m_barcode->push_back( truth->barcode() );

  m_m->push_back( truth->m() / m_units);
  m_px->push_back( truth->px() / m_units);
  m_py->push_back( truth->py() / m_units);
  m_pz->push_back( truth->pz() / m_units);
  m_e->push_back( truth->e() / m_units);
  m_pt->push_back( truth->pt() / m_units);

  m_eta->push_back(truth->eta());
  m_phi->push_back(truth->phi());
 
 if(m_debug)   std::cout << "Filled status " << std::endl;

  if(m_infoSwitch.m_type){
    if(m_debug) std::cout << "Filling  type " << std::endl;
    m_is_higgs->push_back( (int)truth->isHiggs()        );
    m_is_bhad ->push_back( (int)truth->isBottomHadron() );
  }



  if(m_infoSwitch.m_bVtx){
    if(m_debug) std::cout << "Filling  bVtx " << std::endl;
    if(truth->isBottomHadron() && truth->hasDecayVtx()){
      const xAOD::TruthVertex* vtx = truth->decayVtx();
      m_Bdecay_x->push_back(vtx->x());
      m_Bdecay_y->push_back(vtx->y());
      m_Bdecay_z->push_back(vtx->z());
    }
    else{
      m_Bdecay_x->push_back(-999999.);
      m_Bdecay_y->push_back(-999999.);
      m_Bdecay_z->push_back(-999999.);
    }
  }

  if(m_infoSwitch.m_parents){
    int nParents = truth->nParents();
    m_nParents->push_back(nParents);

    m_parent_pdgId  ->push_back(std::vector<int>());
    m_parent_barcode->push_back(std::vector<int>());
    m_parent_status ->push_back(std::vector<int>());
    for(int iparent = 0; iparent < nParents; ++iparent){
      const xAOD::TruthParticle* parent = truth->parent(iparent);
      if(parent){
	m_parent_pdgId  ->back().push_back(parent->pdgId());
	m_parent_barcode->back().push_back(parent->barcode());
	m_parent_status ->back().push_back(parent->status());
      }else{
	m_parent_pdgId  ->back().push_back(-99);
	m_parent_barcode->back().push_back(-99);
	m_parent_status ->back().push_back(-99);
      }
    }
  }


  if(m_infoSwitch.m_children){
    int nChildren = truth->nChildren();
    m_nChildren->push_back(nChildren);

    m_child_pdgId  ->push_back(std::vector<int>());
    m_child_barcode->push_back(std::vector<int>());
    m_child_status ->push_back(std::vector<int>());
    for(int ichild = 0; ichild < nChildren; ++ichild){
      const xAOD::TruthParticle* child = truth->child(ichild);
      if(child){
	m_child_pdgId  ->back().push_back(child->pdgId());
	m_child_barcode->back().push_back(child->barcode());
	m_child_status ->back().push_back(child->status());
      }else{
	m_child_pdgId  ->back().push_back(-99);
	m_child_barcode->back().push_back(-99);
	m_child_status ->back().push_back(-99);
      }
    }
  }

  if(m_infoSwitch.m_dressed){
    if( truth->isAvailable<float>("pt_dressed") ){
      float pt_dressed = truth->auxdata<float>("pt_dressed");
      m_pt_dressed->push_back(pt_dressed / m_units);
    } else {
      m_pt_dressed->push_back(-999);
    }
    if( truth->isAvailable<float>("eta_dressed") ){
      float eta_dressed = truth->auxdata<float>("eta_dressed");
      m_eta_dressed->push_back(eta_dressed);
    } else {
      m_eta_dressed->push_back(-999);
    }
    if( truth->isAvailable<float>("phi_dressed") ){
      float phi_dressed = truth->auxdata<float>("phi_dressed");
      m_phi_dressed->push_back(phi_dressed);
    } else {
      m_phi_dressed->push_back(-999);
    }
    if( truth->isAvailable<float>("e_dressed") ){
      float e_dressed = truth->auxdata<float>("e_dressed");
      m_e_dressed->push_back(e_dressed / m_units);
    } else {
      m_e_dressed->push_back(-999);
    }
  }

  if(m_infoSwitch.m_origin){
    if( truth->isAvailable<unsigned int>("classifierParticleOrigin") ){
      unsigned int origin = truth->auxdata<unsigned int>("classifierParticleOrigin");
      m_origin->push_back(origin);
    } else {
      m_origin->push_back(0); // Non-defined
    }
  }

  if(m_infoSwitch.m_particleType){
    if( truth->isAvailable<unsigned int>("classifierParticleType") ){
      unsigned int type = truth->auxdata<unsigned int>("classifierParticleType");
      m_particleType->push_back(type);
    } else {
      m_particleType->push_back(0); // Unknown
    }
  }

  if(m_debug) std::cout << "Leave Fill Truth " << std::endl;
  return;
}

