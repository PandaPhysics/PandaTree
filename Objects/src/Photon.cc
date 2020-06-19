#include "../interface/Photon.h"

/*static*/
panda::utils::BranchList
panda::Photon::getListOfBranches()
{
  utils::BranchList blist;
  blist += PFParticle::getListOfBranches();
  blist += EGamma::getListOfBranches();
  blist += {"mvaID", "mvaIDV1", "pfRelIso03_all", "pfRelIso03_chg", "mvaID_WP80", "mvaID_WP90", "isScEtaEB", "isScEtaEE", "pixelSeed", "electronVeto", "electronIdx", "cutBasedBitmap", "cutBased"};
  return blist;
}

void
panda::Photon::datastore::allocate(UInt_t _nmax)
{
  PFParticle::datastore::allocate(_nmax);

  eCorr = new Float_t[nmax_];
  eInvMinusPInv = new Float_t[nmax_];
  energyErr = new Float_t[nmax_];
  hoe = new Float_t[nmax_];
  r9 = new Float_t[nmax_];
  sieie = new Float_t[nmax_];
  cutBased = new Int_t[nmax_];
  vidNestedWPBitmap = new Int_t[nmax_];
  mvaID = new Float_t[nmax_];
  mvaIDV1 = new Float_t[nmax_];
  pfRelIso03_all = new Float_t[nmax_];
  pfRelIso03_chg = new Float_t[nmax_];
  mvaID_WP80 = new Bool_t[nmax_];
  mvaID_WP90 = new Bool_t[nmax_];
  isScEtaEB = new Bool_t[nmax_];
  isScEtaEE = new Bool_t[nmax_];
  pixelSeed = new Bool_t[nmax_];
  electronVeto = new Bool_t[nmax_];
  electronIdx = new Int_t[nmax_];
  cutBasedBitmap = new Int_t[nmax_];
  cutBased = new Int_t[nmax_];
}

void
panda::Photon::datastore::deallocate()
{
  PFParticle::datastore::deallocate();

  delete [] eCorr;
  eCorr = 0;
  delete [] eInvMinusPInv;
  eInvMinusPInv = 0;
  delete [] energyErr;
  energyErr = 0;
  delete [] hoe;
  hoe = 0;
  delete [] r9;
  r9 = 0;
  delete [] sieie;
  sieie = 0;
  delete [] cutBased;
  cutBased = 0;
  delete [] vidNestedWPBitmap;
  vidNestedWPBitmap = 0;
  delete [] mvaID;
  mvaID = 0;
  delete [] mvaIDV1;
  mvaIDV1 = 0;
  delete [] pfRelIso03_all;
  pfRelIso03_all = 0;
  delete [] pfRelIso03_chg;
  pfRelIso03_chg = 0;
  delete [] mvaID_WP80;
  mvaID_WP80 = 0;
  delete [] mvaID_WP90;
  mvaID_WP90 = 0;
  delete [] isScEtaEB;
  isScEtaEB = 0;
  delete [] isScEtaEE;
  isScEtaEE = 0;
  delete [] pixelSeed;
  pixelSeed = 0;
  delete [] electronVeto;
  electronVeto = 0;
  delete [] electronIdx;
  electronIdx = 0;
  delete [] cutBasedBitmap;
  cutBasedBitmap = 0;
  delete [] cutBased;
  cutBased = 0;
}

void
panda::Photon::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  PFParticle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "eCorr", _branches);
  utils::setStatus(_tree, _name, "eInvMinusPInv", _branches);
  utils::setStatus(_tree, _name, "energyErr", _branches);
  utils::setStatus(_tree, _name, "hoe", _branches);
  utils::setStatus(_tree, _name, "r9", _branches);
  utils::setStatus(_tree, _name, "sieie", _branches);
  utils::setStatus(_tree, _name, "cutBased", _branches);
  utils::setStatus(_tree, _name, "vidNestedWPBitmap", _branches);
  utils::setStatus(_tree, _name, "mvaID", _branches);
  utils::setStatus(_tree, _name, "mvaIDV1", _branches);
  utils::setStatus(_tree, _name, "pfRelIso03_all", _branches);
  utils::setStatus(_tree, _name, "pfRelIso03_chg", _branches);
  utils::setStatus(_tree, _name, "mvaID_WP80", _branches);
  utils::setStatus(_tree, _name, "mvaID_WP90", _branches);
  utils::setStatus(_tree, _name, "isScEtaEB", _branches);
  utils::setStatus(_tree, _name, "isScEtaEE", _branches);
  utils::setStatus(_tree, _name, "pixelSeed", _branches);
  utils::setStatus(_tree, _name, "electronVeto", _branches);
  utils::setStatus(_tree, _name, "electronIdx", _branches);
  utils::setStatus(_tree, _name, "cutBasedBitmap", _branches);
  utils::setStatus(_tree, _name, "cutBased", _branches);
}

