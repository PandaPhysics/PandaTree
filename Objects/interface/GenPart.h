#ifndef PandaTree_Objects_GenPart_h
#define PandaTree_Objects_GenPart_h
#include "Constants.h"
#include "Particle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class GenPart : public Particle {
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
      Int_t* pdgId{0};
      Int_t* status{0};
      Int_t* statusFlags{0};
      UChar_t* genPartFlav{0};
      Int_t* genPartIdxMother{0};
      Int_t* idx{0};

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

    typedef Array<GenPart> array_type;
    typedef Collection<GenPart> collection_type;

    typedef Particle base_type;

    GenPart(char const* name = "");
    GenPart(GenPart const&);
    GenPart(datastore&, UInt_t idx);
    ~GenPart();
    GenPart& operator=(GenPart const&);

    static char const* typeName() { return "GenPart"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    Int_t& pdgId;
    Int_t& status;
    Int_t& statusFlags;
    UChar_t& genPartFlav;
    Int_t& genPartIdxMother;
    Int_t& idx;

    /* BEGIN CUSTOM GenPart.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    GenPart(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<GenPart> GenPartArray;
  typedef Collection<GenPart> GenPartCollection;
  typedef Ref<GenPart> GenPartRef;
  typedef RefVector<GenPart> GenPartRefVector;

  /* BEGIN CUSTOM GenPart.h.global */
  /* END CUSTOM */

}

#endif
