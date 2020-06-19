#ifndef PandaTree_Objects_Flags_h
#define PandaTree_Objects_Flags_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Flags : public Singlet {
  public:
    typedef Singlet base_type;

    Flags(char const* name = "");
    Flags(Flags const&);
    ~Flags();
    Flags& operator=(Flags const&);

    static char const* typeName() { return "Flags"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Bool_t HBHENoiseFilter{};
    Bool_t HBHENoiseIsoFilter{};
    Bool_t CSCTightHaloFilter{};
    Bool_t CSCTightHaloTrkMuUnvetoFilter{};
    Bool_t CSCTightHalo2015Filter{};
    Bool_t globalTightHalo2016Filter{};
    Bool_t globalSuperTightHalo2016Filter{};
    Bool_t HcalStripHaloFilter{};
    Bool_t hcalLaserEventFilter{};
    Bool_t EcalDeadCellTriggerPrimitiveFilter{};
    Bool_t EcalDeadCellBoundaryEnergyFilter{};
    Bool_t ecalBadCalibFilter{};
    Bool_t goodVertices{};
    Bool_t eeBadScFilter{};
    Bool_t ecalLaserCorrFilter{};
    Bool_t trkPOGFilters{};
    Bool_t chargedHadronTrackResolutionFilter{};
    Bool_t muonBadTrackFilter{};
    Bool_t BadChargedCandidateFilter{};
    Bool_t BadPFMuonFilter{};
    Bool_t BadChargedCandidateSummer16Filter{};
    Bool_t BadPFMuonSummer16Filter{};
    Bool_t trkPOG_manystripclus53X{};
    Bool_t trkPOG_toomanystripclus53X{};
    Bool_t trkPOG_logErrorTooManyClusters{};
    Bool_t METFilters{};
    Bool_t ecalBadCalibFilterV2{};

    /* BEGIN CUSTOM Flags.h.classdef */
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

  /* BEGIN CUSTOM Flags.h.global */
  /* END CUSTOM */

}

#endif
