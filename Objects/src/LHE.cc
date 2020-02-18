#include "../interface/LHE.h"

/*static*/
panda::utils::BranchList
panda::LHE::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"HT", "Vpt", "Njets"};
  return blist;
}

panda::LHE::LHE(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::LHE::LHE(LHE const& _src) :
  Singlet(_src),
  HT(_src.HT),
  Vpt(_src.Vpt),
  Njets(_src.Njets)
{
  HT = _src.HT;
  Vpt = _src.Vpt;
  Njets = _src.Njets;
}

panda::LHE::~LHE()
{
}

panda::LHE&
panda::LHE::operator=(LHE const& _src)
{
  HT = _src.HT;
  Vpt = _src.Vpt;
  Njets = _src.Njets;

  /* BEGIN CUSTOM LHE.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::LHE::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "HT", _branches);
  utils::setStatus(_tree, name_, "Vpt", _branches);
  utils::setStatus(_tree, name_, "Njets", _branches);
}

panda::utils::BranchList
panda::LHE::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "HT"));
  blist.push_back(utils::getStatus(_tree, name_, "Vpt"));
  blist.push_back(utils::getStatus(_tree, name_, "Njets"));

  return blist;
}

void
panda::LHE::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "HT", &HT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Vpt", &Vpt, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Njets", &Njets, _branches, _setStatus);
}

void
panda::LHE::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "HT", "", 'F', &HT, _branches);
  utils::book(_tree, name_, "Vpt", "", 'F', &Vpt, _branches);
  utils::book(_tree, name_, "Njets", "", 'I', &Njets, _branches);
}

void
panda::LHE::doInit_()
{
  HT = 0.;
  Vpt = 0.;
  Njets = 0;

  /* BEGIN CUSTOM LHE.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::LHE::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::LHE::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM LHE.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::LHE::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "HT = " << HT << std::endl;
  _out << "Vpt = " << Vpt << std::endl;
  _out << "Njets = " << Njets << std::endl;
}

/* BEGIN CUSTOM LHE.cc.global */
/* END CUSTOM */
