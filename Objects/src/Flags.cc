#include "../interface/Flags.h"

/*static*/
panda::utils::BranchList
panda::Flags::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"HBHENoiseFilter", "HBHENoiseIsoFilter", "CSCTightHaloFilter", "CSCTightHaloTrkMuUnvetoFilter", "CSCTightHalo2015Filter", "globalTightHalo2016Filter", "globalSuperTightHalo2016Filter", "HcalStripHaloFilter", "hcalLaserEventFilter", "EcalDeadCellTriggerPrimitiveFilter", "EcalDeadCellBoundaryEnergyFilter", "ecalBadCalibFilter", "goodVertices", "eeBadScFilter", "ecalLaserCorrFilter", "trkPOGFilters", "chargedHadronTrackResolutionFilter", "muonBadTrackFilter", "BadChargedCandidateFilter", "BadPFMuonFilter", "BadChargedCandidateSummer16Filter", "BadPFMuonSummer16Filter", "trkPOG_manystripclus53X", "trkPOG_toomanystripclus53X", "trkPOG_logErrorTooManyClusters", "METFilters", "ecalBadCalibFilterV2"};
  return blist;
}

panda::Flags::Flags(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::Flags::Flags(Flags const& _src) :
  Singlet(_src),
  HBHENoiseFilter(_src.HBHENoiseFilter),
  HBHENoiseIsoFilter(_src.HBHENoiseIsoFilter),
  CSCTightHaloFilter(_src.CSCTightHaloFilter),
  CSCTightHaloTrkMuUnvetoFilter(_src.CSCTightHaloTrkMuUnvetoFilter),
  CSCTightHalo2015Filter(_src.CSCTightHalo2015Filter),
  globalTightHalo2016Filter(_src.globalTightHalo2016Filter),
  globalSuperTightHalo2016Filter(_src.globalSuperTightHalo2016Filter),
  HcalStripHaloFilter(_src.HcalStripHaloFilter),
  hcalLaserEventFilter(_src.hcalLaserEventFilter),
  EcalDeadCellTriggerPrimitiveFilter(_src.EcalDeadCellTriggerPrimitiveFilter),
  EcalDeadCellBoundaryEnergyFilter(_src.EcalDeadCellBoundaryEnergyFilter),
  ecalBadCalibFilter(_src.ecalBadCalibFilter),
  goodVertices(_src.goodVertices),
  eeBadScFilter(_src.eeBadScFilter),
  ecalLaserCorrFilter(_src.ecalLaserCorrFilter),
  trkPOGFilters(_src.trkPOGFilters),
  chargedHadronTrackResolutionFilter(_src.chargedHadronTrackResolutionFilter),
  muonBadTrackFilter(_src.muonBadTrackFilter),
  BadChargedCandidateFilter(_src.BadChargedCandidateFilter),
  BadPFMuonFilter(_src.BadPFMuonFilter),
  BadChargedCandidateSummer16Filter(_src.BadChargedCandidateSummer16Filter),
  BadPFMuonSummer16Filter(_src.BadPFMuonSummer16Filter),
  trkPOG_manystripclus53X(_src.trkPOG_manystripclus53X),
  trkPOG_toomanystripclus53X(_src.trkPOG_toomanystripclus53X),
  trkPOG_logErrorTooManyClusters(_src.trkPOG_logErrorTooManyClusters),
  METFilters(_src.METFilters),
  ecalBadCalibFilterV2(_src.ecalBadCalibFilterV2)
{
  HBHENoiseFilter = _src.HBHENoiseFilter;
  HBHENoiseIsoFilter = _src.HBHENoiseIsoFilter;
  CSCTightHaloFilter = _src.CSCTightHaloFilter;
  CSCTightHaloTrkMuUnvetoFilter = _src.CSCTightHaloTrkMuUnvetoFilter;
  CSCTightHalo2015Filter = _src.CSCTightHalo2015Filter;
  globalTightHalo2016Filter = _src.globalTightHalo2016Filter;
  globalSuperTightHalo2016Filter = _src.globalSuperTightHalo2016Filter;
  HcalStripHaloFilter = _src.HcalStripHaloFilter;
  hcalLaserEventFilter = _src.hcalLaserEventFilter;
  EcalDeadCellTriggerPrimitiveFilter = _src.EcalDeadCellTriggerPrimitiveFilter;
  EcalDeadCellBoundaryEnergyFilter = _src.EcalDeadCellBoundaryEnergyFilter;
  ecalBadCalibFilter = _src.ecalBadCalibFilter;
  goodVertices = _src.goodVertices;
  eeBadScFilter = _src.eeBadScFilter;
  ecalLaserCorrFilter = _src.ecalLaserCorrFilter;
  trkPOGFilters = _src.trkPOGFilters;
  chargedHadronTrackResolutionFilter = _src.chargedHadronTrackResolutionFilter;
  muonBadTrackFilter = _src.muonBadTrackFilter;
  BadChargedCandidateFilter = _src.BadChargedCandidateFilter;
  BadPFMuonFilter = _src.BadPFMuonFilter;
  BadChargedCandidateSummer16Filter = _src.BadChargedCandidateSummer16Filter;
  BadPFMuonSummer16Filter = _src.BadPFMuonSummer16Filter;
  trkPOG_manystripclus53X = _src.trkPOG_manystripclus53X;
  trkPOG_toomanystripclus53X = _src.trkPOG_toomanystripclus53X;
  trkPOG_logErrorTooManyClusters = _src.trkPOG_logErrorTooManyClusters;
  METFilters = _src.METFilters;
  ecalBadCalibFilterV2 = _src.ecalBadCalibFilterV2;
}

panda::Flags::~Flags()
{
}

panda::Flags&
panda::Flags::operator=(Flags const& _src)
{
  HBHENoiseFilter = _src.HBHENoiseFilter;
  HBHENoiseIsoFilter = _src.HBHENoiseIsoFilter;
  CSCTightHaloFilter = _src.CSCTightHaloFilter;
  CSCTightHaloTrkMuUnvetoFilter = _src.CSCTightHaloTrkMuUnvetoFilter;
  CSCTightHalo2015Filter = _src.CSCTightHalo2015Filter;
  globalTightHalo2016Filter = _src.globalTightHalo2016Filter;
  globalSuperTightHalo2016Filter = _src.globalSuperTightHalo2016Filter;
  HcalStripHaloFilter = _src.HcalStripHaloFilter;
  hcalLaserEventFilter = _src.hcalLaserEventFilter;
  EcalDeadCellTriggerPrimitiveFilter = _src.EcalDeadCellTriggerPrimitiveFilter;
  EcalDeadCellBoundaryEnergyFilter = _src.EcalDeadCellBoundaryEnergyFilter;
  ecalBadCalibFilter = _src.ecalBadCalibFilter;
  goodVertices = _src.goodVertices;
  eeBadScFilter = _src.eeBadScFilter;
  ecalLaserCorrFilter = _src.ecalLaserCorrFilter;
  trkPOGFilters = _src.trkPOGFilters;
  chargedHadronTrackResolutionFilter = _src.chargedHadronTrackResolutionFilter;
  muonBadTrackFilter = _src.muonBadTrackFilter;
  BadChargedCandidateFilter = _src.BadChargedCandidateFilter;
  BadPFMuonFilter = _src.BadPFMuonFilter;
  BadChargedCandidateSummer16Filter = _src.BadChargedCandidateSummer16Filter;
  BadPFMuonSummer16Filter = _src.BadPFMuonSummer16Filter;
  trkPOG_manystripclus53X = _src.trkPOG_manystripclus53X;
  trkPOG_toomanystripclus53X = _src.trkPOG_toomanystripclus53X;
  trkPOG_logErrorTooManyClusters = _src.trkPOG_logErrorTooManyClusters;
  METFilters = _src.METFilters;
  ecalBadCalibFilterV2 = _src.ecalBadCalibFilterV2;

  /* BEGIN CUSTOM Flags.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Flags::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "HBHENoiseFilter", _branches);
  utils::setStatus(_tree, name_, "HBHENoiseIsoFilter", _branches);
  utils::setStatus(_tree, name_, "CSCTightHaloFilter", _branches);
  utils::setStatus(_tree, name_, "CSCTightHaloTrkMuUnvetoFilter", _branches);
  utils::setStatus(_tree, name_, "CSCTightHalo2015Filter", _branches);
  utils::setStatus(_tree, name_, "globalTightHalo2016Filter", _branches);
  utils::setStatus(_tree, name_, "globalSuperTightHalo2016Filter", _branches);
  utils::setStatus(_tree, name_, "HcalStripHaloFilter", _branches);
  utils::setStatus(_tree, name_, "hcalLaserEventFilter", _branches);
  utils::setStatus(_tree, name_, "EcalDeadCellTriggerPrimitiveFilter", _branches);
  utils::setStatus(_tree, name_, "EcalDeadCellBoundaryEnergyFilter", _branches);
  utils::setStatus(_tree, name_, "ecalBadCalibFilter", _branches);
  utils::setStatus(_tree, name_, "goodVertices", _branches);
  utils::setStatus(_tree, name_, "eeBadScFilter", _branches);
  utils::setStatus(_tree, name_, "ecalLaserCorrFilter", _branches);
  utils::setStatus(_tree, name_, "trkPOGFilters", _branches);
  utils::setStatus(_tree, name_, "chargedHadronTrackResolutionFilter", _branches);
  utils::setStatus(_tree, name_, "muonBadTrackFilter", _branches);
  utils::setStatus(_tree, name_, "BadChargedCandidateFilter", _branches);
  utils::setStatus(_tree, name_, "BadPFMuonFilter", _branches);
  utils::setStatus(_tree, name_, "BadChargedCandidateSummer16Filter", _branches);
  utils::setStatus(_tree, name_, "BadPFMuonSummer16Filter", _branches);
  utils::setStatus(_tree, name_, "trkPOG_manystripclus53X", _branches);
  utils::setStatus(_tree, name_, "trkPOG_toomanystripclus53X", _branches);
  utils::setStatus(_tree, name_, "trkPOG_logErrorTooManyClusters", _branches);
  utils::setStatus(_tree, name_, "METFilters", _branches);
  utils::setStatus(_tree, name_, "ecalBadCalibFilterV2", _branches);
}

panda::utils::BranchList
panda::Flags::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "HBHENoiseFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "HBHENoiseIsoFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "CSCTightHaloFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "CSCTightHaloTrkMuUnvetoFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "CSCTightHalo2015Filter"));
  blist.push_back(utils::getStatus(_tree, name_, "globalTightHalo2016Filter"));
  blist.push_back(utils::getStatus(_tree, name_, "globalSuperTightHalo2016Filter"));
  blist.push_back(utils::getStatus(_tree, name_, "HcalStripHaloFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "hcalLaserEventFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "EcalDeadCellTriggerPrimitiveFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "EcalDeadCellBoundaryEnergyFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "ecalBadCalibFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "goodVertices"));
  blist.push_back(utils::getStatus(_tree, name_, "eeBadScFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "ecalLaserCorrFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "trkPOGFilters"));
  blist.push_back(utils::getStatus(_tree, name_, "chargedHadronTrackResolutionFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "muonBadTrackFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "BadChargedCandidateFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "BadPFMuonFilter"));
  blist.push_back(utils::getStatus(_tree, name_, "BadChargedCandidateSummer16Filter"));
  blist.push_back(utils::getStatus(_tree, name_, "BadPFMuonSummer16Filter"));
  blist.push_back(utils::getStatus(_tree, name_, "trkPOG_manystripclus53X"));
  blist.push_back(utils::getStatus(_tree, name_, "trkPOG_toomanystripclus53X"));
  blist.push_back(utils::getStatus(_tree, name_, "trkPOG_logErrorTooManyClusters"));
  blist.push_back(utils::getStatus(_tree, name_, "METFilters"));
  blist.push_back(utils::getStatus(_tree, name_, "ecalBadCalibFilterV2"));

  return blist;
}

void
panda::Flags::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "HBHENoiseFilter", &HBHENoiseFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HBHENoiseIsoFilter", &HBHENoiseIsoFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CSCTightHaloFilter", &CSCTightHaloFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CSCTightHaloTrkMuUnvetoFilter", &CSCTightHaloTrkMuUnvetoFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CSCTightHalo2015Filter", &CSCTightHalo2015Filter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "globalTightHalo2016Filter", &globalTightHalo2016Filter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "globalSuperTightHalo2016Filter", &globalSuperTightHalo2016Filter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HcalStripHaloFilter", &HcalStripHaloFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "hcalLaserEventFilter", &hcalLaserEventFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "EcalDeadCellTriggerPrimitiveFilter", &EcalDeadCellTriggerPrimitiveFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "EcalDeadCellBoundaryEnergyFilter", &EcalDeadCellBoundaryEnergyFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ecalBadCalibFilter", &ecalBadCalibFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "goodVertices", &goodVertices, _branches, _setStatus);
  utils::setAddress(_tree, name_, "eeBadScFilter", &eeBadScFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ecalLaserCorrFilter", &ecalLaserCorrFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "trkPOGFilters", &trkPOGFilters, _branches, _setStatus);
  utils::setAddress(_tree, name_, "chargedHadronTrackResolutionFilter", &chargedHadronTrackResolutionFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "muonBadTrackFilter", &muonBadTrackFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BadChargedCandidateFilter", &BadChargedCandidateFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BadPFMuonFilter", &BadPFMuonFilter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BadChargedCandidateSummer16Filter", &BadChargedCandidateSummer16Filter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BadPFMuonSummer16Filter", &BadPFMuonSummer16Filter, _branches, _setStatus);
  utils::setAddress(_tree, name_, "trkPOG_manystripclus53X", &trkPOG_manystripclus53X, _branches, _setStatus);
  utils::setAddress(_tree, name_, "trkPOG_toomanystripclus53X", &trkPOG_toomanystripclus53X, _branches, _setStatus);
  utils::setAddress(_tree, name_, "trkPOG_logErrorTooManyClusters", &trkPOG_logErrorTooManyClusters, _branches, _setStatus);
  utils::setAddress(_tree, name_, "METFilters", &METFilters, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ecalBadCalibFilterV2", &ecalBadCalibFilterV2, _branches, _setStatus);
}

void
panda::Flags::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "HBHENoiseFilter", "", 'O', &HBHENoiseFilter, _branches);
  utils::book(_tree, name_, "HBHENoiseIsoFilter", "", 'O', &HBHENoiseIsoFilter, _branches);
  utils::book(_tree, name_, "CSCTightHaloFilter", "", 'O', &CSCTightHaloFilter, _branches);
  utils::book(_tree, name_, "CSCTightHaloTrkMuUnvetoFilter", "", 'O', &CSCTightHaloTrkMuUnvetoFilter, _branches);
  utils::book(_tree, name_, "CSCTightHalo2015Filter", "", 'O', &CSCTightHalo2015Filter, _branches);
  utils::book(_tree, name_, "globalTightHalo2016Filter", "", 'O', &globalTightHalo2016Filter, _branches);
  utils::book(_tree, name_, "globalSuperTightHalo2016Filter", "", 'O', &globalSuperTightHalo2016Filter, _branches);
  utils::book(_tree, name_, "HcalStripHaloFilter", "", 'O', &HcalStripHaloFilter, _branches);
  utils::book(_tree, name_, "hcalLaserEventFilter", "", 'O', &hcalLaserEventFilter, _branches);
  utils::book(_tree, name_, "EcalDeadCellTriggerPrimitiveFilter", "", 'O', &EcalDeadCellTriggerPrimitiveFilter, _branches);
  utils::book(_tree, name_, "EcalDeadCellBoundaryEnergyFilter", "", 'O', &EcalDeadCellBoundaryEnergyFilter, _branches);
  utils::book(_tree, name_, "ecalBadCalibFilter", "", 'O', &ecalBadCalibFilter, _branches);
  utils::book(_tree, name_, "goodVertices", "", 'O', &goodVertices, _branches);
  utils::book(_tree, name_, "eeBadScFilter", "", 'O', &eeBadScFilter, _branches);
  utils::book(_tree, name_, "ecalLaserCorrFilter", "", 'O', &ecalLaserCorrFilter, _branches);
  utils::book(_tree, name_, "trkPOGFilters", "", 'O', &trkPOGFilters, _branches);
  utils::book(_tree, name_, "chargedHadronTrackResolutionFilter", "", 'O', &chargedHadronTrackResolutionFilter, _branches);
  utils::book(_tree, name_, "muonBadTrackFilter", "", 'O', &muonBadTrackFilter, _branches);
  utils::book(_tree, name_, "BadChargedCandidateFilter", "", 'O', &BadChargedCandidateFilter, _branches);
  utils::book(_tree, name_, "BadPFMuonFilter", "", 'O', &BadPFMuonFilter, _branches);
  utils::book(_tree, name_, "BadChargedCandidateSummer16Filter", "", 'O', &BadChargedCandidateSummer16Filter, _branches);
  utils::book(_tree, name_, "BadPFMuonSummer16Filter", "", 'O', &BadPFMuonSummer16Filter, _branches);
  utils::book(_tree, name_, "trkPOG_manystripclus53X", "", 'O', &trkPOG_manystripclus53X, _branches);
  utils::book(_tree, name_, "trkPOG_toomanystripclus53X", "", 'O', &trkPOG_toomanystripclus53X, _branches);
  utils::book(_tree, name_, "trkPOG_logErrorTooManyClusters", "", 'O', &trkPOG_logErrorTooManyClusters, _branches);
  utils::book(_tree, name_, "METFilters", "", 'O', &METFilters, _branches);
  utils::book(_tree, name_, "ecalBadCalibFilterV2", "", 'O', &ecalBadCalibFilterV2, _branches);
}

void
panda::Flags::doInit_()
{
  HBHENoiseFilter = false;
  HBHENoiseIsoFilter = false;
  CSCTightHaloFilter = false;
  CSCTightHaloTrkMuUnvetoFilter = false;
  CSCTightHalo2015Filter = false;
  globalTightHalo2016Filter = false;
  globalSuperTightHalo2016Filter = false;
  HcalStripHaloFilter = false;
  hcalLaserEventFilter = false;
  EcalDeadCellTriggerPrimitiveFilter = false;
  EcalDeadCellBoundaryEnergyFilter = false;
  ecalBadCalibFilter = false;
  goodVertices = false;
  eeBadScFilter = false;
  ecalLaserCorrFilter = false;
  trkPOGFilters = false;
  chargedHadronTrackResolutionFilter = false;
  muonBadTrackFilter = false;
  BadChargedCandidateFilter = false;
  BadPFMuonFilter = false;
  BadChargedCandidateSummer16Filter = false;
  BadPFMuonSummer16Filter = false;
  trkPOG_manystripclus53X = false;
  trkPOG_toomanystripclus53X = false;
  trkPOG_logErrorTooManyClusters = false;
  METFilters = false;
  ecalBadCalibFilterV2 = false;

  /* BEGIN CUSTOM Flags.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::Flags::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::Flags::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Flags.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Flags::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "HBHENoiseFilter = " << HBHENoiseFilter << std::endl;
  _out << "HBHENoiseIsoFilter = " << HBHENoiseIsoFilter << std::endl;
  _out << "CSCTightHaloFilter = " << CSCTightHaloFilter << std::endl;
  _out << "CSCTightHaloTrkMuUnvetoFilter = " << CSCTightHaloTrkMuUnvetoFilter << std::endl;
  _out << "CSCTightHalo2015Filter = " << CSCTightHalo2015Filter << std::endl;
  _out << "globalTightHalo2016Filter = " << globalTightHalo2016Filter << std::endl;
  _out << "globalSuperTightHalo2016Filter = " << globalSuperTightHalo2016Filter << std::endl;
  _out << "HcalStripHaloFilter = " << HcalStripHaloFilter << std::endl;
  _out << "hcalLaserEventFilter = " << hcalLaserEventFilter << std::endl;
  _out << "EcalDeadCellTriggerPrimitiveFilter = " << EcalDeadCellTriggerPrimitiveFilter << std::endl;
  _out << "EcalDeadCellBoundaryEnergyFilter = " << EcalDeadCellBoundaryEnergyFilter << std::endl;
  _out << "ecalBadCalibFilter = " << ecalBadCalibFilter << std::endl;
  _out << "goodVertices = " << goodVertices << std::endl;
  _out << "eeBadScFilter = " << eeBadScFilter << std::endl;
  _out << "ecalLaserCorrFilter = " << ecalLaserCorrFilter << std::endl;
  _out << "trkPOGFilters = " << trkPOGFilters << std::endl;
  _out << "chargedHadronTrackResolutionFilter = " << chargedHadronTrackResolutionFilter << std::endl;
  _out << "muonBadTrackFilter = " << muonBadTrackFilter << std::endl;
  _out << "BadChargedCandidateFilter = " << BadChargedCandidateFilter << std::endl;
  _out << "BadPFMuonFilter = " << BadPFMuonFilter << std::endl;
  _out << "BadChargedCandidateSummer16Filter = " << BadChargedCandidateSummer16Filter << std::endl;
  _out << "BadPFMuonSummer16Filter = " << BadPFMuonSummer16Filter << std::endl;
  _out << "trkPOG_manystripclus53X = " << trkPOG_manystripclus53X << std::endl;
  _out << "trkPOG_toomanystripclus53X = " << trkPOG_toomanystripclus53X << std::endl;
  _out << "trkPOG_logErrorTooManyClusters = " << trkPOG_logErrorTooManyClusters << std::endl;
  _out << "METFilters = " << METFilters << std::endl;
  _out << "ecalBadCalibFilterV2 = " << ecalBadCalibFilterV2 << std::endl;
}

/* BEGIN CUSTOM Flags.cc.global */
/* END CUSTOM */
