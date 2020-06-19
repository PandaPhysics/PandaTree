#include "PandaTree/Objects/interface/Flags.h"
#include "PandaTree/Objects/interface/Met.h"
#include "PandaTree/Objects/interface/RecoMet.h"
#include "PandaTree/Objects/interface/Particle.h"
#include "PandaTree/Objects/interface/SecondaryVertex.h"
#include "PandaTree/Objects/interface/PrimaryVertex.h"
#include "PandaTree/Objects/interface/RecoParticle.h"
#include "PandaTree/Objects/interface/PFParticle.h"
#include "PandaTree/Objects/interface/GenPart.h"
#include "PandaTree/Objects/interface/GenJet.h"
#include "PandaTree/Objects/interface/Lepton.h"
#include "PandaTree/Objects/interface/Photon.h"
#include "PandaTree/Objects/interface/Electron.h"
#include "PandaTree/Objects/interface/Muon.h"
#include "PandaTree/Objects/interface/Tau.h"
#include "PandaTree/Objects/interface/Jet.h"
#include "PandaTree/Objects/interface/SubJet.h"
#include "PandaTree/Objects/interface/FatJet.h"
#include "PandaTree/Objects/interface/TrigObj.h"
#include "PandaTree/Objects/interface/Lhe.h"
#include "PandaTree/Objects/interface/LHEPart.h"
#include "PandaTree/Objects/interface/Piles.h"
#include "PandaTree/Objects/interface/Triggers.h"
#include "PandaTree/Objects/interface/BReweight.h"
#include "PandaTree/Objects/interface/CorrT1METJet.h"
#include "PandaTree/Objects/interface/Weight.h"
#include "PandaTree/Objects/interface/Event.h"

#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace panda;

