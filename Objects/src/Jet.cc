#include "../interface/Jet.h"

/*static*/
panda::utils::BranchList
panda::Jet::getListOfBranches()
{
  utils::BranchList blist;
  blist += RecoParticle::getListOfBranches();
  blist += {"area", "bRegCorr", "bRegRes", "btagCMVA", "btagCSVV2", "btagDeepB", "btagDeepC", "btagDeepFlavB", "chEmEF", "chHEF", "muEF", "neEmEF", "neHEF", "qgl", "rawFactor", "jetId", "nConstituents", "nElectrons", "nMuons", "puId", "electronIdx1", "electronIdx2", "muonIdx1", "muonIdx2", "muonSubtrFactor", "partonFlavour", "l1fac"};
  return blist;
}

void
panda::Jet::datastore::allocate(UInt_t _nmax)
{
  RecoParticle::datastore::allocate(_nmax);

  area = new Float_t[nmax_];
  bRegCorr = new Float_t[nmax_];
  bRegRes = new Float_t[nmax_];
  btagCMVA = new Float_t[nmax_];
  btagCSVV2 = new Float_t[nmax_];
  btagDeepB = new Float_t[nmax_];
  btagDeepC = new Float_t[nmax_];
  btagDeepFlavB = new Float_t[nmax_];
  chEmEF = new Float_t[nmax_];
  chHEF = new Float_t[nmax_];
  muEF = new Float_t[nmax_];
  neEmEF = new Float_t[nmax_];
  neHEF = new Float_t[nmax_];
  qgl = new Float_t[nmax_];
  rawFactor = new Float_t[nmax_];
  jetId = new Int_t[nmax_];
  nConstituents = new Int_t[nmax_];
  nElectrons = new Int_t[nmax_];
  nMuons = new Int_t[nmax_];
  puId = new Int_t[nmax_];
  electronIdx1 = new Int_t[nmax_];
  electronIdx2 = new Int_t[nmax_];
  muonIdx1 = new Int_t[nmax_];
  muonIdx2 = new Int_t[nmax_];
  muonSubtrFactor = new Float_t[nmax_];
  partonFlavour = new Int_t[nmax_];
  l1fac = new Float_t[nmax_];
}

void
panda::Jet::datastore::deallocate()
{
  RecoParticle::datastore::deallocate();

  delete [] area;
  area = 0;
  delete [] bRegCorr;
  bRegCorr = 0;
  delete [] bRegRes;
  bRegRes = 0;
  delete [] btagCMVA;
  btagCMVA = 0;
  delete [] btagCSVV2;
  btagCSVV2 = 0;
  delete [] btagDeepB;
  btagDeepB = 0;
  delete [] btagDeepC;
  btagDeepC = 0;
  delete [] btagDeepFlavB;
  btagDeepFlavB = 0;
  delete [] chEmEF;
  chEmEF = 0;
  delete [] chHEF;
  chHEF = 0;
  delete [] muEF;
  muEF = 0;
  delete [] neEmEF;
  neEmEF = 0;
  delete [] neHEF;
  neHEF = 0;
  delete [] qgl;
  qgl = 0;
  delete [] rawFactor;
  rawFactor = 0;
  delete [] jetId;
  jetId = 0;
  delete [] nConstituents;
  nConstituents = 0;
  delete [] nElectrons;
  nElectrons = 0;
  delete [] nMuons;
  nMuons = 0;
  delete [] puId;
  puId = 0;
  delete [] electronIdx1;
  electronIdx1 = 0;
  delete [] electronIdx2;
  electronIdx2 = 0;
  delete [] muonIdx1;
  muonIdx1 = 0;
  delete [] muonIdx2;
  muonIdx2 = 0;
  delete [] muonSubtrFactor;
  muonSubtrFactor = 0;
  delete [] partonFlavour;
  partonFlavour = 0;
  delete [] l1fac;
  l1fac = 0;
}

