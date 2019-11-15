#include "../interface/Event.h"

panda::Event::Event() :
  TreeEntry()
{
  std::vector<Object*> myObjects{{&Flag, &GenPart, &Electron, &Muon, &Jet, &Photon, &SV, &FatJet, &SubJet, &LHEPdfWeight, &LHEReweightingWeight, &LHEScaleWeight, &PSWeight, &PV, &GenMET, &CaloMET, &ChsMET, &MET, &PuppiMET, &RawMET, &TkMET, &HLT, &btagWeight}};
  objects_.insert(objects_.end(), myObjects.begin(), myObjects.end());
  std::vector<CollectionBase*> myCollections{{&GenPart, &Electron, &Muon, &Jet, &Photon, &SV, &FatJet, &SubJet, &LHEPdfWeight, &LHEReweightingWeight, &LHEScaleWeight, &PSWeight}};
  collections_.insert(collections_.end(), myCollections.begin(), myCollections.end());
  /* BEGIN CUSTOM Event.cc.ctor */
  /* END CUSTOM */
}

panda::Event::Event(Event const& _src) :
  TreeEntry(_src),
  Flag(_src.Flag),
  GenPart(_src.GenPart),
  Electron(_src.Electron),
  Muon(_src.Muon),
  Jet(_src.Jet),
  Photon(_src.Photon),
  SV(_src.SV),
  FatJet(_src.FatJet),
  SubJet(_src.SubJet),
  LHEPdfWeight(_src.LHEPdfWeight),
  LHEReweightingWeight(_src.LHEReweightingWeight),
  LHEScaleWeight(_src.LHEScaleWeight),
  PSWeight(_src.PSWeight),
  PV(_src.PV),
  GenMET(_src.GenMET),
  CaloMET(_src.CaloMET),
  ChsMET(_src.ChsMET),
  MET(_src.MET),
  PuppiMET(_src.PuppiMET),
  RawMET(_src.RawMET),
  TkMET(_src.TkMET),
  HLT(_src.HLT),
  btagWeight(_src.btagWeight),
  run(_src.run),
  luminosityBlock(_src.luminosityBlock),
  event(_src.event),
  fixedGridRhoFastjetAll(_src.fixedGridRhoFastjetAll),
  fixedGridRhoFastjetCentralCalo(_src.fixedGridRhoFastjetCentralCalo),
  fixedGridRhoFastjetCentralNeutral(_src.fixedGridRhoFastjetCentralNeutral),
  genWeight(_src.genWeight),
  LHEWeight_originalXWGTUP(_src.LHEWeight_originalXWGTUP)
{
  std::vector<Object*> myObjects{{&Flag, &GenPart, &Electron, &Muon, &Jet, &Photon, &SV, &FatJet, &SubJet, &LHEPdfWeight, &LHEReweightingWeight, &LHEScaleWeight, &PSWeight, &PV, &GenMET, &CaloMET, &ChsMET, &MET, &PuppiMET, &RawMET, &TkMET, &HLT, &btagWeight}};
  objects_.insert(objects_.end(), myObjects.begin(), myObjects.end());
  std::vector<CollectionBase*> myCollections{{&GenPart, &Electron, &Muon, &Jet, &Photon, &SV, &FatJet, &SubJet, &LHEPdfWeight, &LHEReweightingWeight, &LHEScaleWeight, &PSWeight}};
  collections_.insert(collections_.end(), myCollections.begin(), myCollections.end());

  /* BEGIN CUSTOM Event.cc.copy_ctor */
  /* END CUSTOM */
}

panda::Event::~Event()
{
  /* BEGIN CUSTOM Event.cc.dtor */
  /* END CUSTOM */
}

