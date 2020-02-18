#include "../interface/Piles.h"

/*static*/
panda::utils::BranchList
panda::Piles::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"nTrueInt"};
  return blist;
}

panda::Piles::Piles(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::Piles::Piles(Piles const& _src) :
  Singlet(_src),
  nTrueInt(_src.nTrueInt)
{
  nTrueInt = _src.nTrueInt;
}

panda::Piles::~Piles()
{
}

panda::Piles&
panda::Piles::operator=(Piles const& _src)
{
  nTrueInt = _src.nTrueInt;

  /* BEGIN CUSTOM Piles.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Piles::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "nTrueInt", _branches);
}

panda::utils::BranchList
panda::Piles::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "nTrueInt"));

  return blist;
}

void
panda::Piles::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "nTrueInt", &nTrueInt, _branches, _setStatus);
}

void
panda::Piles::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "nTrueInt", "", 'F', &nTrueInt, _branches);
}

void
panda::Piles::doInit_()
{
  nTrueInt = 0.;

  /* BEGIN CUSTOM Piles.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::Piles::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::Piles::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Piles.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Piles::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "nTrueInt = " << nTrueInt << std::endl;
}

/* BEGIN CUSTOM Piles.cc.global */
/* END CUSTOM */