void
panda::Jet::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  RecoParticle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "area", _branches);
  utils::setStatus(_tree, _name, "bRegCorr", _branches);
  utils::setStatus(_tree, _name, "bRegRes", _branches);
  utils::setStatus(_tree, _name, "btagCMVA", _branches);
  utils::setStatus(_tree, _name, "btagCSVV2", _branches);
  utils::setStatus(_tree, _name, "btagDeepB", _branches);
  utils::setStatus(_tree, _name, "btagDeepC", _branches);
  utils::setStatus(_tree, _name, "btagDeepFlavB", _branches);
  utils::setStatus(_tree, _name, "chEmEF", _branches);
  utils::setStatus(_tree, _name, "chHEF", _branches);
  utils::setStatus(_tree, _name, "muEF", _branches);
  utils::setStatus(_tree, _name, "neEmEF", _branches);
  utils::setStatus(_tree, _name, "neHEF", _branches);
  utils::setStatus(_tree, _name, "qgl", _branches);
  utils::setStatus(_tree, _name, "rawFactor", _branches);
  utils::setStatus(_tree, _name, "jetId", _branches);
  utils::setStatus(_tree, _name, "nConstituents", _branches);
  utils::setStatus(_tree, _name, "nElectrons", _branches);
  utils::setStatus(_tree, _name, "nMuons", _branches);
  utils::setStatus(_tree, _name, "puId", _branches);
  utils::setStatus(_tree, _name, "electronIdx1", _branches);
  utils::setStatus(_tree, _name, "electronIdx2", _branches);
  utils::setStatus(_tree, _name, "muonIdx1", _branches);
  utils::setStatus(_tree, _name, "muonIdx2", _branches);
  utils::setStatus(_tree, _name, "muonSubtrFactor", _branches);
  utils::setStatus(_tree, _name, "partonFlavour", _branches);
  utils::setStatus(_tree, _name, "l1fac", _branches);
}

panda::utils::BranchList
panda::Jet::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(RecoParticle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "area"));
  blist.push_back(utils::getStatus(_tree, _name, "bRegCorr"));
  blist.push_back(utils::getStatus(_tree, _name, "bRegRes"));
  blist.push_back(utils::getStatus(_tree, _name, "btagCMVA"));
  blist.push_back(utils::getStatus(_tree, _name, "btagCSVV2"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDeepB"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDeepC"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDeepFlavB"));
  blist.push_back(utils::getStatus(_tree, _name, "chEmEF"));
  blist.push_back(utils::getStatus(_tree, _name, "chHEF"));
  blist.push_back(utils::getStatus(_tree, _name, "muEF"));
  blist.push_back(utils::getStatus(_tree, _name, "neEmEF"));
  blist.push_back(utils::getStatus(_tree, _name, "neHEF"));
  blist.push_back(utils::getStatus(_tree, _name, "qgl"));
  blist.push_back(utils::getStatus(_tree, _name, "rawFactor"));
  blist.push_back(utils::getStatus(_tree, _name, "jetId"));
  blist.push_back(utils::getStatus(_tree, _name, "nConstituents"));
  blist.push_back(utils::getStatus(_tree, _name, "nElectrons"));
  blist.push_back(utils::getStatus(_tree, _name, "nMuons"));
  blist.push_back(utils::getStatus(_tree, _name, "puId"));
  blist.push_back(utils::getStatus(_tree, _name, "electronIdx1"));
  blist.push_back(utils::getStatus(_tree, _name, "electronIdx2"));
  blist.push_back(utils::getStatus(_tree, _name, "muonIdx1"));
  blist.push_back(utils::getStatus(_tree, _name, "muonIdx2"));
  blist.push_back(utils::getStatus(_tree, _name, "muonSubtrFactor"));
  blist.push_back(utils::getStatus(_tree, _name, "partonFlavour"));
  blist.push_back(utils::getStatus(_tree, _name, "l1fac"));

  return blist;
}

void
panda::Jet::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  RecoParticle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "area", area, _branches, _setStatus);
  utils::setAddress(_tree, _name, "bRegCorr", bRegCorr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "bRegRes", bRegRes, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagCMVA", btagCMVA, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagCSVV2", btagCSVV2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDeepB", btagDeepB, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDeepC", btagDeepC, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDeepFlavB", btagDeepFlavB, _branches, _setStatus);
  utils::setAddress(_tree, _name, "chEmEF", chEmEF, _branches, _setStatus);
  utils::setAddress(_tree, _name, "chHEF", chHEF, _branches, _setStatus);
  utils::setAddress(_tree, _name, "muEF", muEF, _branches, _setStatus);
  utils::setAddress(_tree, _name, "neEmEF", neEmEF, _branches, _setStatus);
  utils::setAddress(_tree, _name, "neHEF", neHEF, _branches, _setStatus);
  utils::setAddress(_tree, _name, "qgl", qgl, _branches, _setStatus);
  utils::setAddress(_tree, _name, "rawFactor", rawFactor, _branches, _setStatus);
  utils::setAddress(_tree, _name, "jetId", jetId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "nConstituents", nConstituents, _branches, _setStatus);
  utils::setAddress(_tree, _name, "nElectrons", nElectrons, _branches, _setStatus);
  utils::setAddress(_tree, _name, "nMuons", nMuons, _branches, _setStatus);
  utils::setAddress(_tree, _name, "puId", puId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "electronIdx1", electronIdx1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "electronIdx2", electronIdx2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "muonIdx1", muonIdx1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "muonIdx2", muonIdx2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "muonSubtrFactor", muonSubtrFactor, _branches, _setStatus);
  utils::setAddress(_tree, _name, "partonFlavour", partonFlavour, _branches, _setStatus);
  utils::setAddress(_tree, _name, "l1fac", l1fac, _branches, _setStatus);
}