panda::Event&
panda::Event::operator=(Event const& _src)
{
  TreeEntry::operator=(_src);

  /* BEGIN CUSTOM Event.cc.operator= */
  /* END CUSTOM */

  run = _src.run;
  luminosityBlock = _src.luminosityBlock;
  event = _src.event;
  fixedGridRhoFastjetAll = _src.fixedGridRhoFastjetAll;
  fixedGridRhoFastjetCentralCalo = _src.fixedGridRhoFastjetCentralCalo;
  fixedGridRhoFastjetCentralNeutral = _src.fixedGridRhoFastjetCentralNeutral;
  genWeight = _src.genWeight;
  LHEWeight_originalXWGTUP = _src.LHEWeight_originalXWGTUP;

  Flag = _src.Flag;
  GenPart = _src.GenPart;
  Electron = _src.Electron;
  Muon = _src.Muon;
  Jet = _src.Jet;
  Photon = _src.Photon;
  SV = _src.SV;
  FatJet = _src.FatJet;
  SubJet = _src.SubJet;
  LHEPdfWeight = _src.LHEPdfWeight;
  LHEReweightingWeight = _src.LHEReweightingWeight;
  LHEScaleWeight = _src.LHEScaleWeight;
  PSWeight = _src.PSWeight;
  PV = _src.PV;
  GenMET = _src.GenMET;
  CaloMET = _src.CaloMET;
  ChsMET = _src.ChsMET;
  MET = _src.MET;
  PuppiMET = _src.PuppiMET;
  RawMET = _src.RawMET;
  TkMET = _src.TkMET;
  HLT = _src.HLT;
  btagWeight = _src.btagWeight;

  return *this;
}

void
panda::Event::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Event.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Event::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "run = " << run << std::endl;
  _out << "luminosityBlock = " << luminosityBlock << std::endl;
  _out << "event = " << event << std::endl;
  _out << "fixedGridRhoFastjetAll = " << fixedGridRhoFastjetAll << std::endl;
  _out << "fixedGridRhoFastjetCentralCalo = " << fixedGridRhoFastjetCentralCalo << std::endl;
  _out << "fixedGridRhoFastjetCentralNeutral = " << fixedGridRhoFastjetCentralNeutral << std::endl;
  _out << "genWeight = " << genWeight << std::endl;
  _out << "LHEWeight_originalXWGTUP = " << LHEWeight_originalXWGTUP << std::endl;

  Flag.dump(_out);
  GenPart.dump(_out);
  Electron.dump(_out);
  Muon.dump(_out);
  Jet.dump(_out);
  Photon.dump(_out);
  SV.dump(_out);
  FatJet.dump(_out);
  SubJet.dump(_out);
  LHEPdfWeight.dump(_out);
  LHEReweightingWeight.dump(_out);
  LHEScaleWeight.dump(_out);
  PSWeight.dump(_out);
  PV.dump(_out);
  GenMET.dump(_out);
  CaloMET.dump(_out);
  ChsMET.dump(_out);
  MET.dump(_out);
  PuppiMET.dump(_out);
  RawMET.dump(_out);
  TkMET.dump(_out);
  HLT.dump(_out);
  btagWeight.dump(_out);

}
/*static*/
panda::utils::BranchList
panda::Event::getListOfBranches(Bool_t _direct/* = kFALSE*/)
{
  utils::BranchList blist;
  blist += {"run", "luminosityBlock", "event", "fixedGridRhoFastjetAll", "fixedGridRhoFastjetCentralCalo", "fixedGridRhoFastjetCentralNeutral", "genWeight", "LHEWeight_originalXWGTUP"};
  if (!_direct) {
    blist += Flags::getListOfBranches().fullNames("Flag");
    blist += GenPart::getListOfBranches().fullNames("GenPart");
    blist += Electron::getListOfBranches().fullNames("Electron");
    blist += Muon::getListOfBranches().fullNames("Muon");
    blist += Jet::getListOfBranches().fullNames("Jet");
    blist += Photon::getListOfBranches().fullNames("Photon");
    blist += SecondaryVertex::getListOfBranches().fullNames("SV");
    blist += FatJet::getListOfBranches().fullNames("FatJet");
    blist += SubJet::getListOfBranches().fullNames("SubJet");
    blist += Weight::getListOfBranches().fullNames("LHEPdfWeight");
    blist += Weight::getListOfBranches().fullNames("LHEReweightingWeight");
    blist += Weight::getListOfBranches().fullNames("LHEScaleWeight");
    blist += Weight::getListOfBranches().fullNames("PSWeight");
    blist += PrimaryVertex::getListOfBranches().fullNames("PV");
    blist += Met::getListOfBranches().fullNames("GenMET");
    blist += RecoMet::getListOfBranches().fullNames("CaloMET");
    blist += RecoMet::getListOfBranches().fullNames("ChsMET");
    blist += RecoMet::getListOfBranches().fullNames("MET");
    blist += RecoMet::getListOfBranches().fullNames("PuppiMET");
    blist += RecoMet::getListOfBranches().fullNames("RawMET");
    blist += RecoMet::getListOfBranches().fullNames("TkMET");
    blist += Triggers::getListOfBranches().fullNames("HLT");
    blist += BReweight::getListOfBranches().fullNames("btagWeight");
  }
  /* BEGIN CUSTOM Event.cc.getListOfBranches_ */
  /* END CUSTOM */
  return blist;
}

