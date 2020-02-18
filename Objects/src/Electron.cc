#include "../interface/Electron.h"

/*static*/
panda::utils::BranchList
panda::Electron::getListOfBranches()
{
  utils::BranchList blist;
  blist += Lepton::getListOfBranches();
  blist += EGamma::getListOfBranches();
  blist += {"deltaEtaSC", "dr03EcalRecHitSumEt", "dr03HcalDepth1TowerSumEt", "dr03TkSumPt", "dr03TkSumPtHEEP", "mvaFall17V1Iso", "mvaFall17V1noIso", "mvaFall17V2Iso", "mvaFall17V2noIso", "mvaSpring16GP", "mvaSpring16HZZ", "mvaFall17V1Iso_WP80", "mvaFall17V1Iso_WP90", "mvaFall17V1Iso_WPL", "mvaFall17V1noIso_WP80", "mvaFall17V1noIso_WP90", "mvaFall17V1noIso_WPL", "mvaFall17V2Iso_WP80", "mvaFall17V2Iso_WP90", "mvaFall17V2Iso_WPL", "mvaFall17V2noIso_WP80", "mvaFall17V2noIso_WP90", "mvaFall17V2noIso_WPL", "mvaSpring16GP_WP80", "mvaSpring16GP_WP90", "mvaSpring16HZZ_WPL", "vidNestedWPBitmapSpring15", "vidNestedWPBitmapSum16", "cutBased_Fall17_V1", "cutBased", "cutBased_HEEP", "convVeto", "lostHits", "photonIdx"};
  return blist;
}

void
panda::Electron::datastore::allocate(UInt_t _nmax)
{
  Lepton::datastore::allocate(_nmax);

  eCorr = new Float_t[nmax_];
  eInvMinusPInv = new Float_t[nmax_];
  energyErr = new Float_t[nmax_];
  hoe = new Float_t[nmax_];
  r9 = new Float_t[nmax_];
  sieie = new Float_t[nmax_];
  cutBased = new Int_t[nmax_];
  vidNestedWPBitmap = new Int_t[nmax_];
  deltaEtaSC = new Float_t[nmax_];
  dr03EcalRecHitSumEt = new Float_t[nmax_];
  dr03HcalDepth1TowerSumEt = new Float_t[nmax_];
  dr03TkSumPt = new Float_t[nmax_];
  dr03TkSumPtHEEP = new Float_t[nmax_];
  mvaFall17V1Iso = new Float_t[nmax_];
  mvaFall17V1noIso = new Float_t[nmax_];
  mvaFall17V2Iso = new Float_t[nmax_];
  mvaFall17V2noIso = new Float_t[nmax_];
  mvaSpring16GP = new Float_t[nmax_];
  mvaSpring16HZZ = new Float_t[nmax_];
  mvaFall17V1Iso_WP80 = new Bool_t[nmax_];
  mvaFall17V1Iso_WP90 = new Bool_t[nmax_];
  mvaFall17V1Iso_WPL = new Bool_t[nmax_];
  mvaFall17V1noIso_WP80 = new Bool_t[nmax_];
  mvaFall17V1noIso_WP90 = new Bool_t[nmax_];
  mvaFall17V1noIso_WPL = new Bool_t[nmax_];
  mvaFall17V2Iso_WP80 = new Bool_t[nmax_];
  mvaFall17V2Iso_WP90 = new Bool_t[nmax_];
  mvaFall17V2Iso_WPL = new Bool_t[nmax_];
  mvaFall17V2noIso_WP80 = new Bool_t[nmax_];
  mvaFall17V2noIso_WP90 = new Bool_t[nmax_];
  mvaFall17V2noIso_WPL = new Bool_t[nmax_];
  mvaSpring16GP_WP80 = new Bool_t[nmax_];
  mvaSpring16GP_WP90 = new Bool_t[nmax_];
  mvaSpring16HZZ_WPL = new Bool_t[nmax_];
  vidNestedWPBitmapSpring15 = new Int_t[nmax_];
  vidNestedWPBitmapSum16 = new Int_t[nmax_];
  cutBased_Fall17_V1 = new Int_t[nmax_];
  cutBased = new Int_t[nmax_];
  cutBased_HEEP = new Bool_t[nmax_];
  convVeto = new Bool_t[nmax_];
  lostHits = new UChar_t[nmax_];
  photonIdx = new Int_t[nmax_];
}

void
panda::Electron::datastore::deallocate()
{
  Lepton::datastore::deallocate();

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
  delete [] deltaEtaSC;
  deltaEtaSC = 0;
  delete [] dr03EcalRecHitSumEt;
  dr03EcalRecHitSumEt = 0;
  delete [] dr03HcalDepth1TowerSumEt;
  dr03HcalDepth1TowerSumEt = 0;
  delete [] dr03TkSumPt;
  dr03TkSumPt = 0;
  delete [] dr03TkSumPtHEEP;
  dr03TkSumPtHEEP = 0;
  delete [] mvaFall17V1Iso;
  mvaFall17V1Iso = 0;
  delete [] mvaFall17V1noIso;
  mvaFall17V1noIso = 0;
  delete [] mvaFall17V2Iso;
  mvaFall17V2Iso = 0;
  delete [] mvaFall17V2noIso;
  mvaFall17V2noIso = 0;
  delete [] mvaSpring16GP;
  mvaSpring16GP = 0;
  delete [] mvaSpring16HZZ;
  mvaSpring16HZZ = 0;
  delete [] mvaFall17V1Iso_WP80;
  mvaFall17V1Iso_WP80 = 0;
  delete [] mvaFall17V1Iso_WP90;
  mvaFall17V1Iso_WP90 = 0;
  delete [] mvaFall17V1Iso_WPL;
  mvaFall17V1Iso_WPL = 0;
  delete [] mvaFall17V1noIso_WP80;
  mvaFall17V1noIso_WP80 = 0;
  delete [] mvaFall17V1noIso_WP90;
  mvaFall17V1noIso_WP90 = 0;
  delete [] mvaFall17V1noIso_WPL;
  mvaFall17V1noIso_WPL = 0;
  delete [] mvaFall17V2Iso_WP80;
  mvaFall17V2Iso_WP80 = 0;
  delete [] mvaFall17V2Iso_WP90;
  mvaFall17V2Iso_WP90 = 0;
  delete [] mvaFall17V2Iso_WPL;
  mvaFall17V2Iso_WPL = 0;
  delete [] mvaFall17V2noIso_WP80;
  mvaFall17V2noIso_WP80 = 0;
  delete [] mvaFall17V2noIso_WP90;
  mvaFall17V2noIso_WP90 = 0;
  delete [] mvaFall17V2noIso_WPL;
  mvaFall17V2noIso_WPL = 0;
  delete [] mvaSpring16GP_WP80;
  mvaSpring16GP_WP80 = 0;
  delete [] mvaSpring16GP_WP90;
  mvaSpring16GP_WP90 = 0;
  delete [] mvaSpring16HZZ_WPL;
  mvaSpring16HZZ_WPL = 0;
  delete [] vidNestedWPBitmapSpring15;
  vidNestedWPBitmapSpring15 = 0;
  delete [] vidNestedWPBitmapSum16;
  vidNestedWPBitmapSum16 = 0;
  delete [] cutBased_Fall17_V1;
  cutBased_Fall17_V1 = 0;
  delete [] cutBased;
  cutBased = 0;
  delete [] cutBased_HEEP;
  cutBased_HEEP = 0;
  delete [] convVeto;
  convVeto = 0;
  delete [] lostHits;
  lostHits = 0;
  delete [] photonIdx;
  photonIdx = 0;
}