void
panda::Jet::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  RecoParticle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "area", size, 'F', area, _branches);
  utils::book(_tree, _name, "bRegCorr", size, 'F', bRegCorr, _branches);
  utils::book(_tree, _name, "bRegRes", size, 'F', bRegRes, _branches);
  utils::book(_tree, _name, "btagCMVA", size, 'F', btagCMVA, _branches);
  utils::book(_tree, _name, "btagCSVV2", size, 'F', btagCSVV2, _branches);
  utils::book(_tree, _name, "btagDeepB", size, 'F', btagDeepB, _branches);
  utils::book(_tree, _name, "btagDeepC", size, 'F', btagDeepC, _branches);
  utils::book(_tree, _name, "btagDeepFlavB", size, 'F', btagDeepFlavB, _branches);
  utils::book(_tree, _name, "chEmEF", size, 'F', chEmEF, _branches);
  utils::book(_tree, _name, "chHEF", size, 'F', chHEF, _branches);
  utils::book(_tree, _name, "muEF", size, 'F', muEF, _branches);
  utils::book(_tree, _name, "neEmEF", size, 'F', neEmEF, _branches);
  utils::book(_tree, _name, "neHEF", size, 'F', neHEF, _branches);
  utils::book(_tree, _name, "qgl", size, 'F', qgl, _branches);
  utils::book(_tree, _name, "rawFactor", size, 'F', rawFactor, _branches);
  utils::book(_tree, _name, "jetId", size, 'I', jetId, _branches);
  utils::book(_tree, _name, "nConstituents", size, 'I', nConstituents, _branches);
  utils::book(_tree, _name, "nElectrons", size, 'I', nElectrons, _branches);
  utils::book(_tree, _name, "nMuons", size, 'I', nMuons, _branches);
  utils::book(_tree, _name, "puId", size, 'I', puId, _branches);
  utils::book(_tree, _name, "electronIdx1", size, 'I', electronIdx1, _branches);
  utils::book(_tree, _name, "electronIdx2", size, 'I', electronIdx2, _branches);
  utils::book(_tree, _name, "muonIdx1", size, 'I', muonIdx1, _branches);
  utils::book(_tree, _name, "muonIdx2", size, 'I', muonIdx2, _branches);
  utils::book(_tree, _name, "muonSubtrFactor", size, 'F', muonSubtrFactor, _branches);
  utils::book(_tree, _name, "partonFlavour", size, 'I', partonFlavour, _branches);
  utils::book(_tree, _name, "l1fac", size, 'F', l1fac, _branches);
}

