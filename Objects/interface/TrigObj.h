#ifndef PandaTree_Objects_TrigObj_h
#define PandaTree_Objects_TrigObj_h
#include "Constants.h"
#include "../../Framework/interface/Element.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class TrigObj : public Element {
  public:
    struct datastore : public Element::datastore {
      datastore() : Element::datastore() {}
      ~datastore() { deallocate(); }

      Int_t* filterBits{0};
      Int_t* id{0};
      Int_t* l1charge{0};
      Int_t* l1iso{0};
      Float_t* l1pt{0};
      Float_t* l1pt_2{0};
      Float_t* l2pt{0};
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};

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

    typedef Array<TrigObj> array_type;
    typedef Collection<TrigObj> collection_type;

    typedef Element base_type;

    TrigObj(char const* name = "");
    TrigObj(TrigObj const&);
    TrigObj(datastore&, UInt_t idx);
    ~TrigObj();
    TrigObj& operator=(TrigObj const&);

    static char const* typeName() { return "TrigObj"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Int_t& filterBits;
    Int_t& id;
    Int_t& l1charge;
    Int_t& l1iso;
    Float_t& l1pt;
    Float_t& l1pt_2;
    Float_t& l2pt;
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;

    /* BEGIN CUSTOM TrigObj.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    TrigObj(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<TrigObj> TrigObjArray;
  typedef Collection<TrigObj> TrigObjCollection;
  typedef Ref<TrigObj> TrigObjRef;
  typedef RefVector<TrigObj> TrigObjRefVector;

  /* BEGIN CUSTOM TrigObj.h.global */
  /* END CUSTOM */

}

#endif