void
panda::Electron::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Lepton::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "eCorr", _branches);
  utils::setStatus(_tree, _name, "eInvMinusPInv", _branches);
  utils::setStatus(_tree, _name, "energyErr", _branches);
  utils::setStatus(_tree, _name, "hoe", _branches);
  utils::setStatus(_tree, _name, "r9", _branches);
  utils::setStatus(_tree, _name, "sieie", _branches);
  utils::setStatus(_tree, _name, "cutBased", _branches);
  utils::setStatus(_tree, _name, "vidNestedWPBitmap", _branches);
  utils::setStatus(_tree, _name, "deltaEtaSC", _branches);
  utils::setStatus(_tree, _name, "dr03EcalRecHitSumEt", _branches);
  utils::setStatus(_tree, _name, "dr03HcalDepth1TowerSumEt", _branches);
  utils::setStatus(_tree, _name, "dr03TkSumPt", _branches);
  utils::setStatus(_tree, _name, "dr03TkSumPtHEEP", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1Iso", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1noIso", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2Iso", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2noIso", _branches);
  utils::setStatus(_tree, _name, "mvaSpring16GP", _branches);
  utils::setStatus(_tree, _name, "mvaSpring16HZZ", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1Iso_WP80", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1Iso_WP90", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1Iso_WPL", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1noIso_WP80", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1noIso_WP90", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V1noIso_WPL", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2Iso_WP80", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2Iso_WP90", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2Iso_WPL", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2noIso_WP80", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2noIso_WP90", _branches);
  utils::setStatus(_tree, _name, "mvaFall17V2noIso_WPL", _branches);
  utils::setStatus(_tree, _name, "mvaSpring16GP_WP80", _branches);
  utils::setStatus(_tree, _name, "mvaSpring16GP_WP90", _branches);
  utils::setStatus(_tree, _name, "mvaSpring16HZZ_WPL", _branches);
  utils::setStatus(_tree, _name, "vidNestedWPBitmapSpring15", _branches);
  utils::setStatus(_tree, _name, "vidNestedWPBitmapSum16", _branches);
  utils::setStatus(_tree, _name, "cutBased_Fall17_V1", _branches);
  utils::setStatus(_tree, _name, "cutBased", _branches);
  utils::setStatus(_tree, _name, "cutBased_HEEP", _branches);
  utils::setStatus(_tree, _name, "convVeto", _branches);
  utils::setStatus(_tree, _name, "lostHits", _branches);
  utils::setStatus(_tree, _name, "photonIdx", _branches);
}

