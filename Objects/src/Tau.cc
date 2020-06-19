#include "../interface/Tau.h"

/*static*/
panda::utils::BranchList
panda::Tau::getListOfBranches()
{
  utils::BranchList blist;
  blist += PFParticle::getListOfBranches();
  blist += {"decayMode", "idDecayMode", "idDecayModeNewDMs", "idMVAoldDM2017v2", "leadTkPtOverTauPt", "leadTkDeltaEta", "leadTkDeltaPhi", "dxy", "dz", "rawIso", "rawIsodR03", "chargedIso", "neutralIso", "puCorr", "photonsOutsideSignalCone", "idMVAnewDM2017v2"};
  return blist;
}

void
panda::Tau::datastore::allocate(UInt_t _nmax)
{
  PFParticle::datastore::allocate(_nmax);

  decayMode = new Int_t[nmax_];
  idDecayMode = new Bool_t[nmax_];
  idDecayModeNewDMs = new Bool_t[nmax_];
  idMVAoldDM2017v2 = new UChar_t[nmax_];
  leadTkPtOverTauPt = new Float_t[nmax_];
  leadTkDeltaEta = new Float_t[nmax_];
  leadTkDeltaPhi = new Float_t[nmax_];
  dxy = new Float_t[nmax_];
  dz = new Float_t[nmax_];
  rawIso = new Float_t[nmax_];
  rawIsodR03 = new Float_t[nmax_];
  chargedIso = new Float_t[nmax_];
  neutralIso = new Float_t[nmax_];
  puCorr = new Float_t[nmax_];
  photonsOutsideSignalCone = new Float_t[nmax_];
  idMVAnewDM2017v2 = new UChar_t[nmax_];
}

void
panda::Tau::datastore::deallocate()
{
  PFParticle::datastore::deallocate();

  delete [] decayMode;
  decayMode = 0;
  delete [] idDecayMode;
  idDecayMode = 0;
  delete [] idDecayModeNewDMs;
  idDecayModeNewDMs = 0;
  delete [] idMVAoldDM2017v2;
  idMVAoldDM2017v2 = 0;
  delete [] leadTkPtOverTauPt;
  leadTkPtOverTauPt = 0;
  delete [] leadTkDeltaEta;
  leadTkDeltaEta = 0;
  delete [] leadTkDeltaPhi;
  leadTkDeltaPhi = 0;
  delete [] dxy;
  dxy = 0;
  delete [] dz;
  dz = 0;
  delete [] rawIso;
  rawIso = 0;
  delete [] rawIsodR03;
  rawIsodR03 = 0;
  delete [] chargedIso;
  chargedIso = 0;
  delete [] neutralIso;
  neutralIso = 0;
  delete [] puCorr;
  puCorr = 0;
  delete [] photonsOutsideSignalCone;
  photonsOutsideSignalCone = 0;
  delete [] idMVAnewDM2017v2;
  idMVAnewDM2017v2 = 0;
}

void
panda::Tau::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  PFParticle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "decayMode", _branches);
  utils::setStatus(_tree, _name, "idDecayMode", _branches);
  utils::setStatus(_tree, _name, "idDecayModeNewDMs", _branches);
  utils::setStatus(_tree, _name, "idMVAoldDM2017v2", _branches);
  utils::setStatus(_tree, _name, "leadTkPtOverTauPt", _branches);
  utils::setStatus(_tree, _name, "leadTkDeltaEta", _branches);
  utils::setStatus(_tree, _name, "leadTkDeltaPhi", _branches);
  utils::setStatus(_tree, _name, "dxy", _branches);
  utils::setStatus(_tree, _name, "dz", _branches);
  utils::setStatus(_tree, _name, "rawIso", _branches);
  utils::setStatus(_tree, _name, "rawIsodR03", _branches);
  utils::setStatus(_tree, _name, "chargedIso", _branches);
  utils::setStatus(_tree, _name, "neutralIso", _branches);
  utils::setStatus(_tree, _name, "puCorr", _branches);
  utils::setStatus(_tree, _name, "photonsOutsideSignalCone", _branches);
  utils::setStatus(_tree, _name, "idMVAnewDM2017v2", _branches);
}

