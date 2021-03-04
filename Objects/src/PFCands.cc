#include "../interface/PFCands.h"

/*static*/
panda::utils::BranchList
panda::PFCands::getListOfBranches()
{
  utils::BranchList blist;
  blist += PFParticle::getListOfBranches();
  blist += {"puppiWeight", "puppiWeightNoLep", "vtxChi2", "trkChi2", "dz", "dzErr", "d0", "d0Err", "fromPV", "pvAssocQuality", "lostInnerHits", "trkQuality", "trkPt", "trkEta", "trkPhi"};
  return blist;
}

void
panda::PFCands::datastore::allocate(UInt_t _nmax)
{
  PFParticle::datastore::allocate(_nmax);

  puppiWeight = new Float_t[nmax_];
  puppiWeightNoLep = new Float_t[nmax_];
  vtxChi2 = new Float_t[nmax_];
  trkChi2 = new Float_t[nmax_];
  dz = new Float_t[nmax_];
  dzErr = new Float_t[nmax_];
  d0 = new Float_t[nmax_];
  d0Err = new Float_t[nmax_];
  fromPV = new Int_t[nmax_];
  pvAssocQuality = new Int_t[nmax_];
  lostInnerHits = new Int_t[nmax_];
  trkQuality = new Int_t[nmax_];
  trkPt = new Float_t[nmax_];
  trkEta = new Float_t[nmax_];
  trkPhi = new Float_t[nmax_];
}

void
panda::PFCands::datastore::deallocate()
{
  PFParticle::datastore::deallocate();

  delete [] puppiWeight;
  puppiWeight = 0;
  delete [] puppiWeightNoLep;
  puppiWeightNoLep = 0;
  delete [] vtxChi2;
  vtxChi2 = 0;
  delete [] trkChi2;
  trkChi2 = 0;
  delete [] dz;
  dz = 0;
  delete [] dzErr;
  dzErr = 0;
  delete [] d0;
  d0 = 0;
  delete [] d0Err;
  d0Err = 0;
  delete [] fromPV;
  fromPV = 0;
  delete [] pvAssocQuality;
  pvAssocQuality = 0;
  delete [] lostInnerHits;
  lostInnerHits = 0;
  delete [] trkQuality;
  trkQuality = 0;
  delete [] trkPt;
  trkPt = 0;
  delete [] trkEta;
  trkEta = 0;
  delete [] trkPhi;
  trkPhi = 0;
}

void
panda::PFCands::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  PFParticle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "puppiWeight", _branches);
  utils::setStatus(_tree, _name, "puppiWeightNoLep", _branches);
  utils::setStatus(_tree, _name, "vtxChi2", _branches);
  utils::setStatus(_tree, _name, "trkChi2", _branches);
  utils::setStatus(_tree, _name, "dz", _branches);
  utils::setStatus(_tree, _name, "dzErr", _branches);
  utils::setStatus(_tree, _name, "d0", _branches);
  utils::setStatus(_tree, _name, "d0Err", _branches);
  utils::setStatus(_tree, _name, "fromPV", _branches);
  utils::setStatus(_tree, _name, "pvAssocQuality", _branches);
  utils::setStatus(_tree, _name, "lostInnerHits", _branches);
  utils::setStatus(_tree, _name, "trkQuality", _branches);
  utils::setStatus(_tree, _name, "trkPt", _branches);
  utils::setStatus(_tree, _name, "trkEta", _branches);
  utils::setStatus(_tree, _name, "trkPhi", _branches);
}

panda::utils::BranchList
panda::PFCands::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(PFParticle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "puppiWeight"));
  blist.push_back(utils::getStatus(_tree, _name, "puppiWeightNoLep"));
  blist.push_back(utils::getStatus(_tree, _name, "vtxChi2"));
  blist.push_back(utils::getStatus(_tree, _name, "trkChi2"));
  blist.push_back(utils::getStatus(_tree, _name, "dz"));
  blist.push_back(utils::getStatus(_tree, _name, "dzErr"));
  blist.push_back(utils::getStatus(_tree, _name, "d0"));
  blist.push_back(utils::getStatus(_tree, _name, "d0Err"));
  blist.push_back(utils::getStatus(_tree, _name, "fromPV"));
  blist.push_back(utils::getStatus(_tree, _name, "pvAssocQuality"));
  blist.push_back(utils::getStatus(_tree, _name, "lostInnerHits"));
  blist.push_back(utils::getStatus(_tree, _name, "trkQuality"));
  blist.push_back(utils::getStatus(_tree, _name, "trkPt"));
  blist.push_back(utils::getStatus(_tree, _name, "trkEta"));
  blist.push_back(utils::getStatus(_tree, _name, "trkPhi"));

  return blist;
}

