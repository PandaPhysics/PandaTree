#ifndef PandaTree_Objects_PFCands_h
#define PandaTree_Objects_PFCands_h
#include "Constants.h"
#include "PFParticle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class PFCands : public PFParticle {
  public:
    struct datastore : public PFParticle::datastore {
      datastore() : PFParticle::datastore() {}
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
      Float_t* puppiWeight{0};
      Float_t* puppiWeightNoLep{0};
      Float_t* vtxChi2{0};
      Float_t* trkChi2{0};
      Float_t* dz{0};
      Float_t* dzErr{0};
      Float_t* d0{0};
      Float_t* d0Err{0};
      Int_t* fromPV{0};
      Int_t* pvAssocQuality{0};
      Int_t* lostInnerHits{0};
      Int_t* trkQuality{0};
      Float_t* trkPt{0};
      Float_t* trkEta{0};
      Float_t* trkPhi{0};

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

    typedef Array<PFCands> array_type;
    typedef Collection<PFCands> collection_type;

    typedef PFParticle base_type;

    PFCands(char const* name = "");
    PFCands(PFCands const&);
    PFCands(datastore&, UInt_t idx);
    ~PFCands();
    PFCands& operator=(PFCands const&);

    static char const* typeName() { return "PFCands"; }

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
    Float_t& puppiWeight;
    Float_t& puppiWeightNoLep;
    Float_t& vtxChi2;
    Float_t& trkChi2;
    Float_t& dz;
    Float_t& dzErr;
    Float_t& d0;
    Float_t& d0Err;
    Int_t& fromPV;
    Int_t& pvAssocQuality;
    Int_t& lostInnerHits;
    Int_t& trkQuality;
    Float_t& trkPt;
    Float_t& trkEta;
    Float_t& trkPhi;

    /* BEGIN CUSTOM PFCands.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    PFCands(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<PFCands> PFCandsArray;
  typedef Collection<PFCands> PFCandsCollection;
  typedef Ref<PFCands> PFCandsRef;
  typedef RefVector<PFCands> PFCandsRefVector;

  /* BEGIN CUSTOM PFCands.h.global */
  /* END CUSTOM */

}

#endif