panda::utils::BranchList
panda::Tau::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(PFParticle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "decayMode"));
  blist.push_back(utils::getStatus(_tree, _name, "idDecayMode"));
  blist.push_back(utils::getStatus(_tree, _name, "idDecayModeNewDMs"));
  blist.push_back(utils::getStatus(_tree, _name, "idMVAoldDM2017v2"));
  blist.push_back(utils::getStatus(_tree, _name, "leadTkPtOverTauPt"));
  blist.push_back(utils::getStatus(_tree, _name, "leadTkDeltaEta"));
  blist.push_back(utils::getStatus(_tree, _name, "leadTkDeltaPhi"));
  blist.push_back(utils::getStatus(_tree, _name, "dxy"));
  blist.push_back(utils::getStatus(_tree, _name, "dz"));
  blist.push_back(utils::getStatus(_tree, _name, "rawIso"));
  blist.push_back(utils::getStatus(_tree, _name, "rawIsodR03"));
  blist.push_back(utils::getStatus(_tree, _name, "chargedIso"));
  blist.push_back(utils::getStatus(_tree, _name, "neutralIso"));
  blist.push_back(utils::getStatus(_tree, _name, "puCorr"));
  blist.push_back(utils::getStatus(_tree, _name, "photonsOutsideSignalCone"));
  blist.push_back(utils::getStatus(_tree, _name, "idMVAnewDM2017v2"));

  return blist;
}

void
panda::Tau::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  PFParticle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "decayMode", decayMode, _branches, _setStatus);
  utils::setAddress(_tree, _name, "idDecayMode", idDecayMode, _branches, _setStatus);
  utils::setAddress(_tree, _name, "idDecayModeNewDMs", idDecayModeNewDMs, _branches, _setStatus);
  utils::setAddress(_tree, _name, "idMVAoldDM2017v2", idMVAoldDM2017v2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "leadTkPtOverTauPt", leadTkPtOverTauPt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "leadTkDeltaEta", leadTkDeltaEta, _branches, _setStatus);
  utils::setAddress(_tree, _name, "leadTkDeltaPhi", leadTkDeltaPhi, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dxy", dxy, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dz", dz, _branches, _setStatus);
  utils::setAddress(_tree, _name, "rawIso", rawIso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "rawIsodR03", rawIsodR03, _branches, _setStatus);
  utils::setAddress(_tree, _name, "chargedIso", chargedIso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "neutralIso", neutralIso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "puCorr", puCorr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "photonsOutsideSignalCone", photonsOutsideSignalCone, _branches, _setStatus);
  utils::setAddress(_tree, _name, "idMVAnewDM2017v2", idMVAnewDM2017v2, _branches, _setStatus);
}

void
panda::Tau::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  PFParticle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "decayMode", size, 'I', decayMode, _branches);
  utils::book(_tree, _name, "idDecayMode", size, 'O', idDecayMode, _branches);
  utils::book(_tree, _name, "idDecayModeNewDMs", size, 'O', idDecayModeNewDMs, _branches);
  utils::book(_tree, _name, "idMVAoldDM2017v2", size, 'b', idMVAoldDM2017v2, _branches);
  utils::book(_tree, _name, "leadTkPtOverTauPt", size, 'F', leadTkPtOverTauPt, _branches);
  utils::book(_tree, _name, "leadTkDeltaEta", size, 'F', leadTkDeltaEta, _branches);
  utils::book(_tree, _name, "leadTkDeltaPhi", size, 'F', leadTkDeltaPhi, _branches);
  utils::book(_tree, _name, "dxy", size, 'F', dxy, _branches);
  utils::book(_tree, _name, "dz", size, 'F', dz, _branches);
  utils::book(_tree, _name, "rawIso", size, 'F', rawIso, _branches);
  utils::book(_tree, _name, "rawIsodR03", size, 'F', rawIsodR03, _branches);
  utils::book(_tree, _name, "chargedIso", size, 'F', chargedIso, _branches);
  utils::book(_tree, _name, "neutralIso", size, 'F', neutralIso, _branches);
  utils::book(_tree, _name, "puCorr", size, 'F', puCorr, _branches);
  utils::book(_tree, _name, "photonsOutsideSignalCone", size, 'F', photonsOutsideSignalCone, _branches);
  utils::book(_tree, _name, "idMVAnewDM2017v2", size, 'b', idMVAnewDM2017v2, _branches);
}