void
panda::Jet::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  RecoParticle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "area");
  utils::resetAddress(_tree, _name, "bRegCorr");
  utils::resetAddress(_tree, _name, "bRegRes");
  utils::resetAddress(_tree, _name, "btagCMVA");
  utils::resetAddress(_tree, _name, "btagCSVV2");
  utils::resetAddress(_tree, _name, "btagDeepB");
  utils::resetAddress(_tree, _name, "btagDeepC");
  utils::resetAddress(_tree, _name, "btagDeepFlavB");
  utils::resetAddress(_tree, _name, "chEmEF");
  utils::resetAddress(_tree, _name, "chHEF");
  utils::resetAddress(_tree, _name, "muEF");
  utils::resetAddress(_tree, _name, "neEmEF");
  utils::resetAddress(_tree, _name, "neHEF");
  utils::resetAddress(_tree, _name, "qgl");
  utils::resetAddress(_tree, _name, "rawFactor");
  utils::resetAddress(_tree, _name, "jetId");
  utils::resetAddress(_tree, _name, "nConstituents");
  utils::resetAddress(_tree, _name, "nElectrons");
  utils::resetAddress(_tree, _name, "nMuons");
  utils::resetAddress(_tree, _name, "puId");
  utils::resetAddress(_tree, _name, "electronIdx1");
  utils::resetAddress(_tree, _name, "electronIdx2");
  utils::resetAddress(_tree, _name, "muonIdx1");
  utils::resetAddress(_tree, _name, "muonIdx2");
  utils::resetAddress(_tree, _name, "muonSubtrFactor");
  utils::resetAddress(_tree, _name, "partonFlavour");
  utils::resetAddress(_tree, _name, "l1fac");
}

void
panda::Jet::datastore::resizeVectors_(UInt_t _size)
{
  RecoParticle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Jet::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Jet::getListOfBranches().fullNames(_name);
}

panda::Jet::Jet(char const* _name/* = ""*/) :
  RecoParticle(new JetArray(1, _name)),
  area(gStore.getData(this).area[0]),
  bRegCorr(gStore.getData(this).bRegCorr[0]),
  bRegRes(gStore.getData(this).bRegRes[0]),
  btagCMVA(gStore.getData(this).btagCMVA[0]),
  btagCSVV2(gStore.getData(this).btagCSVV2[0]),
  btagDeepB(gStore.getData(this).btagDeepB[0]),
  btagDeepC(gStore.getData(this).btagDeepC[0]),
  btagDeepFlavB(gStore.getData(this).btagDeepFlavB[0]),
  chEmEF(gStore.getData(this).chEmEF[0]),
  chHEF(gStore.getData(this).chHEF[0]),
  muEF(gStore.getData(this).muEF[0]),
  neEmEF(gStore.getData(this).neEmEF[0]),
  neHEF(gStore.getData(this).neHEF[0]),
  qgl(gStore.getData(this).qgl[0]),
  rawFactor(gStore.getData(this).rawFactor[0]),
  jetId(gStore.getData(this).jetId[0]),
  nConstituents(gStore.getData(this).nConstituents[0]),
  nElectrons(gStore.getData(this).nElectrons[0]),
  nMuons(gStore.getData(this).nMuons[0]),
  puId(gStore.getData(this).puId[0]),
  electronIdx1(gStore.getData(this).electronIdx1[0]),
  electronIdx2(gStore.getData(this).electronIdx2[0]),
  muonIdx1(gStore.getData(this).muonIdx1[0]),
  muonIdx2(gStore.getData(this).muonIdx2[0]),
  muonSubtrFactor(gStore.getData(this).muonSubtrFactor[0]),
  partonFlavour(gStore.getData(this).partonFlavour[0]),
  l1fac(gStore.getData(this).l1fac[0])
{
}

