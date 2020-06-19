#ifndef PandaTree_Objects_Muon_h
#define PandaTree_Objects_Muon_h
#include "Constants.h"
#include "Lepton.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Muon : public Lepton {
  public:
    struct datastore : public Lepton::datastore {
      datastore() : Lepton::datastore() {}
      ~datastore() { deallocate(); }

      /* Particle
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      Float_t* mass{0};
      */
      /* RecoParticle
      UChar_t* cleanmask{0};
      */
      /* PFParticle
      Int_t* charge{0};
      Int_t* pdgId{0};
      Int_t* jetIdx{0};
      Int_t* genPartIdx{0};
      */
      /* Lepton
      Float_t* ip3d{0};
      Float_t* sip3d{0};
      Float_t* dxy{0};
      Float_t* dxyErr{0};
      Float_t* dz{0};
      Float_t* dzErr{0};
      Float_t* jetRelIso{0};
      Float_t* miniPFRelIso_all{0};
      Float_t* miniPFRelIso_chg{0};
      Float_t* pfRelIso03_all{0};
      Float_t* pfRelIso03_chg{0};
      Float_t* mvaTTH{0};
      Int_t* tightCharge{0};
      Bool_t* isPFcand{0};
      */
      Float_t* pfRelIso04_all{0};
      Float_t* pfRelIso03_all{0};
      Float_t* pfRelIso03_chg{0};
      Float_t* ptErr{0};
      Float_t* segmentComp{0};
      Int_t* nStations{0};
      Int_t* nTrackerLayers{0};
      UChar_t* highPtId{0};
      Int_t* miniIsoId{0};
      UChar_t* multiIsoId{0};
      UChar_t* mvaId{0};
      UChar_t* pfIsoId{0};
      UChar_t* tkIsoId{0};
      Bool_t* inTimeMuon{0};
      Bool_t* isGlobal{0};
      Bool_t* isTracker{0};
      Bool_t* looseId{0};
      Bool_t* mediumId{0};
      Bool_t* mediumPromptId{0};
      Bool_t* softId{0};
      Bool_t* softMvaId{0};
      Bool_t* tightId{0};
      Bool_t* triggerIdLoose{0};

      void allocate(UInt_t n) override;
      void deallocate() override;
      void setStatus(TTree&, TString const&, utils::BranchList const&) override;
      utils::BranchList getStatus(TTree&, TString const&) const override;
      utils::BranchList getBranchNames(TString const& = "") const override;
      void setAddress(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t setStatus = kTRUE) override;
      void book(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t dynamic = kTRUE) override;
      void releaseTree(TTree&, TString const&) override;
      void resizeVectors_(UInt_t) override;
    };

    typedef Array<Muon> array_type;
    typedef Collection<Muon> collection_type;

    typedef Lepton base_type;

    Muon(char const* name = "");
    Muon(Muon const&);
    Muon(datastore&, UInt_t idx);
    ~Muon();
    Muon& operator=(Muon const&);

    static char const* typeName() { return "Muon"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    /* RecoParticle
    UChar_t& cleanmask;
    */
    /* PFParticle
    Int_t& charge;
    Int_t& pdgId;
    Int_t& jetIdx;
    Int_t& genPartIdx;
    */
    /* Lepton
    Float_t& ip3d;
    Float_t& sip3d;
    Float_t& dxy;
    Float_t& dxyErr;
    Float_t& dz;
    Float_t& dzErr;
    Float_t& jetRelIso;
    Float_t& miniPFRelIso_all;
    Float_t& miniPFRelIso_chg;
    Float_t& pfRelIso03_all;
    Float_t& pfRelIso03_chg;
    Float_t& mvaTTH;
    Int_t& tightCharge;
    Bool_t& isPFcand;
    */
    Float_t& pfRelIso04_all;
    Float_t& pfRelIso03_all;
    Float_t& pfRelIso03_chg;
    Float_t& ptErr;
    Float_t& segmentComp;
    Int_t& nStations;
    Int_t& nTrackerLayers;
    UChar_t& highPtId;
    Int_t& miniIsoId;
    UChar_t& multiIsoId;
    UChar_t& mvaId;
    UChar_t& pfIsoId;
    UChar_t& tkIsoId;
    Bool_t& inTimeMuon;
    Bool_t& isGlobal;
    Bool_t& isTracker;
    Bool_t& looseId;
    Bool_t& mediumId;
    Bool_t& mediumPromptId;
    Bool_t& softId;
    Bool_t& softMvaId;
    Bool_t& tightId;
    Bool_t& triggerIdLoose;

    /* BEGIN CUSTOM Muon.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Muon(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Muon> MuonArray;
  typedef Collection<Muon> MuonCollection;
  typedef Ref<Muon> MuonRef;
  typedef RefVector<Muon> MuonRefVector;

  /* BEGIN CUSTOM Muon.h.global */
  /* END CUSTOM */

}

#endif