void
panda::PFCands::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  PFParticle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "puppiWeight", puppiWeight, _branches, _setStatus);
  utils::setAddress(_tree, _name, "puppiWeightNoLep", puppiWeightNoLep, _branches, _setStatus);
  utils::setAddress(_tree, _name, "vtxChi2", vtxChi2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "trkChi2", trkChi2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dz", dz, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dzErr", dzErr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "d0", d0, _branches, _setStatus);
  utils::setAddress(_tree, _name, "d0Err", d0Err, _branches, _setStatus);
  utils::setAddress(_tree, _name, "fromPV", fromPV, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pvAssocQuality", pvAssocQuality, _branches, _setStatus);
  utils::setAddress(_tree, _name, "lostInnerHits", lostInnerHits, _branches, _setStatus);
  utils::setAddress(_tree, _name, "trkQuality", trkQuality, _branches, _setStatus);
  utils::setAddress(_tree, _name, "trkPt", trkPt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "trkEta", trkEta, _branches, _setStatus);
  utils::setAddress(_tree, _name, "trkPhi", trkPhi, _branches, _setStatus);
}

void
panda::PFCands::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  PFParticle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "puppiWeight", size, 'F', puppiWeight, _branches);
  utils::book(_tree, _name, "puppiWeightNoLep", size, 'F', puppiWeightNoLep, _branches);
  utils::book(_tree, _name, "vtxChi2", size, 'F', vtxChi2, _branches);
  utils::book(_tree, _name, "trkChi2", size, 'F', trkChi2, _branches);
  utils::book(_tree, _name, "dz", size, 'F', dz, _branches);
  utils::book(_tree, _name, "dzErr", size, 'F', dzErr, _branches);
  utils::book(_tree, _name, "d0", size, 'F', d0, _branches);
  utils::book(_tree, _name, "d0Err", size, 'F', d0Err, _branches);
  utils::book(_tree, _name, "fromPV", size, 'I', fromPV, _branches);
  utils::book(_tree, _name, "pvAssocQuality", size, 'I', pvAssocQuality, _branches);
  utils::book(_tree, _name, "lostInnerHits", size, 'I', lostInnerHits, _branches);
  utils::book(_tree, _name, "trkQuality", size, 'I', trkQuality, _branches);
  utils::book(_tree, _name, "trkPt", size, 'F', trkPt, _branches);
  utils::book(_tree, _name, "trkEta", size, 'F', trkEta, _branches);
  utils::book(_tree, _name, "trkPhi", size, 'F', trkPhi, _branches);
}

void
panda::PFCands::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  PFParticle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "puppiWeight");
  utils::resetAddress(_tree, _name, "puppiWeightNoLep");
  utils::resetAddress(_tree, _name, "vtxChi2");
  utils::resetAddress(_tree, _name, "trkChi2");
  utils::resetAddress(_tree, _name, "dz");
  utils::resetAddress(_tree, _name, "dzErr");
  utils::resetAddress(_tree, _name, "d0");
  utils::resetAddress(_tree, _name, "d0Err");
  utils::resetAddress(_tree, _name, "fromPV");
  utils::resetAddress(_tree, _name, "pvAssocQuality");
  utils::resetAddress(_tree, _name, "lostInnerHits");
  utils::resetAddress(_tree, _name, "trkQuality");
  utils::resetAddress(_tree, _name, "trkPt");
  utils::resetAddress(_tree, _name, "trkEta");
  utils::resetAddress(_tree, _name, "trkPhi");
}

void
panda::PFCands::datastore::resizeVectors_(UInt_t _size)
{
  PFParticle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::PFCands::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return PFCands::getListOfBranches().fullNames(_name);
}