panda::Jet::Jet(Jet const& _src) :
  RecoParticle(new JetArray(1, _src.getName())),
  area(gStore.getData(this).area[0]),
  bRegCorr(gStore.getData(this).bRegCorr[0]),
  bRegRes(gStore.getData(this).bRegRes[0]),
  btagCMVA(gStore.getData(this).btagCMVA[0]),
  btagCSVV2(gStore.getData(this).btagCSVV2[0]),
  btagDeepB(gStore.getData(this).btagDeepB[0]),
  btagDeepC(gStore.getData(this).btagDeepC[0]),
  btagDeepFlavB(gStore.getData(this).btagDeepFlavB[0]),
  chEmEF(gStore.getData(this).chEmEF[0]),
  chHEF(gStore.getData(this).chHEF[0]),
  muEF(gStore.getData(this).muEF[0]),
  neEmEF(gStore.getData(this).neEmEF[0]),
  neHEF(gStore.getData(this).neHEF[0]),
  qgl(gStore.getData(this).qgl[0]),
  rawFactor(gStore.getData(this).rawFactor[0]),
  jetId(gStore.getData(this).jetId[0]),
  nConstituents(gStore.getData(this).nConstituents[0]),
  nElectrons(gStore.getData(this).nElectrons[0]),
  nMuons(gStore.getData(this).nMuons[0]),
  puId(gStore.getData(this).puId[0]),
  electronIdx1(gStore.getData(this).electronIdx1[0]),
  electronIdx2(gStore.getData(this).electronIdx2[0]),
  muonIdx1(gStore.getData(this).muonIdx1[0]),
  muonIdx2(gStore.getData(this).muonIdx2[0]),
  muonSubtrFactor(gStore.getData(this).muonSubtrFactor[0]),
  partonFlavour(gStore.getData(this).partonFlavour[0]),
  l1fac(gStore.getData(this).l1fac[0])
{
  operator=(_src);
}

panda::Jet::Jet(datastore& _data, UInt_t _idx) :
  RecoParticle(_data, _idx),
  area(_data.area[_idx]),
  bRegCorr(_data.bRegCorr[_idx]),
  bRegRes(_data.bRegRes[_idx]),
  btagCMVA(_data.btagCMVA[_idx]),
  btagCSVV2(_data.btagCSVV2[_idx]),
  btagDeepB(_data.btagDeepB[_idx]),
  btagDeepC(_data.btagDeepC[_idx]),
  btagDeepFlavB(_data.btagDeepFlavB[_idx]),
  chEmEF(_data.chEmEF[_idx]),
  chHEF(_data.chHEF[_idx]),
  muEF(_data.muEF[_idx]),
  neEmEF(_data.neEmEF[_idx]),
  neHEF(_data.neHEF[_idx]),
  qgl(_data.qgl[_idx]),
  rawFactor(_data.rawFactor[_idx]),
  jetId(_data.jetId[_idx]),
  nConstituents(_data.nConstituents[_idx]),
  nElectrons(_data.nElectrons[_idx]),
  nMuons(_data.nMuons[_idx]),
  puId(_data.puId[_idx]),
  electronIdx1(_data.electronIdx1[_idx]),
  electronIdx2(_data.electronIdx2[_idx]),
  muonIdx1(_data.muonIdx1[_idx]),
  muonIdx2(_data.muonIdx2[_idx]),
  muonSubtrFactor(_data.muonSubtrFactor[_idx]),
  partonFlavour(_data.partonFlavour[_idx]),
  l1fac(_data.l1fac[_idx])
{
}

