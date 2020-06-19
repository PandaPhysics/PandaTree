#include "../interface/Muon.h"

/*static*/
panda::utils::BranchList
panda::Muon::getListOfBranches()
{
  utils::BranchList blist;
  blist += Lepton::getListOfBranches();
  blist += {"pfRelIso04_all", "pfRelIso03_all", "pfRelIso03_chg", "ptErr", "segmentComp", "nStations", "nTrackerLayers", "highPtId", "miniIsoId", "multiIsoId", "mvaId", "pfIsoId", "tkIsoId", "inTimeMuon", "isGlobal", "isTracker", "looseId", "mediumId", "mediumPromptId", "softId", "softMvaId", "tightId", "triggerIdLoose"};
  return blist;
}

void
panda::Muon::datastore::allocate(UInt_t _nmax)
{
  Lepton::datastore::allocate(_nmax);

  pfRelIso04_all = new Float_t[nmax_];
  pfRelIso03_all = new Float_t[nmax_];
  pfRelIso03_chg = new Float_t[nmax_];
  ptErr = new Float_t[nmax_];
  segmentComp = new Float_t[nmax_];
  nStations = new Int_t[nmax_];
  nTrackerLayers = new Int_t[nmax_];
  highPtId = new UChar_t[nmax_];
  miniIsoId = new Int_t[nmax_];
  multiIsoId = new UChar_t[nmax_];
  mvaId = new UChar_t[nmax_];
  pfIsoId = new UChar_t[nmax_];
  tkIsoId = new UChar_t[nmax_];
  inTimeMuon = new Bool_t[nmax_];
  isGlobal = new Bool_t[nmax_];
  isTracker = new Bool_t[nmax_];
  looseId = new Bool_t[nmax_];
  mediumId = new Bool_t[nmax_];
  mediumPromptId = new Bool_t[nmax_];
  softId = new Bool_t[nmax_];
  softMvaId = new Bool_t[nmax_];
  tightId = new Bool_t[nmax_];
  triggerIdLoose = new Bool_t[nmax_];
}

void
panda::Muon::datastore::deallocate()
{
  Lepton::datastore::deallocate();

  delete [] pfRelIso04_all;
  pfRelIso04_all = 0;
  delete [] pfRelIso03_all;
  pfRelIso03_all = 0;
  delete [] pfRelIso03_chg;
  pfRelIso03_chg = 0;
  delete [] ptErr;
  ptErr = 0;
  delete [] segmentComp;
  segmentComp = 0;
  delete [] nStations;
  nStations = 0;
  delete [] nTrackerLayers;
  nTrackerLayers = 0;
  delete [] highPtId;
  highPtId = 0;
  delete [] miniIsoId;
  miniIsoId = 0;
  delete [] multiIsoId;
  multiIsoId = 0;
  delete [] mvaId;
  mvaId = 0;
  delete [] pfIsoId;
  pfIsoId = 0;
  delete [] tkIsoId;
  tkIsoId = 0;
  delete [] inTimeMuon;
  inTimeMuon = 0;
  delete [] isGlobal;
  isGlobal = 0;
  delete [] isTracker;
  isTracker = 0;
  delete [] looseId;
  looseId = 0;
  delete [] mediumId;
  mediumId = 0;
  delete [] mediumPromptId;
  mediumPromptId = 0;
  delete [] softId;
  softId = 0;
  delete [] softMvaId;
  softMvaId = 0;
  delete [] tightId;
  tightId = 0;
  delete [] triggerIdLoose;
  triggerIdLoose = 0;
}

