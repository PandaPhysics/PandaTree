#ifndef PandaTree_Objects_CorrT1METJet_h
#define PandaTree_Objects_CorrT1METJet_h
#include "Constants.h"
#include "Particle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class CorrT1METJet : public Particle {
  public:
    struct datastore : public Particle::datastore {
      datastore() : Particle::datastore() {}
      ~datastore() { deallocate(); }

      /* Particle
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      Float_t* mass{0};
      */
      Float_t* area{0};
      Float_t* muonSubtrFactor{0};
      Float_t* rawPt{0};

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

    typedef Array<CorrT1METJet> array_type;
    typedef Collection<CorrT1METJet> collection_type;

    typedef Particle base_type;

    CorrT1METJet(char const* name = "");
    CorrT1METJet(CorrT1METJet const&);
    CorrT1METJet(datastore&, UInt_t idx);
    ~CorrT1METJet();
    CorrT1METJet& operator=(CorrT1METJet const&);

    static char const* typeName() { return "CorrT1METJet"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    Float_t& area;
    Float_t& muonSubtrFactor;
    Float_t& rawPt;

    /* BEGIN CUSTOM CorrT1METJet.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    CorrT1METJet(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<CorrT1METJet> CorrT1METJetArray;
  typedef Collection<CorrT1METJet> CorrT1METJetCollection;
  typedef Ref<CorrT1METJet> CorrT1METJetRef;
  typedef RefVector<CorrT1METJet> CorrT1METJetRefVector;

  /* BEGIN CUSTOM CorrT1METJet.h.global */
  /* END CUSTOM */

}

#endif