panda::PFCands::PFCands(char const* _name/* = ""*/) :
  PFParticle(new PFCandsArray(1, _name)),
  puppiWeight(gStore.getData(this).puppiWeight[0]),
  puppiWeightNoLep(gStore.getData(this).puppiWeightNoLep[0]),
  vtxChi2(gStore.getData(this).vtxChi2[0]),
  trkChi2(gStore.getData(this).trkChi2[0]),
  dz(gStore.getData(this).dz[0]),
  dzErr(gStore.getData(this).dzErr[0]),
  d0(gStore.getData(this).d0[0]),
  d0Err(gStore.getData(this).d0Err[0]),
  fromPV(gStore.getData(this).fromPV[0]),
  pvAssocQuality(gStore.getData(this).pvAssocQuality[0]),
  lostInnerHits(gStore.getData(this).lostInnerHits[0]),
  trkQuality(gStore.getData(this).trkQuality[0]),
  trkPt(gStore.getData(this).trkPt[0]),
  trkEta(gStore.getData(this).trkEta[0]),
  trkPhi(gStore.getData(this).trkPhi[0])
{
}

panda::PFCands::PFCands(PFCands const& _src) :
  PFParticle(new PFCandsArray(1, _src.getName())),
  puppiWeight(gStore.getData(this).puppiWeight[0]),
  puppiWeightNoLep(gStore.getData(this).puppiWeightNoLep[0]),
  vtxChi2(gStore.getData(this).vtxChi2[0]),
  trkChi2(gStore.getData(this).trkChi2[0]),
  dz(gStore.getData(this).dz[0]),
  dzErr(gStore.getData(this).dzErr[0]),
  d0(gStore.getData(this).d0[0]),
  d0Err(gStore.getData(this).d0Err[0]),
  fromPV(gStore.getData(this).fromPV[0]),
  pvAssocQuality(gStore.getData(this).pvAssocQuality[0]),
  lostInnerHits(gStore.getData(this).lostInnerHits[0]),
  trkQuality(gStore.getData(this).trkQuality[0]),
  trkPt(gStore.getData(this).trkPt[0]),
  trkEta(gStore.getData(this).trkEta[0]),
  trkPhi(gStore.getData(this).trkPhi[0])
{
  operator=(_src);
}

panda::PFCands::PFCands(datastore& _data, UInt_t _idx) :
  PFParticle(_data, _idx),
  puppiWeight(_data.puppiWeight[_idx]),
  puppiWeightNoLep(_data.puppiWeightNoLep[_idx]),
  vtxChi2(_data.vtxChi2[_idx]),
  trkChi2(_data.trkChi2[_idx]),
  dz(_data.dz[_idx]),
  dzErr(_data.dzErr[_idx]),
  d0(_data.d0[_idx]),
  d0Err(_data.d0Err[_idx]),
  fromPV(_data.fromPV[_idx]),
  pvAssocQuality(_data.pvAssocQuality[_idx]),
  lostInnerHits(_data.lostInnerHits[_idx]),
  trkQuality(_data.trkQuality[_idx]),
  trkPt(_data.trkPt[_idx]),
  trkEta(_data.trkEta[_idx]),
  trkPhi(_data.trkPhi[_idx])
{
}

panda::PFCands::PFCands(ArrayBase* _array) :
  PFParticle(_array),
  puppiWeight(gStore.getData(this).puppiWeight[0]),
  puppiWeightNoLep(gStore.getData(this).puppiWeightNoLep[0]),
  vtxChi2(gStore.getData(this).vtxChi2[0]),
  trkChi2(gStore.getData(this).trkChi2[0]),
  dz(gStore.getData(this).dz[0]),
  dzErr(gStore.getData(this).dzErr[0]),
  d0(gStore.getData(this).d0[0]),
  d0Err(gStore.getData(this).d0Err[0]),
  fromPV(gStore.getData(this).fromPV[0]),
  pvAssocQuality(gStore.getData(this).pvAssocQuality[0]),
  lostInnerHits(gStore.getData(this).lostInnerHits[0]),
  trkQuality(gStore.getData(this).trkQuality[0]),
  trkPt(gStore.getData(this).trkPt[0]),
  trkEta(gStore.getData(this).trkEta[0]),
  trkPhi(gStore.getData(this).trkPhi[0])
{
}