void
panda::Muon::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Lepton::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "pfRelIso04_all", _branches);
  utils::setStatus(_tree, _name, "pfRelIso03_all", _branches);
  utils::setStatus(_tree, _name, "pfRelIso03_chg", _branches);
  utils::setStatus(_tree, _name, "ptErr", _branches);
  utils::setStatus(_tree, _name, "segmentComp", _branches);
  utils::setStatus(_tree, _name, "nStations", _branches);
  utils::setStatus(_tree, _name, "nTrackerLayers", _branches);
  utils::setStatus(_tree, _name, "highPtId", _branches);
  utils::setStatus(_tree, _name, "miniIsoId", _branches);
  utils::setStatus(_tree, _name, "multiIsoId", _branches);
  utils::setStatus(_tree, _name, "mvaId", _branches);
  utils::setStatus(_tree, _name, "pfIsoId", _branches);
  utils::setStatus(_tree, _name, "tkIsoId", _branches);
  utils::setStatus(_tree, _name, "inTimeMuon", _branches);
  utils::setStatus(_tree, _name, "isGlobal", _branches);
  utils::setStatus(_tree, _name, "isTracker", _branches);
  utils::setStatus(_tree, _name, "looseId", _branches);
  utils::setStatus(_tree, _name, "mediumId", _branches);
  utils::setStatus(_tree, _name, "mediumPromptId", _branches);
  utils::setStatus(_tree, _name, "softId", _branches);
  utils::setStatus(_tree, _name, "softMvaId", _branches);
  utils::setStatus(_tree, _name, "tightId", _branches);
  utils::setStatus(_tree, _name, "triggerIdLoose", _branches);
}

panda::utils::BranchList
panda::Muon::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Lepton::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso04_all"));
  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso03_all"));
  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso03_chg"));
  blist.push_back(utils::getStatus(_tree, _name, "ptErr"));
  blist.push_back(utils::getStatus(_tree, _name, "segmentComp"));
  blist.push_back(utils::getStatus(_tree, _name, "nStations"));
  blist.push_back(utils::getStatus(_tree, _name, "nTrackerLayers"));
  blist.push_back(utils::getStatus(_tree, _name, "highPtId"));
  blist.push_back(utils::getStatus(_tree, _name, "miniIsoId"));
  blist.push_back(utils::getStatus(_tree, _name, "multiIsoId"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaId"));
  blist.push_back(utils::getStatus(_tree, _name, "pfIsoId"));
  blist.push_back(utils::getStatus(_tree, _name, "tkIsoId"));
  blist.push_back(utils::getStatus(_tree, _name, "inTimeMuon"));
  blist.push_back(utils::getStatus(_tree, _name, "isGlobal"));
  blist.push_back(utils::getStatus(_tree, _name, "isTracker"));
  blist.push_back(utils::getStatus(_tree, _name, "looseId"));
  blist.push_back(utils::getStatus(_tree, _name, "mediumId"));
  blist.push_back(utils::getStatus(_tree, _name, "mediumPromptId"));
  blist.push_back(utils::getStatus(_tree, _name, "softId"));
  blist.push_back(utils::getStatus(_tree, _name, "softMvaId"));
  blist.push_back(utils::getStatus(_tree, _name, "tightId"));
  blist.push_back(utils::getStatus(_tree, _name, "triggerIdLoose"));

  return blist;
}

void
panda::Muon::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Lepton::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "pfRelIso04_all", pfRelIso04_all, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfRelIso03_all", pfRelIso03_all, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfRelIso03_chg", pfRelIso03_chg, _branches, _setStatus);
  utils::setAddress(_tree, _name, "ptErr", ptErr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "segmentComp", segmentComp, _branches, _setStatus);
  utils::setAddress(_tree, _name, "nStations", nStations, _branches, _setStatus);
  utils::setAddress(_tree, _name, "nTrackerLayers", nTrackerLayers, _branches, _setStatus);
  utils::setAddress(_tree, _name, "highPtId", highPtId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "miniIsoId", miniIsoId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "multiIsoId", multiIsoId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaId", mvaId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfIsoId", pfIsoId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tkIsoId", tkIsoId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "inTimeMuon", inTimeMuon, _branches, _setStatus);
  utils::setAddress(_tree, _name, "isGlobal", isGlobal, _branches, _setStatus);
  utils::setAddress(_tree, _name, "isTracker", isTracker, _branches, _setStatus);
  utils::setAddress(_tree, _name, "looseId", looseId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mediumId", mediumId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mediumPromptId", mediumPromptId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "softId", softId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "softMvaId", softMvaId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tightId", tightId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "triggerIdLoose", triggerIdLoose, _branches, _setStatus);
}

void
panda::Muon::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Lepton::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "pfRelIso04_all", size, 'F', pfRelIso04_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_all", size, 'F', pfRelIso03_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_chg", size, 'F', pfRelIso03_chg, _branches);
  utils::book(_tree, _name, "ptErr", size, 'F', ptErr, _branches);
  utils::book(_tree, _name, "segmentComp", size, 'F', segmentComp, _branches);
  utils::book(_tree, _name, "nStations", size, 'I', nStations, _branches);
  utils::book(_tree, _name, "nTrackerLayers", size, 'I', nTrackerLayers, _branches);
  utils::book(_tree, _name, "highPtId", size, 'b', highPtId, _branches);
  utils::book(_tree, _name, "miniIsoId", size, 'I', miniIsoId, _branches);
  utils::book(_tree, _name, "multiIsoId", size, 'b', multiIsoId, _branches);
  utils::book(_tree, _name, "mvaId", size, 'b', mvaId, _branches);
  utils::book(_tree, _name, "pfIsoId", size, 'b', pfIsoId, _branches);
  utils::book(_tree, _name, "tkIsoId", size, 'b', tkIsoId, _branches);
  utils::book(_tree, _name, "inTimeMuon", size, 'O', inTimeMuon, _branches);
  utils::book(_tree, _name, "isGlobal", size, 'O', isGlobal, _branches);
  utils::book(_tree, _name, "isTracker", size, 'O', isTracker, _branches);
  utils::book(_tree, _name, "looseId", size, 'O', looseId, _branches);
  utils::book(_tree, _name, "mediumId", size, 'O', mediumId, _branches);
  utils::book(_tree, _name, "mediumPromptId", size, 'O', mediumPromptId, _branches);
  utils::book(_tree, _name, "softId", size, 'O', softId, _branches);
  utils::book(_tree, _name, "softMvaId", size, 'O', softMvaId, _branches);
  utils::book(_tree, _name, "tightId", size, 'O', tightId, _branches);
  utils::book(_tree, _name, "triggerIdLoose", size, 'O', triggerIdLoose, _branches);
}

