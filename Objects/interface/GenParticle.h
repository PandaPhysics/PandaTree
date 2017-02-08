#ifndef PandaTree_Objects_GenParticle_h
#define PandaTree_Objects_GenParticle_h
#include "Constants.h"
#include "ParticleM.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class GenParticle : public ParticleM {
  public:
    struct datastore : public ParticleM::datastore {
      datastore() : ParticleM::datastore() {}
      ~datastore() { deallocate(); }

      /* Particle
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      */
      /* ParticleM
      Float_t* mass{0};
      */
      Int_t* pdgid{0};
      UShort_t* statusFlags{0};
      ContainerBase const* parentContainer_{0};
      Int_t* parent_{0};

      void allocate(UInt_t n) override;
      void deallocate() override;
      void setStatus(TTree&, TString const&, utils::BranchList const&) override;
      utils::BranchList getStatus(TTree&, TString const&) const override;
      void setAddress(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t setStatus = kTRUE) override;
      void book(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t dynamic = kTRUE) override;
      void releaseTree(TTree&, TString const&) override;
      void resizeVectors_(UInt_t) override;
    };

    typedef Array<GenParticle> array_type;
    typedef Collection<GenParticle> collection_type;

    typedef ParticleM base_type;

    GenParticle(char const* name = "");
    GenParticle(GenParticle const&);
    GenParticle(datastore&, UInt_t idx);
    ~GenParticle();
    GenParticle& operator=(GenParticle const&);


    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    */
    /* ParticleM
    Float_t& mass;
    */
    Int_t& pdgid;
    UShort_t& statusFlags;
    Ref<GenParticle> parent;

    /* BEGIN CUSTOM GenParticle.h.classdef */
    /* END CUSTOM */

    void destructor() override;

  protected:
    GenParticle(ArrayBase*);

    void doSetStatus_(TTree&, TString const&, utils::BranchList const&) override;
    utils::BranchList doGetStatus_(TTree&, TString const&) const override;
    void doSetAddress_(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t setStatus = kTRUE) override;
    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doReleaseTree_(TTree&, TString const&) override;
    void doInit_() override;
  };

  typedef GenParticle::array_type GenParticleArray;
  typedef GenParticle::collection_type GenParticleCollection;
  typedef Ref<GenParticle> GenParticleRef;
  typedef RefVector<GenParticle> GenParticleRefVector;

  /* BEGIN CUSTOM GenParticle.h.global */
  /* END CUSTOM */

}

#endif
