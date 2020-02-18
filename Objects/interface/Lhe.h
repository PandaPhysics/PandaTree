#ifndef PandaTree_Objects_Lhe_h
#define PandaTree_Objects_Lhe_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Lhe : public Singlet {
  public:
    typedef Singlet base_type;

    Lhe(char const* name = "");
    Lhe(Lhe const&);
    ~Lhe();
    Lhe& operator=(Lhe const&);

    static char const* typeName() { return "Lhe"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t HT{};
    Float_t Vpt{};
    Int_t Njets{};

    /* BEGIN CUSTOM Lhe.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

  protected:
    void doSetStatus_(TTree&, utils::BranchList const&) override;
    utils::BranchList doGetStatus_(TTree&) const override;
    utils::BranchList doGetBranchNames_(Bool_t) const override;
    void doSetAddress_(TTree&, utils::BranchList const& = {"*"}, Bool_t setStatus = kTRUE) override;
    void doBook_(TTree&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  /* BEGIN CUSTOM Lhe.h.global */
  /* END CUSTOM */

}

#endif
