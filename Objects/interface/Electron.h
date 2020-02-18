#ifndef PandaTree_Objects_Electron_h
#define PandaTree_Objects_Electron_h
#include "Constants.h"
#include "Lepton.h"
#include "EGamma.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Electron : public Lepton, public EGamma {
  public:
    struct datastore : public Lepton::datastore, public EGamma::datastore {
      datastore() : Lepton::datastore(), EGamma::datastore() {}
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
      /* Lepton
      Float_t* ip3d{0};
      Float_t* sip3d{0};
      Float_t* dxy{0};
      Float_t* dxyErr{0};
      Float_t* dz{0};
      Float_t* dzErr{0};
      Float_t* jetRelIso{0};
      Float_t* miniPFRelIso_all{0};
      Float_t* miniPFRelIso_chg{0};
      Float_t* pfRelIso03_all{0};
      Float_t* pfRelIso03_chg{0};
      Float_t* mvaTTH{0};
      Int_t* tightCharge{0};
      Bool_t* isPFcand{0};
      */
      /* EGamma
      Float_t* eCorr{0};
      Float_t* eInvMinusPInv{0};
      Float_t* energyErr{0};
      Float_t* hoe{0};
      Float_t* r9{0};
      Float_t* sieie{0};
      Int_t* cutBased{0};
      Int_t* vidNestedWPBitmap{0};
      */
      Float_t* deltaEtaSC{0};
      Float_t* dr03EcalRecHitSumEt{0};
      Float_t* dr03HcalDepth1TowerSumEt{0};
      Float_t* dr03TkSumPt{0};
      Float_t* dr03TkSumPtHEEP{0};
      Float_t* mvaFall17V1Iso{0};
      Float_t* mvaFall17V1noIso{0};
      Float_t* mvaFall17V2Iso{0};
      Float_t* mvaFall17V2noIso{0};
      Float_t* mvaSpring16GP{0};
      Float_t* mvaSpring16HZZ{0};
      Bool_t* mvaFall17V1Iso_WP80{0};
      Bool_t* mvaFall17V1Iso_WP90{0};
      Bool_t* mvaFall17V1Iso_WPL{0};
      Bool_t* mvaFall17V1noIso_WP80{0};
      Bool_t* mvaFall17V1noIso_WP90{0};
      Bool_t* mvaFall17V1noIso_WPL{0};
      Bool_t* mvaFall17V2Iso_WP80{0};
      Bool_t* mvaFall17V2Iso_WP90{0};
      Bool_t* mvaFall17V2Iso_WPL{0};
      Bool_t* mvaFall17V2noIso_WP80{0};
      Bool_t* mvaFall17V2noIso_WP90{0};
      Bool_t* mvaFall17V2noIso_WPL{0};
      Bool_t* mvaSpring16GP_WP80{0};
      Bool_t* mvaSpring16GP_WP90{0};
      Bool_t* mvaSpring16HZZ_WPL{0};
      Int_t* vidNestedWPBitmapSpring15{0};
      Int_t* vidNestedWPBitmapSum16{0};
      Int_t* cutBased_Fall17_V1{0};
      Int_t* cutBased{0};
      Bool_t* cutBased_HEEP{0};
      Bool_t* convVeto{0};
      UChar_t* lostHits{0};
      Int_t* photonIdx{0};

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

    typedef Array<Electron> array_type;
    typedef Collection<Electron> collection_type;

    typedef Lepton base_type;

    Electron(char const* name = "");
    Electron(Electron const&);
    Electron(datastore&, UInt_t idx);
    ~Electron();
    Electron& operator=(Electron const&);

    static char const* typeName() { return "Electron"; }

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
    /* Lepton
    Float_t& ip3d;
    Float_t& sip3d;
    Float_t& dxy;
    Float_t& dxyErr;
    Float_t& dz;
    Float_t& dzErr;
    Float_t& jetRelIso;
    Float_t& miniPFRelIso_all;
    Float_t& miniPFRelIso_chg;
    Float_t& pfRelIso03_all;
    Float_t& pfRelIso03_chg;
    Float_t& mvaTTH;
    Int_t& tightCharge;
    Bool_t& isPFcand;
    */
    /* EGamma
    Float_t& eCorr;
    Float_t& eInvMinusPInv;
    Float_t& energyErr;
    Float_t& hoe;
    Float_t& r9;
    Float_t& sieie;
    Int_t& cutBased;
    Int_t& vidNestedWPBitmap;
    */
    Float_t& deltaEtaSC;
    Float_t& dr03EcalRecHitSumEt;
    Float_t& dr03HcalDepth1TowerSumEt;
    Float_t& dr03TkSumPt;
    Float_t& dr03TkSumPtHEEP;
    Float_t& mvaFall17V1Iso;
    Float_t& mvaFall17V1noIso;
    Float_t& mvaFall17V2Iso;
    Float_t& mvaFall17V2noIso;
    Float_t& mvaSpring16GP;
    Float_t& mvaSpring16HZZ;
    Bool_t& mvaFall17V1Iso_WP80;
    Bool_t& mvaFall17V1Iso_WP90;
    Bool_t& mvaFall17V1Iso_WPL;
    Bool_t& mvaFall17V1noIso_WP80;
    Bool_t& mvaFall17V1noIso_WP90;
    Bool_t& mvaFall17V1noIso_WPL;
    Bool_t& mvaFall17V2Iso_WP80;
    Bool_t& mvaFall17V2Iso_WP90;
    Bool_t& mvaFall17V2Iso_WPL;
    Bool_t& mvaFall17V2noIso_WP80;
    Bool_t& mvaFall17V2noIso_WP90;
    Bool_t& mvaFall17V2noIso_WPL;
    Bool_t& mvaSpring16GP_WP80;
    Bool_t& mvaSpring16GP_WP90;
    Bool_t& mvaSpring16HZZ_WPL;
    Int_t& vidNestedWPBitmapSpring15;
    Int_t& vidNestedWPBitmapSum16;
    Int_t& cutBased_Fall17_V1;
    Int_t& cutBased;
    Bool_t& cutBased_HEEP;
    Bool_t& convVeto;
    UChar_t& lostHits;
    Int_t& photonIdx;

    /* BEGIN CUSTOM Electron.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Electron(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Electron> ElectronArray;
  typedef Collection<Electron> ElectronCollection;
  typedef Ref<Electron> ElectronRef;
  typedef RefVector<Electron> ElectronRefVector;

  /* BEGIN CUSTOM Electron.h.global */
  /* END CUSTOM */

}

#endif