panda::PFCands::~PFCands()
{
  destructor();
}

void
panda::PFCands::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM PFCands.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    PFParticle::destructor(kTRUE);
}

panda::PFCands&
panda::PFCands::operator=(PFCands const& _src)
{
  PFParticle::operator=(_src);

  puppiWeight = _src.puppiWeight;
  puppiWeightNoLep = _src.puppiWeightNoLep;
  vtxChi2 = _src.vtxChi2;
  trkChi2 = _src.trkChi2;
  dz = _src.dz;
  dzErr = _src.dzErr;
  d0 = _src.d0;
  d0Err = _src.d0Err;
  fromPV = _src.fromPV;
  pvAssocQuality = _src.pvAssocQuality;
  lostInnerHits = _src.lostInnerHits;
  trkQuality = _src.trkQuality;
  trkPt = _src.trkPt;
  trkEta = _src.trkEta;
  trkPhi = _src.trkPhi;

  /* BEGIN CUSTOM PFCands.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::PFCands::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  PFParticle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "puppiWeight", "", 'F', &puppiWeight, _branches);
  utils::book(_tree, _name, "puppiWeightNoLep", "", 'F', &puppiWeightNoLep, _branches);
  utils::book(_tree, _name, "vtxChi2", "", 'F', &vtxChi2, _branches);
  utils::book(_tree, _name, "trkChi2", "", 'F', &trkChi2, _branches);
  utils::book(_tree, _name, "dz", "", 'F', &dz, _branches);
  utils::book(_tree, _name, "dzErr", "", 'F', &dzErr, _branches);
  utils::book(_tree, _name, "d0", "", 'F', &d0, _branches);
  utils::book(_tree, _name, "d0Err", "", 'F', &d0Err, _branches);
  utils::book(_tree, _name, "fromPV", "", 'I', &fromPV, _branches);
  utils::book(_tree, _name, "pvAssocQuality", "", 'I', &pvAssocQuality, _branches);
  utils::book(_tree, _name, "lostInnerHits", "", 'I', &lostInnerHits, _branches);
  utils::book(_tree, _name, "trkQuality", "", 'I', &trkQuality, _branches);
  utils::book(_tree, _name, "trkPt", "", 'F', &trkPt, _branches);
  utils::book(_tree, _name, "trkEta", "", 'F', &trkEta, _branches);
  utils::book(_tree, _name, "trkPhi", "", 'F', &trkPhi, _branches);
}

void
panda::PFCands::doInit_()
{
  PFParticle::doInit_();

  puppiWeight = 0.;
  puppiWeightNoLep = 0.;
  vtxChi2 = 0.;
  trkChi2 = 0.;
  dz = 0.;
  dzErr = 0.;
  d0 = 0.;
  d0Err = 0.;
  fromPV = 0;
  pvAssocQuality = 0;
  lostInnerHits = 0;
  trkQuality = 0;
  trkPt = 0.;
  trkEta = 0.;
  trkPhi = 0.;

  /* BEGIN CUSTOM PFCands.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::PFCands::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM PFCands.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::PFCands::dump(std::ostream& _out/* = std::cout*/) const
{
  PFParticle::dump(_out);

  _out << "puppiWeight = " << puppiWeight << std::endl;
  _out << "puppiWeightNoLep = " << puppiWeightNoLep << std::endl;
  _out << "vtxChi2 = " << vtxChi2 << std::endl;
  _out << "trkChi2 = " << trkChi2 << std::endl;
  _out << "dz = " << dz << std::endl;
  _out << "dzErr = " << dzErr << std::endl;
  _out << "d0 = " << d0 << std::endl;
  _out << "d0Err = " << d0Err << std::endl;
  _out << "fromPV = " << fromPV << std::endl;
  _out << "pvAssocQuality = " << pvAssocQuality << std::endl;
  _out << "lostInnerHits = " << lostInnerHits << std::endl;
  _out << "trkQuality = " << trkQuality << std::endl;
  _out << "trkPt = " << trkPt << std::endl;
  _out << "trkEta = " << trkEta << std::endl;
  _out << "trkPhi = " << trkPhi << std::endl;
}

/* BEGIN CUSTOM PFCands.cc.global */
/* END CUSTOM */