void
panda::Muon::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Lepton::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "pfRelIso04_all");
  utils::resetAddress(_tree, _name, "pfRelIso03_all");
  utils::resetAddress(_tree, _name, "pfRelIso03_chg");
  utils::resetAddress(_tree, _name, "ptErr");
  utils::resetAddress(_tree, _name, "segmentComp");
  utils::resetAddress(_tree, _name, "nStations");
  utils::resetAddress(_tree, _name, "nTrackerLayers");
  utils::resetAddress(_tree, _name, "highPtId");
  utils::resetAddress(_tree, _name, "miniIsoId");
  utils::resetAddress(_tree, _name, "multiIsoId");
  utils::resetAddress(_tree, _name, "mvaId");
  utils::resetAddress(_tree, _name, "pfIsoId");
  utils::resetAddress(_tree, _name, "tkIsoId");
  utils::resetAddress(_tree, _name, "inTimeMuon");
  utils::resetAddress(_tree, _name, "isGlobal");
  utils::resetAddress(_tree, _name, "isTracker");
  utils::resetAddress(_tree, _name, "looseId");
  utils::resetAddress(_tree, _name, "mediumId");
  utils::resetAddress(_tree, _name, "mediumPromptId");
  utils::resetAddress(_tree, _name, "softId");
  utils::resetAddress(_tree, _name, "softMvaId");
  utils::resetAddress(_tree, _name, "tightId");
  utils::resetAddress(_tree, _name, "triggerIdLoose");
}

void
panda::Muon::datastore::resizeVectors_(UInt_t _size)
{
  Lepton::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Muon::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Muon::getListOfBranches().fullNames(_name);
}

