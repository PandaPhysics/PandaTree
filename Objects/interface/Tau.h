#ifndef PandaTree_Objects_Tau_h
#define PandaTree_Objects_Tau_h
#include "Constants.h"
#include "PFParticle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Tau : public PFParticle {
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
      Int_t* decayMode{0};
      Bool_t* idDecayMode{0};
      Bool_t* idDecayModeNewDMs{0};
      UChar_t* idMVAoldDM2017v2{0};
      Float_t* leadTkPtOverTauPt{0};
      Float_t* leadTkDeltaEta{0};
      Float_t* leadTkDeltaPhi{0};
      Float_t* dxy{0};
      Float_t* dz{0};
      Float_t* rawIso{0};
      Float_t* rawIsodR03{0};
      Float_t* chargedIso{0};
      Float_t* neutralIso{0};
      Float_t* puCorr{0};
      Float_t* photonsOutsideSignalCone{0};
      UChar_t* idMVAnewDM2017v2{0};

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

    typedef Array<Tau> array_type;
    typedef Collection<Tau> collection_type;

    typedef PFParticle base_type;

    Tau(char const* name = "");
    Tau(Tau const&);
    Tau(datastore&, UInt_t idx);
    ~Tau();
    Tau& operator=(Tau const&);

    static char const* typeName() { return "Tau"; }

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
    Int_t& decayMode;
    Bool_t& idDecayMode;
    Bool_t& idDecayModeNewDMs;
    UChar_t& idMVAoldDM2017v2;
    Float_t& leadTkPtOverTauPt;
    Float_t& leadTkDeltaEta;
    Float_t& leadTkDeltaPhi;
    Float_t& dxy;
    Float_t& dz;
    Float_t& rawIso;
    Float_t& rawIsodR03;
    Float_t& chargedIso;
    Float_t& neutralIso;
    Float_t& puCorr;
    Float_t& photonsOutsideSignalCone;
    UChar_t& idMVAnewDM2017v2;

    /* BEGIN CUSTOM Tau.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Tau(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Tau> TauArray;
  typedef Collection<Tau> TauCollection;
  typedef Ref<Tau> TauRef;
  typedef RefVector<Tau> TauRefVector;

  /* BEGIN CUSTOM Tau.h.global */
  /* END CUSTOM */

}

#endif
