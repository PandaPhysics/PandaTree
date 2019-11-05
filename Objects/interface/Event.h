#ifndef PandaTree_Objects_Event_h
#define PandaTree_Objects_Event_h
#include "../../Framework/interface/TreeEntry.h"
#include "Constants.h"
#include "Flags.h"
#include "GenPart.h"
#include "Electron.h"
#include "Muon.h"
#include "Jet.h"
#include "Photon.h"
#include "SecondaryVertex.h"
#include "PrimaryVertex.h"
#include "Met.h"
#include "RecoMet.h"
#include "Triggers.h"
#include "BReweight.h"

namespace panda {

  class Event : public TreeEntry {
  public:
    Event();
    Event(Event const&);
    ~Event();
    Event& operator=(Event const&);

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Flags Flag = Flags("Flag");
    GenPartCollection GenPart = GenPartCollection("GenPart", 256);
    ElectronCollection Electron = ElectronCollection("Electron", 16);
    MuonCollection Muon = MuonCollection("Muon", 16);
    JetCollection Jet = JetCollection("Jet", 32);
    PhotonCollection Photon = PhotonCollection("Photon", 16);
    SecondaryVertexCollection SV = SecondaryVertexCollection("SV", 32);
    PrimaryVertex PV = PrimaryVertex("PV");
    Met GenMET = Met("GenMET");
    RecoMet CaloMET = RecoMet("CaloMET");
    RecoMet ChsMET = RecoMet("ChsMET");
    RecoMet MET = RecoMet("MET");
    RecoMet PuppiMET = RecoMet("PuppiMET");
    RecoMet RawMET = RecoMet("RawMET");
    RecoMet TkMET = RecoMet("TkMET");
    Triggers HLT = Triggers("HLT");
    BReweight btagReweight = BReweight("btagReweight");

    UInt_t run{};
    UInt_t luminosityBlock{};
    ULong64_t event{};
    Float_t fixedGridRhoFastjetAll{};
    Float_t fixedGridRhoFastjetCentralCalo{};
    Float_t fixedGridRhoFastjetCentralNeutral{};
    Float_t genWeight{};

    static utils::BranchList getListOfBranches(Bool_t direct = kFALSE);

  protected:
    void doSetStatus_(TTree&, utils::BranchList const&) override;
    utils::BranchList doGetStatus_(TTree&) const override;
    utils::BranchList doGetBranchNames_() const override;
    void doSetAddress_(TTree&, utils::BranchList const&, Bool_t setStatus) override;
    void doBook_(TTree&, utils::BranchList const&) override;
    void doGetEntry_(TTree&) override;
    void doInit_() override;
    void doUnlink_(TTree&) override;

  public:
    /* BEGIN CUSTOM Event.h.classdef */
    /* END CUSTOM */
  };

  /* BEGIN CUSTOM Event.h.global */
  /* END CUSTOM */

}

#endif