panda::Muon::Muon(char const* _name/* = ""*/) :
  Lepton(new MuonArray(1, _name)),
  pfRelIso04_all(gStore.getData(this).pfRelIso04_all[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  ptErr(gStore.getData(this).ptErr[0]),
  segmentComp(gStore.getData(this).segmentComp[0]),
  nStations(gStore.getData(this).nStations[0]),
  nTrackerLayers(gStore.getData(this).nTrackerLayers[0]),
  highPtId(gStore.getData(this).highPtId[0]),
  miniIsoId(gStore.getData(this).miniIsoId[0]),
  multiIsoId(gStore.getData(this).multiIsoId[0]),
  mvaId(gStore.getData(this).mvaId[0]),
  pfIsoId(gStore.getData(this).pfIsoId[0]),
  tkIsoId(gStore.getData(this).tkIsoId[0]),
  inTimeMuon(gStore.getData(this).inTimeMuon[0]),
  isGlobal(gStore.getData(this).isGlobal[0]),
  isTracker(gStore.getData(this).isTracker[0]),
  looseId(gStore.getData(this).looseId[0]),
  mediumId(gStore.getData(this).mediumId[0]),
  mediumPromptId(gStore.getData(this).mediumPromptId[0]),
  softId(gStore.getData(this).softId[0]),
  softMvaId(gStore.getData(this).softMvaId[0]),
  tightId(gStore.getData(this).tightId[0]),
  triggerIdLoose(gStore.getData(this).triggerIdLoose[0])
{
}

panda::Muon::Muon(Muon const& _src) :
  Lepton(new MuonArray(1, _src.getName())),
  pfRelIso04_all(gStore.getData(this).pfRelIso04_all[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  ptErr(gStore.getData(this).ptErr[0]),
  segmentComp(gStore.getData(this).segmentComp[0]),
  nStations(gStore.getData(this).nStations[0]),
  nTrackerLayers(gStore.getData(this).nTrackerLayers[0]),
  highPtId(gStore.getData(this).highPtId[0]),
  miniIsoId(gStore.getData(this).miniIsoId[0]),
  multiIsoId(gStore.getData(this).multiIsoId[0]),
  mvaId(gStore.getData(this).mvaId[0]),
  pfIsoId(gStore.getData(this).pfIsoId[0]),
  tkIsoId(gStore.getData(this).tkIsoId[0]),
  inTimeMuon(gStore.getData(this).inTimeMuon[0]),
  isGlobal(gStore.getData(this).isGlobal[0]),
  isTracker(gStore.getData(this).isTracker[0]),
  looseId(gStore.getData(this).looseId[0]),
  mediumId(gStore.getData(this).mediumId[0]),
  mediumPromptId(gStore.getData(this).mediumPromptId[0]),
  softId(gStore.getData(this).softId[0]),
  softMvaId(gStore.getData(this).softMvaId[0]),
  tightId(gStore.getData(this).tightId[0]),
  triggerIdLoose(gStore.getData(this).triggerIdLoose[0])
{
  operator=(_src);
}

panda::Muon::Muon(datastore& _data, UInt_t _idx) :
  Lepton(_data, _idx),
  pfRelIso04_all(_data.pfRelIso04_all[_idx]),
  pfRelIso03_all(_data.pfRelIso03_all[_idx]),
  pfRelIso03_chg(_data.pfRelIso03_chg[_idx]),
  ptErr(_data.ptErr[_idx]),
  segmentComp(_data.segmentComp[_idx]),
  nStations(_data.nStations[_idx]),
  nTrackerLayers(_data.nTrackerLayers[_idx]),
  highPtId(_data.highPtId[_idx]),
  miniIsoId(_data.miniIsoId[_idx]),
  multiIsoId(_data.multiIsoId[_idx]),
  mvaId(_data.mvaId[_idx]),
  pfIsoId(_data.pfIsoId[_idx]),
  tkIsoId(_data.tkIsoId[_idx]),
  inTimeMuon(_data.inTimeMuon[_idx]),
  isGlobal(_data.isGlobal[_idx]),
  isTracker(_data.isTracker[_idx]),
  looseId(_data.looseId[_idx]),
  mediumId(_data.mediumId[_idx]),
  mediumPromptId(_data.mediumPromptId[_idx]),
  softId(_data.softId[_idx]),
  softMvaId(_data.softMvaId[_idx]),
  tightId(_data.tightId[_idx]),
  triggerIdLoose(_data.triggerIdLoose[_idx])
{
}

panda::Muon::Muon(ArrayBase* _array) :
  Lepton(_array),
  pfRelIso04_all(gStore.getData(this).pfRelIso04_all[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  ptErr(gStore.getData(this).ptErr[0]),
  segmentComp(gStore.getData(this).segmentComp[0]),
  nStations(gStore.getData(this).nStations[0]),
  nTrackerLayers(gStore.getData(this).nTrackerLayers[0]),
  highPtId(gStore.getData(this).highPtId[0]),
  miniIsoId(gStore.getData(this).miniIsoId[0]),
  multiIsoId(gStore.getData(this).multiIsoId[0]),
  mvaId(gStore.getData(this).mvaId[0]),
  pfIsoId(gStore.getData(this).pfIsoId[0]),
  tkIsoId(gStore.getData(this).tkIsoId[0]),
  inTimeMuon(gStore.getData(this).inTimeMuon[0]),
  isGlobal(gStore.getData(this).isGlobal[0]),
  isTracker(gStore.getData(this).isTracker[0]),
  looseId(gStore.getData(this).looseId[0]),
  mediumId(gStore.getData(this).mediumId[0]),
  mediumPromptId(gStore.getData(this).mediumPromptId[0]),
  softId(gStore.getData(this).softId[0]),
  softMvaId(gStore.getData(this).softMvaId[0]),
  tightId(gStore.getData(this).tightId[0]),
  triggerIdLoose(gStore.getData(this).triggerIdLoose[0])
{
}

panda::Muon::~Muon()
{
  destructor();
}

void
panda::Muon::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Muon.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Lepton::destructor(kTRUE);
}

panda::Muon&
panda::Muon::operator=(Muon const& _src)
{
  Lepton::operator=(_src);

  pfRelIso04_all = _src.pfRelIso04_all;
  pfRelIso03_all = _src.pfRelIso03_all;
  pfRelIso03_chg = _src.pfRelIso03_chg;
  ptErr = _src.ptErr;
  segmentComp = _src.segmentComp;
  nStations = _src.nStations;
  nTrackerLayers = _src.nTrackerLayers;
  highPtId = _src.highPtId;
  miniIsoId = _src.miniIsoId;
  multiIsoId = _src.multiIsoId;
  mvaId = _src.mvaId;
  pfIsoId = _src.pfIsoId;
  tkIsoId = _src.tkIsoId;
  inTimeMuon = _src.inTimeMuon;
  isGlobal = _src.isGlobal;
  isTracker = _src.isTracker;
  looseId = _src.looseId;
  mediumId = _src.mediumId;
  mediumPromptId = _src.mediumPromptId;
  softId = _src.softId;
  softMvaId = _src.softMvaId;
  tightId = _src.tightId;
  triggerIdLoose = _src.triggerIdLoose;

  /* BEGIN CUSTOM Muon.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Muon::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Lepton::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "pfRelIso04_all", "", 'F', &pfRelIso04_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_all", "", 'F', &pfRelIso03_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_chg", "", 'F', &pfRelIso03_chg, _branches);
  utils::book(_tree, _name, "ptErr", "", 'F', &ptErr, _branches);
  utils::book(_tree, _name, "segmentComp", "", 'F', &segmentComp, _branches);
  utils::book(_tree, _name, "nStations", "", 'I', &nStations, _branches);
  utils::book(_tree, _name, "nTrackerLayers", "", 'I', &nTrackerLayers, _branches);
  utils::book(_tree, _name, "highPtId", "", 'b', &highPtId, _branches);
  utils::book(_tree, _name, "miniIsoId", "", 'I', &miniIsoId, _branches);
  utils::book(_tree, _name, "multiIsoId", "", 'b', &multiIsoId, _branches);
  utils::book(_tree, _name, "mvaId", "", 'b', &mvaId, _branches);
  utils::book(_tree, _name, "pfIsoId", "", 'b', &pfIsoId, _branches);
  utils::book(_tree, _name, "tkIsoId", "", 'b', &tkIsoId, _branches);
  utils::book(_tree, _name, "inTimeMuon", "", 'O', &inTimeMuon, _branches);
  utils::book(_tree, _name, "isGlobal", "", 'O', &isGlobal, _branches);
  utils::book(_tree, _name, "isTracker", "", 'O', &isTracker, _branches);
  utils::book(_tree, _name, "looseId", "", 'O', &looseId, _branches);
  utils::book(_tree, _name, "mediumId", "", 'O', &mediumId, _branches);
  utils::book(_tree, _name, "mediumPromptId", "", 'O', &mediumPromptId, _branches);
  utils::book(_tree, _name, "softId", "", 'O', &softId, _branches);
  utils::book(_tree, _name, "softMvaId", "", 'O', &softMvaId, _branches);
  utils::book(_tree, _name, "tightId", "", 'O', &tightId, _branches);
  utils::book(_tree, _name, "triggerIdLoose", "", 'O', &triggerIdLoose, _branches);
}

void
panda::Muon::doInit_()
{
  Lepton::doInit_();

  pfRelIso04_all = 0.;
  pfRelIso03_all = 0.;
  pfRelIso03_chg = 0.;
  ptErr = 0.;
  segmentComp = 0.;
  nStations = 0;
  nTrackerLayers = 0;
  highPtId = 0;
  miniIsoId = 0;
  multiIsoId = 0;
  mvaId = 0;
  pfIsoId = 0;
  tkIsoId = 0;
  inTimeMuon = false;
  isGlobal = false;
  isTracker = false;
  looseId = false;
  mediumId = false;
  mediumPromptId = false;
  softId = false;
  softMvaId = false;
  tightId = false;
  triggerIdLoose = false;

  /* BEGIN CUSTOM Muon.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Muon::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Muon.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Muon::dump(std::ostream& _out/* = std::cout*/) const
{
  Lepton::dump(_out);

  _out << "pfRelIso04_all = " << pfRelIso04_all << std::endl;
  _out << "pfRelIso03_all = " << pfRelIso03_all << std::endl;
  _out << "pfRelIso03_chg = " << pfRelIso03_chg << std::endl;
  _out << "ptErr = " << ptErr << std::endl;
  _out << "segmentComp = " << segmentComp << std::endl;
  _out << "nStations = " << nStations << std::endl;
  _out << "nTrackerLayers = " << nTrackerLayers << std::endl;
  _out << "highPtId = " << static_cast<const UInt_t>(highPtId) << std::endl;
  _out << "miniIsoId = " << miniIsoId << std::endl;
  _out << "multiIsoId = " << static_cast<const UInt_t>(multiIsoId) << std::endl;
  _out << "mvaId = " << static_cast<const UInt_t>(mvaId) << std::endl;
  _out << "pfIsoId = " << static_cast<const UInt_t>(pfIsoId) << std::endl;
  _out << "tkIsoId = " << static_cast<const UInt_t>(tkIsoId) << std::endl;
  _out << "inTimeMuon = " << inTimeMuon << std::endl;
  _out << "isGlobal = " << isGlobal << std::endl;
  _out << "isTracker = " << isTracker << std::endl;
  _out << "looseId = " << looseId << std::endl;
  _out << "mediumId = " << mediumId << std::endl;
  _out << "mediumPromptId = " << mediumPromptId << std::endl;
  _out << "softId = " << softId << std::endl;
  _out << "softMvaId = " << softMvaId << std::endl;
  _out << "tightId = " << tightId << std::endl;
  _out << "triggerIdLoose = " << triggerIdLoose << std::endl;
}

/* BEGIN CUSTOM Muon.cc.global */
/* END CUSTOM */