void
panda::Tau::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  PFParticle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "decayMode");
  utils::resetAddress(_tree, _name, "idDecayMode");
  utils::resetAddress(_tree, _name, "idDecayModeNewDMs");
  utils::resetAddress(_tree, _name, "idMVAoldDM2017v2");
  utils::resetAddress(_tree, _name, "leadTkPtOverTauPt");
  utils::resetAddress(_tree, _name, "leadTkDeltaEta");
  utils::resetAddress(_tree, _name, "leadTkDeltaPhi");
  utils::resetAddress(_tree, _name, "dxy");
  utils::resetAddress(_tree, _name, "dz");
  utils::resetAddress(_tree, _name, "rawIso");
  utils::resetAddress(_tree, _name, "rawIsodR03");
  utils::resetAddress(_tree, _name, "chargedIso");
  utils::resetAddress(_tree, _name, "neutralIso");
  utils::resetAddress(_tree, _name, "puCorr");
  utils::resetAddress(_tree, _name, "photonsOutsideSignalCone");
  utils::resetAddress(_tree, _name, "idMVAnewDM2017v2");
}

void
panda::Tau::datastore::resizeVectors_(UInt_t _size)
{
  PFParticle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Tau::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Tau::getListOfBranches().fullNames(_name);
}

panda::Tau::Tau(char const* _name/* = ""*/) :
  PFParticle(new TauArray(1, _name)),
  decayMode(gStore.getData(this).decayMode[0]),
  idDecayMode(gStore.getData(this).idDecayMode[0]),
  idDecayModeNewDMs(gStore.getData(this).idDecayModeNewDMs[0]),
  idMVAoldDM2017v2(gStore.getData(this).idMVAoldDM2017v2[0]),
  leadTkPtOverTauPt(gStore.getData(this).leadTkPtOverTauPt[0]),
  leadTkDeltaEta(gStore.getData(this).leadTkDeltaEta[0]),
  leadTkDeltaPhi(gStore.getData(this).leadTkDeltaPhi[0]),
  dxy(gStore.getData(this).dxy[0]),
  dz(gStore.getData(this).dz[0]),
  rawIso(gStore.getData(this).rawIso[0]),
  rawIsodR03(gStore.getData(this).rawIsodR03[0]),
  chargedIso(gStore.getData(this).chargedIso[0]),
  neutralIso(gStore.getData(this).neutralIso[0]),
  puCorr(gStore.getData(this).puCorr[0]),
  photonsOutsideSignalCone(gStore.getData(this).photonsOutsideSignalCone[0]),
  idMVAnewDM2017v2(gStore.getData(this).idMVAnewDM2017v2[0])
{
}

panda::Tau::Tau(Tau const& _src) :
  PFParticle(new TauArray(1, _src.getName())),
  decayMode(gStore.getData(this).decayMode[0]),
  idDecayMode(gStore.getData(this).idDecayMode[0]),
  idDecayModeNewDMs(gStore.getData(this).idDecayModeNewDMs[0]),
  idMVAoldDM2017v2(gStore.getData(this).idMVAoldDM2017v2[0]),
  leadTkPtOverTauPt(gStore.getData(this).leadTkPtOverTauPt[0]),
  leadTkDeltaEta(gStore.getData(this).leadTkDeltaEta[0]),
  leadTkDeltaPhi(gStore.getData(this).leadTkDeltaPhi[0]),
  dxy(gStore.getData(this).dxy[0]),
  dz(gStore.getData(this).dz[0]),
  rawIso(gStore.getData(this).rawIso[0]),
  rawIsodR03(gStore.getData(this).rawIsodR03[0]),
  chargedIso(gStore.getData(this).chargedIso[0]),
  neutralIso(gStore.getData(this).neutralIso[0]),
  puCorr(gStore.getData(this).puCorr[0]),
  photonsOutsideSignalCone(gStore.getData(this).photonsOutsideSignalCone[0]),
  idMVAnewDM2017v2(gStore.getData(this).idMVAnewDM2017v2[0])
{
  operator=(_src);
}