panda::Jet::Jet(ArrayBase* _array) :
  RecoParticle(_array),
  area(gStore.getData(this).area[0]),
  bRegCorr(gStore.getData(this).bRegCorr[0]),
  bRegRes(gStore.getData(this).bRegRes[0]),
  btagCMVA(gStore.getData(this).btagCMVA[0]),
  btagCSVV2(gStore.getData(this).btagCSVV2[0]),
  btagDeepB(gStore.getData(this).btagDeepB[0]),
  btagDeepC(gStore.getData(this).btagDeepC[0]),
  btagDeepFlavB(gStore.getData(this).btagDeepFlavB[0]),
  chEmEF(gStore.getData(this).chEmEF[0]),
  chHEF(gStore.getData(this).chHEF[0]),
  muEF(gStore.getData(this).muEF[0]),
  neEmEF(gStore.getData(this).neEmEF[0]),
  neHEF(gStore.getData(this).neHEF[0]),
  qgl(gStore.getData(this).qgl[0]),
  rawFactor(gStore.getData(this).rawFactor[0]),
  jetId(gStore.getData(this).jetId[0]),
  nConstituents(gStore.getData(this).nConstituents[0]),
  nElectrons(gStore.getData(this).nElectrons[0]),
  nMuons(gStore.getData(this).nMuons[0]),
  puId(gStore.getData(this).puId[0]),
  electronIdx1(gStore.getData(this).electronIdx1[0]),
  electronIdx2(gStore.getData(this).electronIdx2[0]),
  muonIdx1(gStore.getData(this).muonIdx1[0]),
  muonIdx2(gStore.getData(this).muonIdx2[0]),
  muonSubtrFactor(gStore.getData(this).muonSubtrFactor[0]),
  partonFlavour(gStore.getData(this).partonFlavour[0]),
  l1fac(gStore.getData(this).l1fac[0])
{
}

panda::Jet::~Jet()
{
  destructor();
}

void
panda::Jet::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Jet.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    RecoParticle::destructor(kTRUE);
}