panda::utils::BranchList
panda::Electron::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Lepton::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "eCorr"));
  blist.push_back(utils::getStatus(_tree, _name, "eInvMinusPInv"));
  blist.push_back(utils::getStatus(_tree, _name, "energyErr"));
  blist.push_back(utils::getStatus(_tree, _name, "hoe"));
  blist.push_back(utils::getStatus(_tree, _name, "r9"));
  blist.push_back(utils::getStatus(_tree, _name, "sieie"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBased"));
  blist.push_back(utils::getStatus(_tree, _name, "vidNestedWPBitmap"));
  blist.push_back(utils::getStatus(_tree, _name, "deltaEtaSC"));
  blist.push_back(utils::getStatus(_tree, _name, "dr03EcalRecHitSumEt"));
  blist.push_back(utils::getStatus(_tree, _name, "dr03HcalDepth1TowerSumEt"));
  blist.push_back(utils::getStatus(_tree, _name, "dr03TkSumPt"));
  blist.push_back(utils::getStatus(_tree, _name, "dr03TkSumPtHEEP"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1Iso"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1noIso"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2Iso"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2noIso"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaSpring16GP"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaSpring16HZZ"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1Iso_WP80"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1Iso_WP90"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1Iso_WPL"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1noIso_WP80"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1noIso_WP90"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V1noIso_WPL"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2Iso_WP80"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2Iso_WP90"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2Iso_WPL"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2noIso_WP80"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2noIso_WP90"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaFall17V2noIso_WPL"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaSpring16GP_WP80"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaSpring16GP_WP90"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaSpring16HZZ_WPL"));
  blist.push_back(utils::getStatus(_tree, _name, "vidNestedWPBitmapSpring15"));
  blist.push_back(utils::getStatus(_tree, _name, "vidNestedWPBitmapSum16"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBased_Fall17_V1"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBased"));
  blist.push_back(utils::getStatus(_tree, _name, "cutBased_HEEP"));
  blist.push_back(utils::getStatus(_tree, _name, "convVeto"));
  blist.push_back(utils::getStatus(_tree, _name, "lostHits"));
  blist.push_back(utils::getStatus(_tree, _name, "photonIdx"));

  return blist;
}

void
panda::Electron::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Lepton::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "eCorr", eCorr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "eInvMinusPInv", eInvMinusPInv, _branches, _setStatus);
  utils::setAddress(_tree, _name, "energyErr", energyErr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "hoe", hoe, _branches, _setStatus);
  utils::setAddress(_tree, _name, "r9", r9, _branches, _setStatus);
  utils::setAddress(_tree, _name, "sieie", sieie, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBased", cutBased, _branches, _setStatus);
  utils::setAddress(_tree, _name, "vidNestedWPBitmap", vidNestedWPBitmap, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deltaEtaSC", deltaEtaSC, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dr03EcalRecHitSumEt", dr03EcalRecHitSumEt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dr03HcalDepth1TowerSumEt", dr03HcalDepth1TowerSumEt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dr03TkSumPt", dr03TkSumPt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dr03TkSumPtHEEP", dr03TkSumPtHEEP, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1Iso", mvaFall17V1Iso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1noIso", mvaFall17V1noIso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2Iso", mvaFall17V2Iso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2noIso", mvaFall17V2noIso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaSpring16GP", mvaSpring16GP, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaSpring16HZZ", mvaSpring16HZZ, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1Iso_WP80", mvaFall17V1Iso_WP80, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1Iso_WP90", mvaFall17V1Iso_WP90, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1Iso_WPL", mvaFall17V1Iso_WPL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1noIso_WP80", mvaFall17V1noIso_WP80, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1noIso_WP90", mvaFall17V1noIso_WP90, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V1noIso_WPL", mvaFall17V1noIso_WPL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2Iso_WP80", mvaFall17V2Iso_WP80, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2Iso_WP90", mvaFall17V2Iso_WP90, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2Iso_WPL", mvaFall17V2Iso_WPL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2noIso_WP80", mvaFall17V2noIso_WP80, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2noIso_WP90", mvaFall17V2noIso_WP90, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaFall17V2noIso_WPL", mvaFall17V2noIso_WPL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaSpring16GP_WP80", mvaSpring16GP_WP80, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaSpring16GP_WP90", mvaSpring16GP_WP90, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaSpring16HZZ_WPL", mvaSpring16HZZ_WPL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "vidNestedWPBitmapSpring15", vidNestedWPBitmapSpring15, _branches, _setStatus);
  utils::setAddress(_tree, _name, "vidNestedWPBitmapSum16", vidNestedWPBitmapSum16, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBased_Fall17_V1", cutBased_Fall17_V1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBased", cutBased, _branches, _setStatus);
  utils::setAddress(_tree, _name, "cutBased_HEEP", cutBased_HEEP, _branches, _setStatus);
  utils::setAddress(_tree, _name, "convVeto", convVeto, _branches, _setStatus);
  utils::setAddress(_tree, _name, "lostHits", lostHits, _branches, _setStatus);
  utils::setAddress(_tree, _name, "photonIdx", photonIdx, _branches, _setStatus);
}

void
panda::Electron::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Lepton::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "eCorr", size, 'F', eCorr, _branches);
  utils::book(_tree, _name, "eInvMinusPInv", size, 'F', eInvMinusPInv, _branches);
  utils::book(_tree, _name, "energyErr", size, 'F', energyErr, _branches);
  utils::book(_tree, _name, "hoe", size, 'F', hoe, _branches);
  utils::book(_tree, _name, "r9", size, 'F', r9, _branches);
  utils::book(_tree, _name, "sieie", size, 'F', sieie, _branches);
  utils::book(_tree, _name, "cutBased", size, 'I', cutBased, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmap", size, 'I', vidNestedWPBitmap, _branches);
  utils::book(_tree, _name, "deltaEtaSC", size, 'F', deltaEtaSC, _branches);
  utils::book(_tree, _name, "dr03EcalRecHitSumEt", size, 'F', dr03EcalRecHitSumEt, _branches);
  utils::book(_tree, _name, "dr03HcalDepth1TowerSumEt", size, 'F', dr03HcalDepth1TowerSumEt, _branches);
  utils::book(_tree, _name, "dr03TkSumPt", size, 'F', dr03TkSumPt, _branches);
  utils::book(_tree, _name, "dr03TkSumPtHEEP", size, 'F', dr03TkSumPtHEEP, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso", size, 'F', mvaFall17V1Iso, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso", size, 'F', mvaFall17V1noIso, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso", size, 'F', mvaFall17V2Iso, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso", size, 'F', mvaFall17V2noIso, _branches);
  utils::book(_tree, _name, "mvaSpring16GP", size, 'F', mvaSpring16GP, _branches);
  utils::book(_tree, _name, "mvaSpring16HZZ", size, 'F', mvaSpring16HZZ, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso_WP80", size, 'O', mvaFall17V1Iso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso_WP90", size, 'O', mvaFall17V1Iso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso_WPL", size, 'O', mvaFall17V1Iso_WPL, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso_WP80", size, 'O', mvaFall17V1noIso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso_WP90", size, 'O', mvaFall17V1noIso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso_WPL", size, 'O', mvaFall17V1noIso_WPL, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso_WP80", size, 'O', mvaFall17V2Iso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso_WP90", size, 'O', mvaFall17V2Iso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso_WPL", size, 'O', mvaFall17V2Iso_WPL, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso_WP80", size, 'O', mvaFall17V2noIso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso_WP90", size, 'O', mvaFall17V2noIso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso_WPL", size, 'O', mvaFall17V2noIso_WPL, _branches);
  utils::book(_tree, _name, "mvaSpring16GP_WP80", size, 'O', mvaSpring16GP_WP80, _branches);
  utils::book(_tree, _name, "mvaSpring16GP_WP90", size, 'O', mvaSpring16GP_WP90, _branches);
  utils::book(_tree, _name, "mvaSpring16HZZ_WPL", size, 'O', mvaSpring16HZZ_WPL, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmapSpring15", size, 'I', vidNestedWPBitmapSpring15, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmapSum16", size, 'I', vidNestedWPBitmapSum16, _branches);
  utils::book(_tree, _name, "cutBased_Fall17_V1", size, 'I', cutBased_Fall17_V1, _branches);
  utils::book(_tree, _name, "cutBased", size, 'I', cutBased, _branches);
  utils::book(_tree, _name, "cutBased_HEEP", size, 'O', cutBased_HEEP, _branches);
  utils::book(_tree, _name, "convVeto", size, 'O', convVeto, _branches);
  utils::book(_tree, _name, "lostHits", size, 'b', lostHits, _branches);
  utils::book(_tree, _name, "photonIdx", size, 'I', photonIdx, _branches);
}

void
panda::Electron::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Lepton::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "eCorr");
  utils::resetAddress(_tree, _name, "eInvMinusPInv");
  utils::resetAddress(_tree, _name, "energyErr");
  utils::resetAddress(_tree, _name, "hoe");
  utils::resetAddress(_tree, _name, "r9");
  utils::resetAddress(_tree, _name, "sieie");
  utils::resetAddress(_tree, _name, "cutBased");
  utils::resetAddress(_tree, _name, "vidNestedWPBitmap");
  utils::resetAddress(_tree, _name, "deltaEtaSC");
  utils::resetAddress(_tree, _name, "dr03EcalRecHitSumEt");
  utils::resetAddress(_tree, _name, "dr03HcalDepth1TowerSumEt");
  utils::resetAddress(_tree, _name, "dr03TkSumPt");
  utils::resetAddress(_tree, _name, "dr03TkSumPtHEEP");
  utils::resetAddress(_tree, _name, "mvaFall17V1Iso");
  utils::resetAddress(_tree, _name, "mvaFall17V1noIso");
  utils::resetAddress(_tree, _name, "mvaFall17V2Iso");
  utils::resetAddress(_tree, _name, "mvaFall17V2noIso");
  utils::resetAddress(_tree, _name, "mvaSpring16GP");
  utils::resetAddress(_tree, _name, "mvaSpring16HZZ");
  utils::resetAddress(_tree, _name, "mvaFall17V1Iso_WP80");
  utils::resetAddress(_tree, _name, "mvaFall17V1Iso_WP90");
  utils::resetAddress(_tree, _name, "mvaFall17V1Iso_WPL");
  utils::resetAddress(_tree, _name, "mvaFall17V1noIso_WP80");
  utils::resetAddress(_tree, _name, "mvaFall17V1noIso_WP90");
  utils::resetAddress(_tree, _name, "mvaFall17V1noIso_WPL");
  utils::resetAddress(_tree, _name, "mvaFall17V2Iso_WP80");
  utils::resetAddress(_tree, _name, "mvaFall17V2Iso_WP90");
  utils::resetAddress(_tree, _name, "mvaFall17V2Iso_WPL");
  utils::resetAddress(_tree, _name, "mvaFall17V2noIso_WP80");
  utils::resetAddress(_tree, _name, "mvaFall17V2noIso_WP90");
  utils::resetAddress(_tree, _name, "mvaFall17V2noIso_WPL");
  utils::resetAddress(_tree, _name, "mvaSpring16GP_WP80");
  utils::resetAddress(_tree, _name, "mvaSpring16GP_WP90");
  utils::resetAddress(_tree, _name, "mvaSpring16HZZ_WPL");
  utils::resetAddress(_tree, _name, "vidNestedWPBitmapSpring15");
  utils::resetAddress(_tree, _name, "vidNestedWPBitmapSum16");
  utils::resetAddress(_tree, _name, "cutBased_Fall17_V1");
  utils::resetAddress(_tree, _name, "cutBased");
  utils::resetAddress(_tree, _name, "cutBased_HEEP");
  utils::resetAddress(_tree, _name, "convVeto");
  utils::resetAddress(_tree, _name, "lostHits");
  utils::resetAddress(_tree, _name, "photonIdx");
}