panda::utils::BranchList
panda::Photon::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(PFParticle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "eCorr"));
  blist.push_back(utils::getStatus(_tree, _name, "eInvMinusPInv"));
  blist.push_back(utils::getStatus(_tree, _name, "energyErr"));
  blist.push_back(utils::getStatus(_tree, _name, "hoe"));
  blist.push_back(utils::getStatus(_tree, _name, "r9"));
  blist.push_back(utils::getStatus(_tree, _name, "sieie"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBased"));
  blist.push_back(utils::getStatus(_tree, _name, "vidNestedWPBitmap"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaID"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaIDV1"));
  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso03_all"));
  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso03_chg"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaID_WP80"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaID_WP90"));
  blist.push_back(utils::getStatus(_tree, _name, "isScEtaEB"));
  blist.push_back(utils::getStatus(_tree, _name, "isScEtaEE"));
  blist.push_back(utils::getStatus(_tree, _name, "pixelSeed"));
  blist.push_back(utils::getStatus(_tree, _name, "electronVeto"));
  blist.push_back(utils::getStatus(_tree, _name, "electronIdx"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBasedBitmap"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBased"));

  return blist;
}

void
panda::Photon::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  PFParticle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "eCorr", eCorr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "eInvMinusPInv", eInvMinusPInv, _branches, _setStatus);
  utils::setAddress(_tree, _name, "energyErr", energyErr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "hoe", hoe, _branches, _setStatus);
  utils::setAddress(_tree, _name, "r9", r9, _branches, _setStatus);
  utils::setAddress(_tree, _name, "sieie", sieie, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBased", cutBased, _branches, _setStatus);
  utils::setAddress(_tree, _name, "vidNestedWPBitmap", vidNestedWPBitmap, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaID", mvaID, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaIDV1", mvaIDV1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfRelIso03_all", pfRelIso03_all, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfRelIso03_chg", pfRelIso03_chg, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaID_WP80", mvaID_WP80, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaID_WP90", mvaID_WP90, _branches, _setStatus);
  utils::setAddress(_tree, _name, "isScEtaEB", isScEtaEB, _branches, _setStatus);
  utils::setAddress(_tree, _name, "isScEtaEE", isScEtaEE, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pixelSeed", pixelSeed, _branches, _setStatus);
  utils::setAddress(_tree, _name, "electronVeto", electronVeto, _branches, _setStatus);
  utils::setAddress(_tree, _name, "electronIdx", electronIdx, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBasedBitmap", cutBasedBitmap, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBased", cutBased, _branches, _setStatus);
}

void
panda::Photon::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  PFParticle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "eCorr", size, 'F', eCorr, _branches);
  utils::book(_tree, _name, "eInvMinusPInv", size, 'F', eInvMinusPInv, _branches);
  utils::book(_tree, _name, "energyErr", size, 'F', energyErr, _branches);
  utils::book(_tree, _name, "hoe", size, 'F', hoe, _branches);
  utils::book(_tree, _name, "r9", size, 'F', r9, _branches);
  utils::book(_tree, _name, "sieie", size, 'F', sieie, _branches);
  utils::book(_tree, _name, "cutBased", size, 'I', cutBased, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmap", size, 'I', vidNestedWPBitmap, _branches);
  utils::book(_tree, _name, "mvaID", size, 'F', mvaID, _branches);
  utils::book(_tree, _name, "mvaIDV1", size, 'F', mvaIDV1, _branches);
  utils::book(_tree, _name, "pfRelIso03_all", size, 'F', pfRelIso03_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_chg", size, 'F', pfRelIso03_chg, _branches);
  utils::book(_tree, _name, "mvaID_WP80", size, 'O', mvaID_WP80, _branches);
  utils::book(_tree, _name, "mvaID_WP90", size, 'O', mvaID_WP90, _branches);
  utils::book(_tree, _name, "isScEtaEB", size, 'O', isScEtaEB, _branches);
  utils::book(_tree, _name, "isScEtaEE", size, 'O', isScEtaEE, _branches);
  utils::book(_tree, _name, "pixelSeed", size, 'O', pixelSeed, _branches);
  utils::book(_tree, _name, "electronVeto", size, 'O', electronVeto, _branches);
  utils::book(_tree, _name, "electronIdx", size, 'I', electronIdx, _branches);
  utils::book(_tree, _name, "cutBasedBitmap", size, 'I', cutBasedBitmap, _branches);
  utils::book(_tree, _name, "cutBased", size, 'I', cutBased, _branches);
}

void
panda::Photon::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  PFParticle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "eCorr");
  utils::resetAddress(_tree, _name, "eInvMinusPInv");
  utils::resetAddress(_tree, _name, "energyErr");
  utils::resetAddress(_tree, _name, "hoe");
  utils::resetAddress(_tree, _name, "r9");
  utils::resetAddress(_tree, _name, "sieie");
  utils::resetAddress(_tree, _name, "cutBased");
  utils::resetAddress(_tree, _name, "vidNestedWPBitmap");
  utils::resetAddress(_tree, _name, "mvaID");
  utils::resetAddress(_tree, _name, "mvaIDV1");
  utils::resetAddress(_tree, _name, "pfRelIso03_all");
  utils::resetAddress(_tree, _name, "pfRelIso03_chg");
  utils::resetAddress(_tree, _name, "mvaID_WP80");
  utils::resetAddress(_tree, _name, "mvaID_WP90");
  utils::resetAddress(_tree, _name, "isScEtaEB");
  utils::resetAddress(_tree, _name, "isScEtaEE");
  utils::resetAddress(_tree, _name, "pixelSeed");
  utils::resetAddress(_tree, _name, "electronVeto");
  utils::resetAddress(_tree, _name, "electronIdx");
  utils::resetAddress(_tree, _name, "cutBasedBitmap");
  utils::resetAddress(_tree, _name, "cutBased");
}