panda::Jet&
panda::Jet::operator=(Jet const& _src)
{
  RecoParticle::operator=(_src);

  area = _src.area;
  bRegCorr = _src.bRegCorr;
  bRegRes = _src.bRegRes;
  btagCMVA = _src.btagCMVA;
  btagCSVV2 = _src.btagCSVV2;
  btagDeepB = _src.btagDeepB;
  btagDeepC = _src.btagDeepC;
  btagDeepFlavB = _src.btagDeepFlavB;
  chEmEF = _src.chEmEF;
  chHEF = _src.chHEF;
  muEF = _src.muEF;
  neEmEF = _src.neEmEF;
  neHEF = _src.neHEF;
  qgl = _src.qgl;
  rawFactor = _src.rawFactor;
  jetId = _src.jetId;
  nConstituents = _src.nConstituents;
  nElectrons = _src.nElectrons;
  nMuons = _src.nMuons;
  puId = _src.puId;
  electronIdx1 = _src.electronIdx1;
  electronIdx2 = _src.electronIdx2;
  muonIdx1 = _src.muonIdx1;
  muonIdx2 = _src.muonIdx2;
  muonSubtrFactor = _src.muonSubtrFactor;
  partonFlavour = _src.partonFlavour;
  l1fac = _src.l1fac;

  /* BEGIN CUSTOM Jet.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Jet::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  RecoParticle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "area", "", 'F', &area, _branches);
  utils::book(_tree, _name, "bRegCorr", "", 'F', &bRegCorr, _branches);
  utils::book(_tree, _name, "bRegRes", "", 'F', &bRegRes, _branches);
  utils::book(_tree, _name, "btagCMVA", "", 'F', &btagCMVA, _branches);
  utils::book(_tree, _name, "btagCSVV2", "", 'F', &btagCSVV2, _branches);
  utils::book(_tree, _name, "btagDeepB", "", 'F', &btagDeepB, _branches);
  utils::book(_tree, _name, "btagDeepC", "", 'F', &btagDeepC, _branches);
  utils::book(_tree, _name, "btagDeepFlavB", "", 'F', &btagDeepFlavB, _branches);
  utils::book(_tree, _name, "chEmEF", "", 'F', &chEmEF, _branches);
  utils::book(_tree, _name, "chHEF", "", 'F', &chHEF, _branches);
  utils::book(_tree, _name, "muEF", "", 'F', &muEF, _branches);
  utils::book(_tree, _name, "neEmEF", "", 'F', &neEmEF, _branches);
  utils::book(_tree, _name, "neHEF", "", 'F', &neHEF, _branches);
  utils::book(_tree, _name, "qgl", "", 'F', &qgl, _branches);
  utils::book(_tree, _name, "rawFactor", "", 'F', &rawFactor, _branches);
  utils::book(_tree, _name, "jetId", "", 'I', &jetId, _branches);
  utils::book(_tree, _name, "nConstituents", "", 'I', &nConstituents, _branches);
  utils::book(_tree, _name, "nElectrons", "", 'I', &nElectrons, _branches);
  utils::book(_tree, _name, "nMuons", "", 'I', &nMuons, _branches);
  utils::book(_tree, _name, "puId", "", 'I', &puId, _branches);
  utils::book(_tree, _name, "electronIdx1", "", 'I', &electronIdx1, _branches);
  utils::book(_tree, _name, "electronIdx2", "", 'I', &electronIdx2, _branches);
  utils::book(_tree, _name, "muonIdx1", "", 'I', &muonIdx1, _branches);
  utils::book(_tree, _name, "muonIdx2", "", 'I', &muonIdx2, _branches);
  utils::book(_tree, _name, "muonSubtrFactor", "", 'F', &muonSubtrFactor, _branches);
  utils::book(_tree, _name, "partonFlavour", "", 'I', &partonFlavour, _branches);
  utils::book(_tree, _name, "l1fac", "", 'F', &l1fac, _branches);
}

void
panda::Jet::doInit_()
{
  RecoParticle::doInit_();

  area = 0.;
  bRegCorr = 0.;
  bRegRes = 0.;
  btagCMVA = 0.;
  btagCSVV2 = 0.;
  btagDeepB = 0.;
  btagDeepC = 0.;
  btagDeepFlavB = 0.;
  chEmEF = 0.;
  chHEF = 0.;
  muEF = 0.;
  neEmEF = 0.;
  neHEF = 0.;
  qgl = 0.;
  rawFactor = 0.;
  jetId = 0;
  nConstituents = 0;
  nElectrons = 0;
  nMuons = 0;
  puId = 0;
  electronIdx1 = 0;
  electronIdx2 = 0;
  muonIdx1 = 0;
  muonIdx2 = 0;
  muonSubtrFactor = 0.;
  partonFlavour = 0;
  l1fac = 0.;

  /* BEGIN CUSTOM Jet.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Jet::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Jet.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Jet::dump(std::ostream& _out/* = std::cout*/) const
{
  RecoParticle::dump(_out);

  _out << "area = " << area << std::endl;
  _out << "bRegCorr = " << bRegCorr << std::endl;
  _out << "bRegRes = " << bRegRes << std::endl;
  _out << "btagCMVA = " << btagCMVA << std::endl;
  _out << "btagCSVV2 = " << btagCSVV2 << std::endl;
  _out << "btagDeepB = " << btagDeepB << std::endl;
  _out << "btagDeepC = " << btagDeepC << std::endl;
  _out << "btagDeepFlavB = " << btagDeepFlavB << std::endl;
  _out << "chEmEF = " << chEmEF << std::endl;
  _out << "chHEF = " << chHEF << std::endl;
  _out << "muEF = " << muEF << std::endl;
  _out << "neEmEF = " << neEmEF << std::endl;
  _out << "neHEF = " << neHEF << std::endl;
  _out << "qgl = " << qgl << std::endl;
  _out << "rawFactor = " << rawFactor << std::endl;
  _out << "jetId = " << jetId << std::endl;
  _out << "nConstituents = " << nConstituents << std::endl;
  _out << "nElectrons = " << nElectrons << std::endl;
  _out << "nMuons = " << nMuons << std::endl;
  _out << "puId = " << puId << std::endl;
  _out << "electronIdx1 = " << electronIdx1 << std::endl;
  _out << "electronIdx2 = " << electronIdx2 << std::endl;
  _out << "muonIdx1 = " << muonIdx1 << std::endl;
  _out << "muonIdx2 = " << muonIdx2 << std::endl;
  _out << "muonSubtrFactor = " << muonSubtrFactor << std::endl;
  _out << "partonFlavour = " << partonFlavour << std::endl;
  _out << "l1fac = " << l1fac << std::endl;
}

/* BEGIN CUSTOM Jet.cc.global */
/* END CUSTOM */