panda::Tau::Tau(datastore& _data, UInt_t _idx) :
  PFParticle(_data, _idx),
  decayMode(_data.decayMode[_idx]),
  idDecayMode(_data.idDecayMode[_idx]),
  idDecayModeNewDMs(_data.idDecayModeNewDMs[_idx]),
  idMVAoldDM2017v2(_data.idMVAoldDM2017v2[_idx]),
  leadTkPtOverTauPt(_data.leadTkPtOverTauPt[_idx]),
  leadTkDeltaEta(_data.leadTkDeltaEta[_idx]),
  leadTkDeltaPhi(_data.leadTkDeltaPhi[_idx]),
  dxy(_data.dxy[_idx]),
  dz(_data.dz[_idx]),
  rawIso(_data.rawIso[_idx]),
  rawIsodR03(_data.rawIsodR03[_idx]),
  chargedIso(_data.chargedIso[_idx]),
  neutralIso(_data.neutralIso[_idx]),
  puCorr(_data.puCorr[_idx]),
  photonsOutsideSignalCone(_data.photonsOutsideSignalCone[_idx]),
  idMVAnewDM2017v2(_data.idMVAnewDM2017v2[_idx])
{
}

panda::Tau::Tau(ArrayBase* _array) :
  PFParticle(_array),
  decayMode(gStore.getData(this).decayMode[0]),
  idDecayMode(gStore.getData(this).idDecayMode[0]),
  idDecayModeNewDMs(gStore.getData(this).idDecayModeNewDMs[0]),
  idMVAoldDM2017v2(gStore.getData(this).idMVAoldDM2017v2[0]),
  leadTkPtOverTauPt(gStore.getData(this).leadTkPtOverTauPt[0]),
  leadTkDeltaEta(gStore.getData(this).leadTkDeltaEta[0]),
  leadTkDeltaPhi(gStore.getData(this).leadTkDeltaPhi[0]),
  dxy(gStore.getData(this).dxy[0]),
  dz(gStore.getData(this).dz[0]),
  rawIso(gStore.getData(this).rawIso[0]),
  rawIsodR03(gStore.getData(this).rawIsodR03[0]),
  chargedIso(gStore.getData(this).chargedIso[0]),
  neutralIso(gStore.getData(this).neutralIso[0]),
  puCorr(gStore.getData(this).puCorr[0]),
  photonsOutsideSignalCone(gStore.getData(this).photonsOutsideSignalCone[0]),
  idMVAnewDM2017v2(gStore.getData(this).idMVAnewDM2017v2[0])
{
}

panda::Tau::~Tau()
{
  destructor();
}

void
panda::Tau::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Tau.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    PFParticle::destructor(kTRUE);
}

