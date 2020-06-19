#ifndef PandaTree_Objects_LHEPart_h
#define PandaTree_Objects_LHEPart_h
#include "Constants.h"
#include "../../Framework/interface/Element.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class LHEPart : public Element {
  public:
    struct datastore : public Element::datastore {
      datastore() : Element::datastore() {}
      ~datastore() { deallocate(); }

      Float_t* eta{0};
      Float_t* mass{0};
      Float_t* pt{0};
      Float_t* phi{0};
      Int_t* pdgId{0};

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

    typedef Array<LHEPart> array_type;
    typedef Collection<LHEPart> collection_type;

    typedef Element base_type;

    LHEPart(char const* name = "");
    LHEPart(LHEPart const&);
    LHEPart(datastore&, UInt_t idx);
    ~LHEPart();
    LHEPart& operator=(LHEPart const&);

    static char const* typeName() { return "LHEPart"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t& eta;
    Float_t& mass;
    Float_t& pt;
    Float_t& phi;
    Int_t& pdgId;

    /* BEGIN CUSTOM LHEPart.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    LHEPart(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<LHEPart> LHEPartArray;
  typedef Collection<LHEPart> LHEPartCollection;
  typedef Ref<LHEPart> LHEPartRef;
  typedef RefVector<LHEPart> LHEPartRefVector;

  /* BEGIN CUSTOM LHEPart.h.global */
  /* END CUSTOM */

}

#endif
