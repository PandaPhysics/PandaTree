#ifndef PandaTree_Objects_Lhepart_h
#define PandaTree_Objects_Lhepart_h
#include "Constants.h"
#include "../../Framework/interface/Element.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Lhepart : public Element {
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

    typedef Array<Lhepart> array_type;
    typedef Collection<Lhepart> collection_type;

    typedef Element base_type;

    Lhepart(char const* name = "");
    Lhepart(Lhepart const&);
    Lhepart(datastore&, UInt_t idx);
    ~Lhepart();
    Lhepart& operator=(Lhepart const&);

    static char const* typeName() { return "Lhepart"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t& eta;
    Float_t& mass;
    Float_t& pt;
    Float_t& phi;
    Int_t& pdgId;

    /* BEGIN CUSTOM Lhepart.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Lhepart(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Lhepart> LhepartArray;
  typedef Collection<Lhepart> LhepartCollection;
  typedef Ref<Lhepart> LhepartRef;
  typedef RefVector<Lhepart> LhepartRefVector;

  /* BEGIN CUSTOM Lhepart.h.global */
  /* END CUSTOM */

}

#endif