panda::Tau&
panda::Tau::operator=(Tau const& _src)
{
  PFParticle::operator=(_src);

  decayMode = _src.decayMode;
  idDecayMode = _src.idDecayMode;
  idDecayModeNewDMs = _src.idDecayModeNewDMs;
  idMVAoldDM2017v2 = _src.idMVAoldDM2017v2;
  leadTkPtOverTauPt = _src.leadTkPtOverTauPt;
  leadTkDeltaEta = _src.leadTkDeltaEta;
  leadTkDeltaPhi = _src.leadTkDeltaPhi;
  dxy = _src.dxy;
  dz = _src.dz;
  rawIso = _src.rawIso;
  rawIsodR03 = _src.rawIsodR03;
  chargedIso = _src.chargedIso;
  neutralIso = _src.neutralIso;
  puCorr = _src.puCorr;
  photonsOutsideSignalCone = _src.photonsOutsideSignalCone;
  idMVAnewDM2017v2 = _src.idMVAnewDM2017v2;

  /* BEGIN CUSTOM Tau.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Tau::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  PFParticle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "decayMode", "", 'I', &decayMode, _branches);
  utils::book(_tree, _name, "idDecayMode", "", 'O', &idDecayMode, _branches);
  utils::book(_tree, _name, "idDecayModeNewDMs", "", 'O', &idDecayModeNewDMs, _branches);
  utils::book(_tree, _name, "idMVAoldDM2017v2", "", 'b', &idMVAoldDM2017v2, _branches);
  utils::book(_tree, _name, "leadTkPtOverTauPt", "", 'F', &leadTkPtOverTauPt, _branches);
  utils::book(_tree, _name, "leadTkDeltaEta", "", 'F', &leadTkDeltaEta, _branches);
  utils::book(_tree, _name, "leadTkDeltaPhi", "", 'F', &leadTkDeltaPhi, _branches);
  utils::book(_tree, _name, "dxy", "", 'F', &dxy, _branches);
  utils::book(_tree, _name, "dz", "", 'F', &dz, _branches);
  utils::book(_tree, _name, "rawIso", "", 'F', &rawIso, _branches);
  utils::book(_tree, _name, "rawIsodR03", "", 'F', &rawIsodR03, _branches);
  utils::book(_tree, _name, "chargedIso", "", 'F', &chargedIso, _branches);
  utils::book(_tree, _name, "neutralIso", "", 'F', &neutralIso, _branches);
  utils::book(_tree, _name, "puCorr", "", 'F', &puCorr, _branches);
  utils::book(_tree, _name, "photonsOutsideSignalCone", "", 'F', &photonsOutsideSignalCone, _branches);
  utils::book(_tree, _name, "idMVAnewDM2017v2", "", 'b', &idMVAnewDM2017v2, _branches);
}

void
panda::Tau::doInit_()
{
  PFParticle::doInit_();

  decayMode = 0;
  idDecayMode = false;
  idDecayModeNewDMs = false;
  idMVAoldDM2017v2 = 0;
  leadTkPtOverTauPt = 0.;
  leadTkDeltaEta = 0.;
  leadTkDeltaPhi = 0.;
  dxy = 0.;
  dz = 0.;
  rawIso = 0.;
  rawIsodR03 = 0.;
  chargedIso = 0.;
  neutralIso = 0.;
  puCorr = 0.;
  photonsOutsideSignalCone = 0.;
  idMVAnewDM2017v2 = 0;

  /* BEGIN CUSTOM Tau.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Tau::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Tau.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Tau::dump(std::ostream& _out/* = std::cout*/) const
{
  PFParticle::dump(_out);

  _out << "decayMode = " << decayMode << std::endl;
  _out << "idDecayMode = " << idDecayMode << std::endl;
  _out << "idDecayModeNewDMs = " << idDecayModeNewDMs << std::endl;
  _out << "idMVAoldDM2017v2 = " << static_cast<const UInt_t>(idMVAoldDM2017v2) << std::endl;
  _out << "leadTkPtOverTauPt = " << leadTkPtOverTauPt << std::endl;
  _out << "leadTkDeltaEta = " << leadTkDeltaEta << std::endl;
  _out << "leadTkDeltaPhi = " << leadTkDeltaPhi << std::endl;
  _out << "dxy = " << dxy << std::endl;
  _out << "dz = " << dz << std::endl;
  _out << "rawIso = " << rawIso << std::endl;
  _out << "rawIsodR03 = " << rawIsodR03 << std::endl;
  _out << "chargedIso = " << chargedIso << std::endl;
  _out << "neutralIso = " << neutralIso << std::endl;
  _out << "puCorr = " << puCorr << std::endl;
  _out << "photonsOutsideSignalCone = " << photonsOutsideSignalCone << std::endl;
  _out << "idMVAnewDM2017v2 = " << static_cast<const UInt_t>(idMVAnewDM2017v2) << std::endl;
}

/* BEGIN CUSTOM Tau.cc.global */
/* END CUSTOM */
