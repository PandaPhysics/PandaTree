#ifndef PandaTree_Objects_Photon_h
#define PandaTree_Objects_Photon_h
#include "Constants.h"
#include "PFParticle.h"
#include "EGamma.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Photon : public PFParticle, public EGamma {
  public:
    struct datastore : public PFParticle::datastore, public EGamma::datastore {
      datastore() : PFParticle::datastore(), EGamma::datastore() {}
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
      Float_t* mvaID{0};
      Float_t* mvaIDV1{0};
      Float_t* pfRelIso03_all{0};
      Float_t* pfRelIso03_chg{0};
      Bool_t* mvaID_WP80{0};
      Bool_t* mvaID_WP90{0};
      Bool_t* isScEtaEB{0};
      Bool_t* isScEtaEE{0};
      Bool_t* pixelSeed{0};
      Bool_t* electronVeto{0};
      Int_t* electronIdx{0};
      Int_t* cutBasedBitmap{0};
      Int_t* cutBased{0};

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

    typedef Array<Photon> array_type;
    typedef Collection<Photon> collection_type;

    typedef PFParticle base_type;

    Photon(char const* name = "");
    Photon(Photon const&);
    Photon(datastore&, UInt_t idx);
    ~Photon();
    Photon& operator=(Photon const&);

    static char const* typeName() { return "Photon"; }

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
    Float_t& mvaID;
    Float_t& mvaIDV1;
    Float_t& pfRelIso03_all;
    Float_t& pfRelIso03_chg;
    Bool_t& mvaID_WP80;
    Bool_t& mvaID_WP90;
    Bool_t& isScEtaEB;
    Bool_t& isScEtaEE;
    Bool_t& pixelSeed;
    Bool_t& electronVeto;
    Int_t& electronIdx;
    Int_t& cutBasedBitmap;
    Int_t& cutBased;

    /* BEGIN CUSTOM Photon.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Photon(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Photon> PhotonArray;
  typedef Collection<Photon> PhotonCollection;
  typedef Ref<Photon> PhotonRef;
  typedef RefVector<Photon> PhotonRefVector;

  /* BEGIN CUSTOM Photon.h.global */
  /* END CUSTOM */

}

#endif