void
panda::Photon::datastore::resizeVectors_(UInt_t _size)
{
  PFParticle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Photon::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Photon::getListOfBranches().fullNames(_name);
}

panda::Photon::Photon(char const* _name/* = ""*/) :
  PFParticle(new PhotonArray(1, _name)),
  EGamma(gStore.getData(this), 0),
  mvaID(gStore.getData(this).mvaID[0]),
  mvaIDV1(gStore.getData(this).mvaIDV1[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  mvaID_WP80(gStore.getData(this).mvaID_WP80[0]),
  mvaID_WP90(gStore.getData(this).mvaID_WP90[0]),
  isScEtaEB(gStore.getData(this).isScEtaEB[0]),
  isScEtaEE(gStore.getData(this).isScEtaEE[0]),
  pixelSeed(gStore.getData(this).pixelSeed[0]),
  electronVeto(gStore.getData(this).electronVeto[0]),
  electronIdx(gStore.getData(this).electronIdx[0]),
  cutBasedBitmap(gStore.getData(this).cutBasedBitmap[0]),
  cutBased(gStore.getData(this).cutBased[0])
{
}

panda::Photon::Photon(Photon const& _src) :
  PFParticle(new PhotonArray(1, _src.getName())),
  EGamma(gStore.getData(this), 0),
  mvaID(gStore.getData(this).mvaID[0]),
  mvaIDV1(gStore.getData(this).mvaIDV1[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  mvaID_WP80(gStore.getData(this).mvaID_WP80[0]),
  mvaID_WP90(gStore.getData(this).mvaID_WP90[0]),
  isScEtaEB(gStore.getData(this).isScEtaEB[0]),
  isScEtaEE(gStore.getData(this).isScEtaEE[0]),
  pixelSeed(gStore.getData(this).pixelSeed[0]),
  electronVeto(gStore.getData(this).electronVeto[0]),
  electronIdx(gStore.getData(this).electronIdx[0]),
  cutBasedBitmap(gStore.getData(this).cutBasedBitmap[0]),
  cutBased(gStore.getData(this).cutBased[0])
{
  operator=(_src);
}

panda::Photon::Photon(datastore& _data, UInt_t _idx) :
  PFParticle(_data, _idx),
  EGamma(_data, _idx),
  mvaID(_data.mvaID[_idx]),
  mvaIDV1(_data.mvaIDV1[_idx]),
  pfRelIso03_all(_data.pfRelIso03_all[_idx]),
  pfRelIso03_chg(_data.pfRelIso03_chg[_idx]),
  mvaID_WP80(_data.mvaID_WP80[_idx]),
  mvaID_WP90(_data.mvaID_WP90[_idx]),
  isScEtaEB(_data.isScEtaEB[_idx]),
  isScEtaEE(_data.isScEtaEE[_idx]),
  pixelSeed(_data.pixelSeed[_idx]),
  electronVeto(_data.electronVeto[_idx]),
  electronIdx(_data.electronIdx[_idx]),
  cutBasedBitmap(_data.cutBasedBitmap[_idx]),
  cutBased(_data.cutBased[_idx])
{
}

panda::Photon::Photon(ArrayBase* _array) :
  PFParticle(_array),
  EGamma(gStore.getData(this), 0),
  mvaID(gStore.getData(this).mvaID[0]),
  mvaIDV1(gStore.getData(this).mvaIDV1[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  mvaID_WP80(gStore.getData(this).mvaID_WP80[0]),
  mvaID_WP90(gStore.getData(this).mvaID_WP90[0]),
  isScEtaEB(gStore.getData(this).isScEtaEB[0]),
  isScEtaEE(gStore.getData(this).isScEtaEE[0]),
  pixelSeed(gStore.getData(this).pixelSeed[0]),
  electronVeto(gStore.getData(this).electronVeto[0]),
  electronIdx(gStore.getData(this).electronIdx[0]),
  cutBasedBitmap(gStore.getData(this).cutBasedBitmap[0]),
  cutBased(gStore.getData(this).cutBased[0])
{
}

panda::Photon::~Photon()
{
  destructor();
}

void
panda::Photon::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Photon.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    PFParticle::destructor(kTRUE);
}

panda::Photon&
panda::Photon::operator=(Photon const& _src)
{
  PFParticle::operator=(_src);

  eCorr = _src.eCorr;
  eInvMinusPInv = _src.eInvMinusPInv;
  energyErr = _src.energyErr;
  hoe = _src.hoe;
  r9 = _src.r9;
  sieie = _src.sieie;
  cutBased = _src.cutBased;
  vidNestedWPBitmap = _src.vidNestedWPBitmap;
  mvaID = _src.mvaID;
  mvaIDV1 = _src.mvaIDV1;
  pfRelIso03_all = _src.pfRelIso03_all;
  pfRelIso03_chg = _src.pfRelIso03_chg;
  mvaID_WP80 = _src.mvaID_WP80;
  mvaID_WP90 = _src.mvaID_WP90;
  isScEtaEB = _src.isScEtaEB;
  isScEtaEE = _src.isScEtaEE;
  pixelSeed = _src.pixelSeed;
  electronVeto = _src.electronVeto;
  electronIdx = _src.electronIdx;
  cutBasedBitmap = _src.cutBasedBitmap;
  cutBased = _src.cutBased;

  /* BEGIN CUSTOM Photon.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Photon::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  PFParticle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "eCorr", "", 'F', &eCorr, _branches);
  utils::book(_tree, _name, "eInvMinusPInv", "", 'F', &eInvMinusPInv, _branches);
  utils::book(_tree, _name, "energyErr", "", 'F', &energyErr, _branches);
  utils::book(_tree, _name, "hoe", "", 'F', &hoe, _branches);
  utils::book(_tree, _name, "r9", "", 'F', &r9, _branches);
  utils::book(_tree, _name, "sieie", "", 'F', &sieie, _branches);
  utils::book(_tree, _name, "cutBased", "", 'I', &cutBased, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmap", "", 'I', &vidNestedWPBitmap, _branches);
  utils::book(_tree, _name, "mvaID", "", 'F', &mvaID, _branches);
  utils::book(_tree, _name, "mvaIDV1", "", 'F', &mvaIDV1, _branches);
  utils::book(_tree, _name, "pfRelIso03_all", "", 'F', &pfRelIso03_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_chg", "", 'F', &pfRelIso03_chg, _branches);
  utils::book(_tree, _name, "mvaID_WP80", "", 'O', &mvaID_WP80, _branches);
  utils::book(_tree, _name, "mvaID_WP90", "", 'O', &mvaID_WP90, _branches);
  utils::book(_tree, _name, "isScEtaEB", "", 'O', &isScEtaEB, _branches);
  utils::book(_tree, _name, "isScEtaEE", "", 'O', &isScEtaEE, _branches);
  utils::book(_tree, _name, "pixelSeed", "", 'O', &pixelSeed, _branches);
  utils::book(_tree, _name, "electronVeto", "", 'O', &electronVeto, _branches);
  utils::book(_tree, _name, "electronIdx", "", 'I', &electronIdx, _branches);
  utils::book(_tree, _name, "cutBasedBitmap", "", 'I', &cutBasedBitmap, _branches);
  utils::book(_tree, _name, "cutBased", "", 'I', &cutBased, _branches);
}

void
panda::Photon::doInit_()
{
  PFParticle::doInit_();

  eCorr = 0.;
  eInvMinusPInv = 0.;
  energyErr = 0.;
  hoe = 0.;
  r9 = 0.;
  sieie = 0.;
  cutBased = 0;
  vidNestedWPBitmap = 0;
  mvaID = 0.;
  mvaIDV1 = 0.;
  pfRelIso03_all = 0.;
  pfRelIso03_chg = 0.;
  mvaID_WP80 = false;
  mvaID_WP90 = false;
  isScEtaEB = false;
  isScEtaEE = false;
  pixelSeed = false;
  electronVeto = false;
  electronIdx = 0;
  cutBasedBitmap = 0;
  cutBased = 0;

  /* BEGIN CUSTOM Photon.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Photon::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Photon.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Photon::dump(std::ostream& _out/* = std::cout*/) const
{
  PFParticle::dump(_out);

  _out << "eCorr = " << eCorr << std::endl;
  _out << "eInvMinusPInv = " << eInvMinusPInv << std::endl;
  _out << "energyErr = " << energyErr << std::endl;
  _out << "hoe = " << hoe << std::endl;
  _out << "r9 = " << r9 << std::endl;
  _out << "sieie = " << sieie << std::endl;
  _out << "cutBased = " << cutBased << std::endl;
  _out << "vidNestedWPBitmap = " << vidNestedWPBitmap << std::endl;
  _out << "mvaID = " << mvaID << std::endl;
  _out << "mvaIDV1 = " << mvaIDV1 << std::endl;
  _out << "pfRelIso03_all = " << pfRelIso03_all << std::endl;
  _out << "pfRelIso03_chg = " << pfRelIso03_chg << std::endl;
  _out << "mvaID_WP80 = " << mvaID_WP80 << std::endl;
  _out << "mvaID_WP90 = " << mvaID_WP90 << std::endl;
  _out << "isScEtaEB = " << isScEtaEB << std::endl;
  _out << "isScEtaEE = " << isScEtaEE << std::endl;
  _out << "pixelSeed = " << pixelSeed << std::endl;
  _out << "electronVeto = " << electronVeto << std::endl;
  _out << "electronIdx = " << electronIdx << std::endl;
  _out << "cutBasedBitmap = " << cutBasedBitmap << std::endl;
  _out << "cutBased = " << cutBased << std::endl;
}

/* BEGIN CUSTOM Photon.cc.global */
/* END CUSTOM */