#pragma link C++ class panda::Flags;
#pragma link C++ class panda::Met;
#pragma link C++ class panda::RecoMet;
#pragma link C++ class panda::Particle;
#pragma link C++ class panda::SecondaryVertex;
#pragma link C++ class panda::PrimaryVertex;
#pragma link C++ class panda::RecoParticle;
#pragma link C++ class panda::PFParticle;
#pragma link C++ class panda::GenPart;
#pragma link C++ class panda::GenJet;
#pragma link C++ class panda::Lepton;
#pragma link C++ class panda::Photon;
#pragma link C++ class panda::Electron;
#pragma link C++ class panda::Muon;
#pragma link C++ class panda::Tau;
#pragma link C++ class panda::Jet;
#pragma link C++ class panda::SubJet;
#pragma link C++ class panda::FatJet;
#pragma link C++ class panda::TrigObj;
#pragma link C++ class panda::Lhe;
#pragma link C++ class panda::LHEPart;
#pragma link C++ class panda::Piles;
#pragma link C++ class panda::Triggers;
#pragma link C++ class panda::BReweight;
#pragma link C++ class panda::CorrT1METJet;
#pragma link C++ class panda::Weight;
#pragma link C++ class panda::Array<panda::Particle>;
#pragma link C++ class panda::Collection<panda::Particle>;
#pragma link C++ class panda::Ref<panda::Particle>;
#pragma link C++ class panda::RefVector<panda::Particle>;
#pragma link C++ class panda::Array<panda::SecondaryVertex>;
#pragma link C++ class panda::Collection<panda::SecondaryVertex>;
#pragma link C++ class panda::Ref<panda::SecondaryVertex>;
#pragma link C++ class panda::RefVector<panda::SecondaryVertex>;
#pragma link C++ class panda::Array<panda::RecoParticle>;
#pragma link C++ class panda::Collection<panda::RecoParticle>;
#pragma link C++ class panda::Ref<panda::RecoParticle>;
#pragma link C++ class panda::RefVector<panda::RecoParticle>;
#pragma link C++ class panda::Array<panda::PFParticle>;
#pragma link C++ class panda::Collection<panda::PFParticle>;
#pragma link C++ class panda::Ref<panda::PFParticle>;
#pragma link C++ class panda::RefVector<panda::PFParticle>;
#pragma link C++ class panda::Array<panda::GenPart>;
#pragma link C++ class panda::Collection<panda::GenPart>;
#pragma link C++ class panda::Ref<panda::GenPart>;
#pragma link C++ class panda::RefVector<panda::GenPart>;
#pragma link C++ class panda::Array<panda::GenJet>;
#pragma link C++ class panda::Collection<panda::GenJet>;
#pragma link C++ class panda::Ref<panda::GenJet>;
#pragma link C++ class panda::RefVector<panda::GenJet>;
#pragma link C++ class panda::Array<panda::Lepton>;
#pragma link C++ class panda::Collection<panda::Lepton>;
#pragma link C++ class panda::Ref<panda::Lepton>;
#pragma link C++ class panda::RefVector<panda::Lepton>;
#pragma link C++ class panda::Array<panda::Photon>;
#pragma link C++ class panda::Collection<panda::Photon>;
#pragma link C++ class panda::Ref<panda::Photon>;
#pragma link C++ class panda::RefVector<panda::Photon>;
#pragma link C++ class panda::Array<panda::Electron>;
#pragma link C++ class panda::Collection<panda::Electron>;
#pragma link C++ class panda::Ref<panda::Electron>;
#pragma link C++ class panda::RefVector<panda::Electron>;
#pragma link C++ class panda::Array<panda::Muon>;
#pragma link C++ class panda::Collection<panda::Muon>;
#pragma link C++ class panda::Ref<panda::Muon>;
#pragma link C++ class panda::RefVector<panda::Muon>;
#pragma link C++ class panda::Array<panda::Tau>;
#pragma link C++ class panda::Collection<panda::Tau>;
#pragma link C++ class panda::Ref<panda::Tau>;
#pragma link C++ class panda::RefVector<panda::Tau>;
#pragma link C++ class panda::Array<panda::Jet>;
#pragma link C++ class panda::Collection<panda::Jet>;
#pragma link C++ class panda::Ref<panda::Jet>;
#pragma link C++ class panda::RefVector<panda::Jet>;
#pragma link C++ class panda::Array<panda::SubJet>;
#pragma link C++ class panda::Collection<panda::SubJet>;
#pragma link C++ class panda::Ref<panda::SubJet>;
#pragma link C++ class panda::RefVector<panda::SubJet>;
#pragma link C++ class panda::Array<panda::FatJet>;
#pragma link C++ class panda::Collection<panda::FatJet>;
#pragma link C++ class panda::Ref<panda::FatJet>;
#pragma link C++ class panda::RefVector<panda::FatJet>;
#pragma link C++ class panda::Array<panda::TrigObj>;
#pragma link C++ class panda::Collection<panda::TrigObj>;
#pragma link C++ class panda::Ref<panda::TrigObj>;
#pragma link C++ class panda::RefVector<panda::TrigObj>;
#pragma link C++ class panda::Array<panda::LHEPart>;
#pragma link C++ class panda::Collection<panda::LHEPart>;
#pragma link C++ class panda::Ref<panda::LHEPart>;
#pragma link C++ class panda::RefVector<panda::LHEPart>;
#pragma link C++ class panda::Array<panda::CorrT1METJet>;
#pragma link C++ class panda::Collection<panda::CorrT1METJet>;
#pragma link C++ class panda::Ref<panda::CorrT1METJet>;
#pragma link C++ class panda::RefVector<panda::CorrT1METJet>;
#pragma link C++ class panda::Array<panda::Weight>;
#pragma link C++ class panda::Collection<panda::Weight>;
#pragma link C++ class panda::Ref<panda::Weight>;
#pragma link C++ class panda::RefVector<panda::Weight>;
#pragma link C++ typedef panda::ParticleArray;
#pragma link C++ typedef panda::ParticleCollection;
#pragma link C++ typedef panda::ParticleRef;
#pragma link C++ typedef panda::ParticleRefVector;
#pragma link C++ typedef panda::SecondaryVertexArray;
#pragma link C++ typedef panda::SecondaryVertexCollection;
#pragma link C++ typedef panda::SecondaryVertexRef;
#pragma link C++ typedef panda::SecondaryVertexRefVector;
#pragma link C++ typedef panda::RecoParticleArray;
#pragma link C++ typedef panda::RecoParticleCollection;
#pragma link C++ typedef panda::RecoParticleRef;
#pragma link C++ typedef panda::RecoParticleRefVector;
#pragma link C++ typedef panda::PFParticleArray;
#pragma link C++ typedef panda::PFParticleCollection;
#pragma link C++ typedef panda::PFParticleRef;
#pragma link C++ typedef panda::PFParticleRefVector;
#pragma link C++ typedef panda::GenPartArray;
#pragma link C++ typedef panda::GenPartCollection;
#pragma link C++ typedef panda::GenPartRef;
#pragma link C++ typedef panda::GenPartRefVector;
#pragma link C++ typedef panda::GenJetArray;
#pragma link C++ typedef panda::GenJetCollection;
#pragma link C++ typedef panda::GenJetRef;
#pragma link C++ typedef panda::GenJetRefVector;
#pragma link C++ typedef panda::LeptonArray;
#pragma link C++ typedef panda::LeptonCollection;
#pragma link C++ typedef panda::LeptonRef;
#pragma link C++ typedef panda::LeptonRefVector;
#pragma link C++ typedef panda::PhotonArray;
#pragma link C++ typedef panda::PhotonCollection;
#pragma link C++ typedef panda::PhotonRef;
#pragma link C++ typedef panda::PhotonRefVector;
#pragma link C++ typedef panda::ElectronArray;
#pragma link C++ typedef panda::ElectronCollection;
#pragma link C++ typedef panda::ElectronRef;
#pragma link C++ typedef panda::ElectronRefVector;
#pragma link C++ typedef panda::MuonArray;
#pragma link C++ typedef panda::MuonCollection;
#pragma link C++ typedef panda::MuonRef;
#pragma link C++ typedef panda::MuonRefVector;
#pragma link C++ typedef panda::TauArray;
#pragma link C++ typedef panda::TauCollection;
#pragma link C++ typedef panda::TauRef;
#pragma link C++ typedef panda::TauRefVector;
#pragma link C++ typedef panda::JetArray;
#pragma link C++ typedef panda::JetCollection;
#pragma link C++ typedef panda::JetRef;
#pragma link C++ typedef panda::JetRefVector;
#pragma link C++ typedef panda::SubJetArray;
#pragma link C++ typedef panda::SubJetCollection;
#pragma link C++ typedef panda::SubJetRef;
#pragma link C++ typedef panda::SubJetRefVector;
#pragma link C++ typedef panda::FatJetArray;
#pragma link C++ typedef panda::FatJetCollection;
#pragma link C++ typedef panda::FatJetRef;
#pragma link C++ typedef panda::FatJetRefVector;
#pragma link C++ typedef panda::TrigObjArray;
#pragma link C++ typedef panda::TrigObjCollection;
#pragma link C++ typedef panda::TrigObjRef;
#pragma link C++ typedef panda::TrigObjRefVector;
#pragma link C++ typedef panda::LHEPartArray;
#pragma link C++ typedef panda::LHEPartCollection;
#pragma link C++ typedef panda::LHEPartRef;
#pragma link C++ typedef panda::LHEPartRefVector;
#pragma link C++ typedef panda::CorrT1METJetArray;
#pragma link C++ typedef panda::CorrT1METJetCollection;
#pragma link C++ typedef panda::CorrT1METJetRef;
#pragma link C++ typedef panda::CorrT1METJetRefVector;
#pragma link C++ typedef panda::WeightArray;
#pragma link C++ typedef panda::WeightCollection;
#pragma link C++ typedef panda::WeightRef;
#pragma link C++ typedef panda::WeightRefVector;
#pragma link C++ class panda::Event;

#endif