void
panda::Electron::datastore::resizeVectors_(UInt_t _size)
{
  Lepton::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Electron::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Electron::getListOfBranches().fullNames(_name);
}

panda::Electron::Electron(char const* _name/* = ""*/) :
  Lepton(new ElectronArray(1, _name)),
  EGamma(gStore.getData(this), 0),
  deltaEtaSC(gStore.getData(this).deltaEtaSC[0]),
  dr03EcalRecHitSumEt(gStore.getData(this).dr03EcalRecHitSumEt[0]),
  dr03HcalDepth1TowerSumEt(gStore.getData(this).dr03HcalDepth1TowerSumEt[0]),
  dr03TkSumPt(gStore.getData(this).dr03TkSumPt[0]),
  dr03TkSumPtHEEP(gStore.getData(this).dr03TkSumPtHEEP[0]),
  mvaFall17V1Iso(gStore.getData(this).mvaFall17V1Iso[0]),
  mvaFall17V1noIso(gStore.getData(this).mvaFall17V1noIso[0]),
  mvaFall17V2Iso(gStore.getData(this).mvaFall17V2Iso[0]),
  mvaFall17V2noIso(gStore.getData(this).mvaFall17V2noIso[0]),
  mvaSpring16GP(gStore.getData(this).mvaSpring16GP[0]),
  mvaSpring16HZZ(gStore.getData(this).mvaSpring16HZZ[0]),
  mvaFall17V1Iso_WP80(gStore.getData(this).mvaFall17V1Iso_WP80[0]),
  mvaFall17V1Iso_WP90(gStore.getData(this).mvaFall17V1Iso_WP90[0]),
  mvaFall17V1Iso_WPL(gStore.getData(this).mvaFall17V1Iso_WPL[0]),
  mvaFall17V1noIso_WP80(gStore.getData(this).mvaFall17V1noIso_WP80[0]),
  mvaFall17V1noIso_WP90(gStore.getData(this).mvaFall17V1noIso_WP90[0]),
  mvaFall17V1noIso_WPL(gStore.getData(this).mvaFall17V1noIso_WPL[0]),
  mvaFall17V2Iso_WP80(gStore.getData(this).mvaFall17V2Iso_WP80[0]),
  mvaFall17V2Iso_WP90(gStore.getData(this).mvaFall17V2Iso_WP90[0]),
  mvaFall17V2Iso_WPL(gStore.getData(this).mvaFall17V2Iso_WPL[0]),
  mvaFall17V2noIso_WP80(gStore.getData(this).mvaFall17V2noIso_WP80[0]),
  mvaFall17V2noIso_WP90(gStore.getData(this).mvaFall17V2noIso_WP90[0]),
  mvaFall17V2noIso_WPL(gStore.getData(this).mvaFall17V2noIso_WPL[0]),
  mvaSpring16GP_WP80(gStore.getData(this).mvaSpring16GP_WP80[0]),
  mvaSpring16GP_WP90(gStore.getData(this).mvaSpring16GP_WP90[0]),
  mvaSpring16HZZ_WPL(gStore.getData(this).mvaSpring16HZZ_WPL[0]),
  vidNestedWPBitmapSpring15(gStore.getData(this).vidNestedWPBitmapSpring15[0]),
  vidNestedWPBitmapSum16(gStore.getData(this).vidNestedWPBitmapSum16[0]),
  cutBased_Fall17_V1(gStore.getData(this).cutBased_Fall17_V1[0]),
  cutBased(gStore.getData(this).cutBased[0]),
  cutBased_HEEP(gStore.getData(this).cutBased_HEEP[0]),
  convVeto(gStore.getData(this).convVeto[0]),
  lostHits(gStore.getData(this).lostHits[0]),
  photonIdx(gStore.getData(this).photonIdx[0])
{
}

