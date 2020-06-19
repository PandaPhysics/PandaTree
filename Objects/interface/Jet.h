#ifndef PandaTree_Objects_Jet_h
#define PandaTree_Objects_Jet_h
#include "Constants.h"
#include "RecoParticle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Jet : public RecoParticle {
  public:
    struct datastore : public RecoParticle::datastore {
      datastore() : RecoParticle::datastore() {}
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
      Float_t* area{0};
      Float_t* bRegCorr{0};
      Float_t* bRegRes{0};
      Float_t* btagCMVA{0};
      Float_t* btagCSVV2{0};
      Float_t* btagDeepB{0};
      Float_t* btagDeepC{0};
      Float_t* btagDeepFlavB{0};
      Float_t* chEmEF{0};
      Float_t* chHEF{0};
      Float_t* muEF{0};
      Float_t* neEmEF{0};
      Float_t* neHEF{0};
      Float_t* qgl{0};
      Float_t* rawFactor{0};
      Int_t* jetId{0};
      Int_t* nConstituents{0};
      Int_t* nElectrons{0};
      Int_t* nMuons{0};
      Int_t* puId{0};
      Int_t* electronIdx1{0};
      Int_t* electronIdx2{0};
      Int_t* muonIdx1{0};
      Int_t* muonIdx2{0};
      Float_t* muonSubtrFactor{0};
      Int_t* partonFlavour{0};
      Float_t* l1fac{0};

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

    typedef Array<Jet> array_type;
    typedef Collection<Jet> collection_type;

    typedef RecoParticle base_type;

    Jet(char const* name = "");
    Jet(Jet const&);
    Jet(datastore&, UInt_t idx);
    ~Jet();
    Jet& operator=(Jet const&);

    static char const* typeName() { return "Jet"; }

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
    Float_t& area;
    Float_t& bRegCorr;
    Float_t& bRegRes;
    Float_t& btagCMVA;
    Float_t& btagCSVV2;
    Float_t& btagDeepB;
    Float_t& btagDeepC;
    Float_t& btagDeepFlavB;
    Float_t& chEmEF;
    Float_t& chHEF;
    Float_t& muEF;
    Float_t& neEmEF;
    Float_t& neHEF;
    Float_t& qgl;
    Float_t& rawFactor;
    Int_t& jetId;
    Int_t& nConstituents;
    Int_t& nElectrons;
    Int_t& nMuons;
    Int_t& puId;
    Int_t& electronIdx1;
    Int_t& electronIdx2;
    Int_t& muonIdx1;
    Int_t& muonIdx2;
    Float_t& muonSubtrFactor;
    Int_t& partonFlavour;
    Float_t& l1fac;

    /* BEGIN CUSTOM Jet.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Jet(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Jet> JetArray;
  typedef Collection<Jet> JetCollection;
  typedef Ref<Jet> JetRef;
  typedef RefVector<Jet> JetRefVector;

  /* BEGIN CUSTOM Jet.h.global */
  /* END CUSTOM */

}

#endif