/*protected*/
void
panda::Event::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, "", "run", _branches);
  utils::setStatus(_tree, "", "luminosityBlock", _branches);
  utils::setStatus(_tree, "", "event", _branches);
  utils::setStatus(_tree, "", "fixedGridRhoFastjetAll", _branches);
  utils::setStatus(_tree, "", "fixedGridRhoFastjetCentralCalo", _branches);
  utils::setStatus(_tree, "", "fixedGridRhoFastjetCentralNeutral", _branches);
  utils::setStatus(_tree, "", "genWeight", _branches);
  utils::setStatus(_tree, "", "LHEWeight_originalXWGTUP", _branches);
}

/*protected*/
panda::utils::BranchList
panda::Event::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, "", "run"));
  blist.push_back(utils::getStatus(_tree, "", "luminosityBlock"));
  blist.push_back(utils::getStatus(_tree, "", "event"));
  blist.push_back(utils::getStatus(_tree, "", "fixedGridRhoFastjetAll"));
  blist.push_back(utils::getStatus(_tree, "", "fixedGridRhoFastjetCentralCalo"));
  blist.push_back(utils::getStatus(_tree, "", "fixedGridRhoFastjetCentralNeutral"));
  blist.push_back(utils::getStatus(_tree, "", "genWeight"));
  blist.push_back(utils::getStatus(_tree, "", "LHEWeight_originalXWGTUP"));
  return blist;
}

/*protected*/
panda::utils::BranchList
panda::Event::doGetBranchNames_() const
{
  return getListOfBranches(true);
}

/*protected*/
void
panda::Event::doSetAddress_(TTree& _tree, utils::BranchList const& _branches, Bool_t _setStatus)
{
  utils::setAddress(_tree, "", "run", &run, _branches, _setStatus);
  utils::setAddress(_tree, "", "luminosityBlock", &luminosityBlock, _branches, _setStatus);
  utils::setAddress(_tree, "", "event", &event, _branches, _setStatus);
  utils::setAddress(_tree, "", "fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, _branches, _setStatus);
  utils::setAddress(_tree, "", "fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, _branches, _setStatus);
  utils::setAddress(_tree, "", "fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, _branches, _setStatus);
  utils::setAddress(_tree, "", "genWeight", &genWeight, _branches, _setStatus);
  utils::setAddress(_tree, "", "LHEWeight_originalXWGTUP", &LHEWeight_originalXWGTUP, _branches, _setStatus);
}

/*protected*/
void
panda::Event::doBook_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::book(_tree, "", "run", "", 'i', &run, _branches);
  utils::book(_tree, "", "luminosityBlock", "", 'i', &luminosityBlock, _branches);
  utils::book(_tree, "", "event", "", 'l', &event, _branches);
  utils::book(_tree, "", "fixedGridRhoFastjetAll", "", 'F', &fixedGridRhoFastjetAll, _branches);
  utils::book(_tree, "", "fixedGridRhoFastjetCentralCalo", "", 'F', &fixedGridRhoFastjetCentralCalo, _branches);
  utils::book(_tree, "", "fixedGridRhoFastjetCentralNeutral", "", 'F', &fixedGridRhoFastjetCentralNeutral, _branches);
  utils::book(_tree, "", "genWeight", "", 'F', &genWeight, _branches);
  utils::book(_tree, "", "LHEWeight_originalXWGTUP", "", 'F', &LHEWeight_originalXWGTUP, _branches);
}

/*protected*/
void
panda::Event::doGetEntry_(TTree& _tree)
{
  /* BEGIN CUSTOM Event.cc.doGetEntry_ */
  /* END CUSTOM */
}

void
panda::Event::doInit_()
{
  run = 0;
  luminosityBlock = 0;
  event = 0;
  fixedGridRhoFastjetAll = 0.;
  fixedGridRhoFastjetCentralCalo = 0.;
  fixedGridRhoFastjetCentralNeutral = 0.;
  genWeight = 0.;
  LHEWeight_originalXWGTUP = 0.;
  /* BEGIN CUSTOM Event.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Event::doUnlink_(TTree& _tree)
{
  /* BEGIN CUSTOM Event.cc.doUnlink_ */
  /* END CUSTOM */
}


/* BEGIN CUSTOM Event.cc.global */
/* END CUSTOM */