panda::Electron::Electron(Electron const& _src) :
  Lepton(new ElectronArray(1, _src.getName())),
  EGamma(gStore.getData(this), 0),
  deltaEtaSC(gStore.getData(this).deltaEtaSC[0]),
  dr03EcalRecHitSumEt(gStore.getData(this).dr03EcalRecHitSumEt[0]),
  dr03HcalDepth1TowerSumEt(gStore.getData(this).dr03HcalDepth1TowerSumEt[0]),
  dr03TkSumPt(gStore.getData(this).dr03TkSumPt[0]),
  dr03TkSumPtHEEP(gStore.getData(this).dr03TkSumPtHEEP[0]),
  mvaFall17V1Iso(gStore.getData(this).mvaFall17V1Iso[0]),
  mvaFall17V1noIso(gStore.getData(this).mvaFall17V1noIso[0]),
  mvaFall17V2Iso(gStore.getData(this).mvaFall17V2Iso[0]),
  mvaFall17V2noIso(gStore.getData(this).mvaFall17V2noIso[0]),
  mvaSpring16GP(gStore.getData(this).mvaSpring16GP[0]),
  mvaSpring16HZZ(gStore.getData(this).mvaSpring16HZZ[0]),
  mvaFall17V1Iso_WP80(gStore.getData(this).mvaFall17V1Iso_WP80[0]),
  mvaFall17V1Iso_WP90(gStore.getData(this).mvaFall17V1Iso_WP90[0]),
  mvaFall17V1Iso_WPL(gStore.getData(this).mvaFall17V1Iso_WPL[0]),
  mvaFall17V1noIso_WP80(gStore.getData(this).mvaFall17V1noIso_WP80[0]),
  mvaFall17V1noIso_WP90(gStore.getData(this).mvaFall17V1noIso_WP90[0]),
  mvaFall17V1noIso_WPL(gStore.getData(this).mvaFall17V1noIso_WPL[0]),
  mvaFall17V2Iso_WP80(gStore.getData(this).mvaFall17V2Iso_WP80[0]),
  mvaFall17V2Iso_WP90(gStore.getData(this).mvaFall17V2Iso_WP90[0]),
  mvaFall17V2Iso_WPL(gStore.getData(this).mvaFall17V2Iso_WPL[0]),
  mvaFall17V2noIso_WP80(gStore.getData(this).mvaFall17V2noIso_WP80[0]),
  mvaFall17V2noIso_WP90(gStore.getData(this).mvaFall17V2noIso_WP90[0]),
  mvaFall17V2noIso_WPL(gStore.getData(this).mvaFall17V2noIso_WPL[0]),
  mvaSpring16GP_WP80(gStore.getData(this).mvaSpring16GP_WP80[0]),
  mvaSpring16GP_WP90(gStore.getData(this).mvaSpring16GP_WP90[0]),
  mvaSpring16HZZ_WPL(gStore.getData(this).mvaSpring16HZZ_WPL[0]),
  vidNestedWPBitmapSpring15(gStore.getData(this).vidNestedWPBitmapSpring15[0]),
  vidNestedWPBitmapSum16(gStore.getData(this).vidNestedWPBitmapSum16[0]),
  cutBased_Fall17_V1(gStore.getData(this).cutBased_Fall17_V1[0]),
  cutBased(gStore.getData(this).cutBased[0]),
  cutBased_HEEP(gStore.getData(this).cutBased_HEEP[0]),
  convVeto(gStore.getData(this).convVeto[0]),
  lostHits(gStore.getData(this).lostHits[0]),
  photonIdx(gStore.getData(this).photonIdx[0])
{
  operator=(_src);
}

