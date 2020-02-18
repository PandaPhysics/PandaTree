#ifndef PandaTree_Objects_LHE_h
#define PandaTree_Objects_LHE_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class LHE : public Singlet {
  public:
    typedef Singlet base_type;

    LHE(char const* name = "");
    LHE(LHE const&);
    ~LHE();
    LHE& operator=(LHE const&);

    static char const* typeName() { return "LHE"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t HT{};
    Float_t Vpt{};
    Int_t Njets{};

    /* BEGIN CUSTOM LHE.h.classdef */
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

  /* BEGIN CUSTOM LHE.h.global */
  /* END CUSTOM */

}

#endif