panda::Electron::Electron(datastore& _data, UInt_t _idx) :
  Lepton(_data, _idx),
  EGamma(_data, _idx),
  deltaEtaSC(_data.deltaEtaSC[_idx]),
  dr03EcalRecHitSumEt(_data.dr03EcalRecHitSumEt[_idx]),
  dr03HcalDepth1TowerSumEt(_data.dr03HcalDepth1TowerSumEt[_idx]),
  dr03TkSumPt(_data.dr03TkSumPt[_idx]),
  dr03TkSumPtHEEP(_data.dr03TkSumPtHEEP[_idx]),
  mvaFall17V1Iso(_data.mvaFall17V1Iso[_idx]),
  mvaFall17V1noIso(_data.mvaFall17V1noIso[_idx]),
  mvaFall17V2Iso(_data.mvaFall17V2Iso[_idx]),
  mvaFall17V2noIso(_data.mvaFall17V2noIso[_idx]),
  mvaSpring16GP(_data.mvaSpring16GP[_idx]),
  mvaSpring16HZZ(_data.mvaSpring16HZZ[_idx]),
  mvaFall17V1Iso_WP80(_data.mvaFall17V1Iso_WP80[_idx]),
  mvaFall17V1Iso_WP90(_data.mvaFall17V1Iso_WP90[_idx]),
  mvaFall17V1Iso_WPL(_data.mvaFall17V1Iso_WPL[_idx]),
  mvaFall17V1noIso_WP80(_data.mvaFall17V1noIso_WP80[_idx]),
  mvaFall17V1noIso_WP90(_data.mvaFall17V1noIso_WP90[_idx]),
  mvaFall17V1noIso_WPL(_data.mvaFall17V1noIso_WPL[_idx]),
  mvaFall17V2Iso_WP80(_data.mvaFall17V2Iso_WP80[_idx]),
  mvaFall17V2Iso_WP90(_data.mvaFall17V2Iso_WP90[_idx]),
  mvaFall17V2Iso_WPL(_data.mvaFall17V2Iso_WPL[_idx]),
  mvaFall17V2noIso_WP80(_data.mvaFall17V2noIso_WP80[_idx]),
  mvaFall17V2noIso_WP90(_data.mvaFall17V2noIso_WP90[_idx]),
  mvaFall17V2noIso_WPL(_data.mvaFall17V2noIso_WPL[_idx]),
  mvaSpring16GP_WP80(_data.mvaSpring16GP_WP80[_idx]),
  mvaSpring16GP_WP90(_data.mvaSpring16GP_WP90[_idx]),
  mvaSpring16HZZ_WPL(_data.mvaSpring16HZZ_WPL[_idx]),
  vidNestedWPBitmapSpring15(_data.vidNestedWPBitmapSpring15[_idx]),
  vidNestedWPBitmapSum16(_data.vidNestedWPBitmapSum16[_idx]),
  cutBased_Fall17_V1(_data.cutBased_Fall17_V1[_idx]),
  cutBased(_data.cutBased[_idx]),
  cutBased_HEEP(_data.cutBased_HEEP[_idx]),
  convVeto(_data.convVeto[_idx]),
  lostHits(_data.lostHits[_idx]),
  photonIdx(_data.photonIdx[_idx])
{
}

panda::Electron::Electron(ArrayBase* _array) :
  Lepton(_array),
  EGamma(gStore.getData(this), 0),
  deltaEtaSC(gStore.getData(this).deltaEtaSC[0]),
  dr03EcalRecHitSumEt(gStore.getData(this).dr03EcalRecHitSumEt[0]),
  dr03HcalDepth1TowerSumEt(gStore.getData(this).dr03HcalDepth1TowerSumEt[0]),
  dr03TkSumPt(gStore.getData(this).dr03TkSumPt[0]),
  dr03TkSumPtHEEP(gStore.getData(this).dr03TkSumPtHEEP[0]),
  mvaFall17V1Iso(gStore.getData(this).mvaFall17V1Iso[0]),
  mvaFall17V1noIso(gStore.getData(this).mvaFall17V1noIso[0]),
  mvaFall17V2Iso(gStore.getData(this).mvaFall17V2Iso[0]),
  mvaFall17V2noIso(gStore.getData(this).mvaFall17V2noIso[0]),
  mvaSpring16GP(gStore.getData(this).mvaSpring16GP[0]),
  mvaSpring16HZZ(gStore.getData(this).mvaSpring16HZZ[0]),
  mvaFall17V1Iso_WP80(gStore.getData(this).mvaFall17V1Iso_WP80[0]),
  mvaFall17V1Iso_WP90(gStore.getData(this).mvaFall17V1Iso_WP90[0]),
  mvaFall17V1Iso_WPL(gStore.getData(this).mvaFall17V1Iso_WPL[0]),
  mvaFall17V1noIso_WP80(gStore.getData(this).mvaFall17V1noIso_WP80[0]),
  mvaFall17V1noIso_WP90(gStore.getData(this).mvaFall17V1noIso_WP90[0]),
  mvaFall17V1noIso_WPL(gStore.getData(this).mvaFall17V1noIso_WPL[0]),
  mvaFall17V2Iso_WP80(gStore.getData(this).mvaFall17V2Iso_WP80[0]),
  mvaFall17V2Iso_WP90(gStore.getData(this).mvaFall17V2Iso_WP90[0]),
  mvaFall17V2Iso_WPL(gStore.getData(this).mvaFall17V2Iso_WPL[0]),
  mvaFall17V2noIso_WP80(gStore.getData(this).mvaFall17V2noIso_WP80[0]),
  mvaFall17V2noIso_WP90(gStore.getData(this).mvaFall17V2noIso_WP90[0]),
  mvaFall17V2noIso_WPL(gStore.getData(this).mvaFall17V2noIso_WPL[0]),
  mvaSpring16GP_WP80(gStore.getData(this).mvaSpring16GP_WP80[0]),
  mvaSpring16GP_WP90(gStore.getData(this).mvaSpring16GP_WP90[0]),
  mvaSpring16HZZ_WPL(gStore.getData(this).mvaSpring16HZZ_WPL[0]),
  vidNestedWPBitmapSpring15(gStore.getData(this).vidNestedWPBitmapSpring15[0]),
  vidNestedWPBitmapSum16(gStore.getData(this).vidNestedWPBitmapSum16[0]),
  cutBased_Fall17_V1(gStore.getData(this).cutBased_Fall17_V1[0]),
  cutBased(gStore.getData(this).cutBased[0]),
  cutBased_HEEP(gStore.getData(this).cutBased_HEEP[0]),
  convVeto(gStore.getData(this).convVeto[0]),
  lostHits(gStore.getData(this).lostHits[0]),
  photonIdx(gStore.getData(this).photonIdx[0])
{
}

panda::Electron::~Electron()
{
  destructor();
}

void
panda::Electron::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Electron.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Lepton::destructor(kTRUE);
}

panda::Electron&
panda::Electron::operator=(Electron const& _src)
{
  Lepton::operator=(_src);

  eCorr = _src.eCorr;
  eInvMinusPInv = _src.eInvMinusPInv;
  energyErr = _src.energyErr;
  hoe = _src.hoe;
  r9 = _src.r9;
  sieie = _src.sieie;
  cutBased = _src.cutBased;
  vidNestedWPBitmap = _src.vidNestedWPBitmap;
  deltaEtaSC = _src.deltaEtaSC;
  dr03EcalRecHitSumEt = _src.dr03EcalRecHitSumEt;
  dr03HcalDepth1TowerSumEt = _src.dr03HcalDepth1TowerSumEt;
  dr03TkSumPt = _src.dr03TkSumPt;
  dr03TkSumPtHEEP = _src.dr03TkSumPtHEEP;
  mvaFall17V1Iso = _src.mvaFall17V1Iso;
  mvaFall17V1noIso = _src.mvaFall17V1noIso;
  mvaFall17V2Iso = _src.mvaFall17V2Iso;
  mvaFall17V2noIso = _src.mvaFall17V2noIso;
  mvaSpring16GP = _src.mvaSpring16GP;
  mvaSpring16HZZ = _src.mvaSpring16HZZ;
  mvaFall17V1Iso_WP80 = _src.mvaFall17V1Iso_WP80;
  mvaFall17V1Iso_WP90 = _src.mvaFall17V1Iso_WP90;
  mvaFall17V1Iso_WPL = _src.mvaFall17V1Iso_WPL;
  mvaFall17V1noIso_WP80 = _src.mvaFall17V1noIso_WP80;
  mvaFall17V1noIso_WP90 = _src.mvaFall17V1noIso_WP90;
  mvaFall17V1noIso_WPL = _src.mvaFall17V1noIso_WPL;
  mvaFall17V2Iso_WP80 = _src.mvaFall17V2Iso_WP80;
  mvaFall17V2Iso_WP90 = _src.mvaFall17V2Iso_WP90;
  mvaFall17V2Iso_WPL = _src.mvaFall17V2Iso_WPL;
  mvaFall17V2noIso_WP80 = _src.mvaFall17V2noIso_WP80;
  mvaFall17V2noIso_WP90 = _src.mvaFall17V2noIso_WP90;
  mvaFall17V2noIso_WPL = _src.mvaFall17V2noIso_WPL;
  mvaSpring16GP_WP80 = _src.mvaSpring16GP_WP80;
  mvaSpring16GP_WP90 = _src.mvaSpring16GP_WP90;
  mvaSpring16HZZ_WPL = _src.mvaSpring16HZZ_WPL;
  vidNestedWPBitmapSpring15 = _src.vidNestedWPBitmapSpring15;
  vidNestedWPBitmapSum16 = _src.vidNestedWPBitmapSum16;
  cutBased_Fall17_V1 = _src.cutBased_Fall17_V1;
  cutBased = _src.cutBased;
  cutBased_HEEP = _src.cutBased_HEEP;
  convVeto = _src.convVeto;
  lostHits = _src.lostHits;
  photonIdx = _src.photonIdx;

  /* BEGIN CUSTOM Electron.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Electron::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Lepton::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "eCorr", "", 'F', &eCorr, _branches);
  utils::book(_tree, _name, "eInvMinusPInv", "", 'F', &eInvMinusPInv, _branches);
  utils::book(_tree, _name, "energyErr", "", 'F', &energyErr, _branches);
  utils::book(_tree, _name, "hoe", "", 'F', &hoe, _branches);
  utils::book(_tree, _name, "r9", "", 'F', &r9, _branches);
  utils::book(_tree, _name, "sieie", "", 'F', &sieie, _branches);
  utils::book(_tree, _name, "cutBased", "", 'I', &cutBased, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmap", "", 'I', &vidNestedWPBitmap, _branches);
  utils::book(_tree, _name, "deltaEtaSC", "", 'F', &deltaEtaSC, _branches);
  utils::book(_tree, _name, "dr03EcalRecHitSumEt", "", 'F', &dr03EcalRecHitSumEt, _branches);
  utils::book(_tree, _name, "dr03HcalDepth1TowerSumEt", "", 'F', &dr03HcalDepth1TowerSumEt, _branches);
  utils::book(_tree, _name, "dr03TkSumPt", "", 'F', &dr03TkSumPt, _branches);
  utils::book(_tree, _name, "dr03TkSumPtHEEP", "", 'F', &dr03TkSumPtHEEP, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso", "", 'F', &mvaFall17V1Iso, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso", "", 'F', &mvaFall17V1noIso, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso", "", 'F', &mvaFall17V2Iso, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso", "", 'F', &mvaFall17V2noIso, _branches);
  utils::book(_tree, _name, "mvaSpring16GP", "", 'F', &mvaSpring16GP, _branches);
  utils::book(_tree, _name, "mvaSpring16HZZ", "", 'F', &mvaSpring16HZZ, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso_WP80", "", 'O', &mvaFall17V1Iso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso_WP90", "", 'O', &mvaFall17V1Iso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V1Iso_WPL", "", 'O', &mvaFall17V1Iso_WPL, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso_WP80", "", 'O', &mvaFall17V1noIso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso_WP90", "", 'O', &mvaFall17V1noIso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V1noIso_WPL", "", 'O', &mvaFall17V1noIso_WPL, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso_WP80", "", 'O', &mvaFall17V2Iso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso_WP90", "", 'O', &mvaFall17V2Iso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V2Iso_WPL", "", 'O', &mvaFall17V2Iso_WPL, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso_WP80", "", 'O', &mvaFall17V2noIso_WP80, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso_WP90", "", 'O', &mvaFall17V2noIso_WP90, _branches);
  utils::book(_tree, _name, "mvaFall17V2noIso_WPL", "", 'O', &mvaFall17V2noIso_WPL, _branches);
  utils::book(_tree, _name, "mvaSpring16GP_WP80", "", 'O', &mvaSpring16GP_WP80, _branches);
  utils::book(_tree, _name, "mvaSpring16GP_WP90", "", 'O', &mvaSpring16GP_WP90, _branches);
  utils::book(_tree, _name, "mvaSpring16HZZ_WPL", "", 'O', &mvaSpring16HZZ_WPL, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmapSpring15", "", 'I', &vidNestedWPBitmapSpring15, _branches);
  utils::book(_tree, _name, "vidNestedWPBitmapSum16", "", 'I', &vidNestedWPBitmapSum16, _branches);
  utils::book(_tree, _name, "cutBased_Fall17_V1", "", 'I', &cutBased_Fall17_V1, _branches);
  utils::book(_tree, _name, "cutBased", "", 'I', &cutBased, _branches);
  utils::book(_tree, _name, "cutBased_HEEP", "", 'O', &cutBased_HEEP, _branches);
  utils::book(_tree, _name, "convVeto", "", 'O', &convVeto, _branches);
  utils::book(_tree, _name, "lostHits", "", 'b', &lostHits, _branches);
  utils::book(_tree, _name, "photonIdx", "", 'I', &photonIdx, _branches);
}

void
panda::Electron::doInit_()
{
  Lepton::doInit_();

  eCorr = 0.;
  eInvMinusPInv = 0.;
  energyErr = 0.;
  hoe = 0.;
  r9 = 0.;
  sieie = 0.;
  cutBased = 0;
  vidNestedWPBitmap = 0;
  deltaEtaSC = 0.;
  dr03EcalRecHitSumEt = 0.;
  dr03HcalDepth1TowerSumEt = 0.;
  dr03TkSumPt = 0.;
  dr03TkSumPtHEEP = 0.;
  mvaFall17V1Iso = 0.;
  mvaFall17V1noIso = 0.;
  mvaFall17V2Iso = 0.;
  mvaFall17V2noIso = 0.;
  mvaSpring16GP = 0.;
  mvaSpring16HZZ = 0.;
  mvaFall17V1Iso_WP80 = false;
  mvaFall17V1Iso_WP90 = false;
  mvaFall17V1Iso_WPL = false;
  mvaFall17V1noIso_WP80 = false;
  mvaFall17V1noIso_WP90 = false;
  mvaFall17V1noIso_WPL = false;
  mvaFall17V2Iso_WP80 = false;
  mvaFall17V2Iso_WP90 = false;
  mvaFall17V2Iso_WPL = false;
  mvaFall17V2noIso_WP80 = false;
  mvaFall17V2noIso_WP90 = false;
  mvaFall17V2noIso_WPL = false;
  mvaSpring16GP_WP80 = false;
  mvaSpring16GP_WP90 = false;
  mvaSpring16HZZ_WPL = false;
  vidNestedWPBitmapSpring15 = 0;
  vidNestedWPBitmapSum16 = 0;
  cutBased_Fall17_V1 = 0;
  cutBased = 0;
  cutBased_HEEP = false;
  convVeto = false;
  lostHits = 0;
  photonIdx = 0;

  /* BEGIN CUSTOM Electron.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Electron::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Electron.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Electron::dump(std::ostream& _out/* = std::cout*/) const
{
  Lepton::dump(_out);

  _out << "eCorr = " << eCorr << std::endl;
  _out << "eInvMinusPInv = " << eInvMinusPInv << std::endl;
  _out << "energyErr = " << energyErr << std::endl;
  _out << "hoe = " << hoe << std::endl;
  _out << "r9 = " << r9 << std::endl;
  _out << "sieie = " << sieie << std::endl;
  _out << "cutBased = " << cutBased << std::endl;
  _out << "vidNestedWPBitmap = " << vidNestedWPBitmap << std::endl;
  _out << "deltaEtaSC = " << deltaEtaSC << std::endl;
  _out << "dr03EcalRecHitSumEt = " << dr03EcalRecHitSumEt << std::endl;
  _out << "dr03HcalDepth1TowerSumEt = " << dr03HcalDepth1TowerSumEt << std::endl;
  _out << "dr03TkSumPt = " << dr03TkSumPt << std::endl;
  _out << "dr03TkSumPtHEEP = " << dr03TkSumPtHEEP << std::endl;
  _out << "mvaFall17V1Iso = " << mvaFall17V1Iso << std::endl;
  _out << "mvaFall17V1noIso = " << mvaFall17V1noIso << std::endl;
  _out << "mvaFall17V2Iso = " << mvaFall17V2Iso << std::endl;
  _out << "mvaFall17V2noIso = " << mvaFall17V2noIso << std::endl;
  _out << "mvaSpring16GP = " << mvaSpring16GP << std::endl;
  _out << "mvaSpring16HZZ = " << mvaSpring16HZZ << std::endl;
  _out << "mvaFall17V1Iso_WP80 = " << mvaFall17V1Iso_WP80 << std::endl;
  _out << "mvaFall17V1Iso_WP90 = " << mvaFall17V1Iso_WP90 << std::endl;
  _out << "mvaFall17V1Iso_WPL = " << mvaFall17V1Iso_WPL << std::endl;
  _out << "mvaFall17V1noIso_WP80 = " << mvaFall17V1noIso_WP80 << std::endl;
  _out << "mvaFall17V1noIso_WP90 = " << mvaFall17V1noIso_WP90 << std::endl;
  _out << "mvaFall17V1noIso_WPL = " << mvaFall17V1noIso_WPL << std::endl;
  _out << "mvaFall17V2Iso_WP80 = " << mvaFall17V2Iso_WP80 << std::endl;
  _out << "mvaFall17V2Iso_WP90 = " << mvaFall17V2Iso_WP90 << std::endl;
  _out << "mvaFall17V2Iso_WPL = " << mvaFall17V2Iso_WPL << std::endl;
  _out << "mvaFall17V2noIso_WP80 = " << mvaFall17V2noIso_WP80 << std::endl;
  _out << "mvaFall17V2noIso_WP90 = " << mvaFall17V2noIso_WP90 << std::endl;
  _out << "mvaFall17V2noIso_WPL = " << mvaFall17V2noIso_WPL << std::endl;
  _out << "mvaSpring16GP_WP80 = " << mvaSpring16GP_WP80 << std::endl;
  _out << "mvaSpring16GP_WP90 = " << mvaSpring16GP_WP90 << std::endl;
  _out << "mvaSpring16HZZ_WPL = " << mvaSpring16HZZ_WPL << std::endl;
  _out << "vidNestedWPBitmapSpring15 = " << vidNestedWPBitmapSpring15 << std::endl;
  _out << "vidNestedWPBitmapSum16 = " << vidNestedWPBitmapSum16 << std::endl;
  _out << "cutBased_Fall17_V1 = " << cutBased_Fall17_V1 << std::endl;
  _out << "cutBased = " << cutBased << std::endl;
  _out << "cutBased_HEEP = " << cutBased_HEEP << std::endl;
  _out << "convVeto = " << convVeto << std::endl;
  _out << "lostHits = " << static_cast<const UInt_t>(lostHits) << std::endl;
  _out << "photonIdx = " << photonIdx << std::endl;
}

/* BEGIN CUSTOM Electron.cc.global */
/* END CUSTOM */
