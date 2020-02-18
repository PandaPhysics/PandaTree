#include "../interface/RecoMet.h"

/*static*/
panda::utils::BranchList
panda::RecoMet::getListOfBranches()
{
  utils::BranchList blist;
  blist += Met::getListOfBranches();
  blist += {"sumEt", "significance"};
  return blist;
}

panda::RecoMet::RecoMet(char const* _name/* = ""*/) :
  Met(_name)
{
}

panda::RecoMet::RecoMet(RecoMet const& _src) :
  Met(_src),
  sumEt(_src.sumEt),
  significance(_src.significance)
{
  sumEt = _src.sumEt;
  significance = _src.significance;
}

panda::RecoMet::~RecoMet()
{
}

panda::RecoMet&
panda::RecoMet::operator=(RecoMet const& _src)
{
  Met::operator=(_src);

  sumEt = _src.sumEt;
  significance = _src.significance;

  /* BEGIN CUSTOM RecoMet.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::RecoMet::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  Met::doSetStatus_(_tree, _branches);

  utils::setStatus(_tree, name_, "sumEt", _branches);
  utils::setStatus(_tree, name_, "significance", _branches);
}

panda::utils::BranchList
panda::RecoMet::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist(Met::doGetStatus_(_tree));

  blist.push_back(utils::getStatus(_tree, name_, "sumEt"));
  blist.push_back(utils::getStatus(_tree, name_, "significance"));

  return blist;
}

void
panda::RecoMet::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Met::doSetAddress_(_tree, _branches, _setStatus);

  utils::setAddress(_tree, name_, "sumEt", &sumEt, _branches, _setStatus);
  utils::setAddress(_tree, name_, "significance", &significance, _branches, _setStatus);
}

void
panda::RecoMet::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  Met::doBook_(_tree, _branches);

  utils::book(_tree, name_, "sumEt", "", 'F', &sumEt, _branches);
  utils::book(_tree, name_, "significance", "", 'F', &significance, _branches);
}

void
panda::RecoMet::doInit_()
{
  Met::doInit_();

  sumEt = 0.;
  significance = 0.;

  /* BEGIN CUSTOM RecoMet.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::RecoMet::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::RecoMet::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM RecoMet.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::RecoMet::dump(std::ostream& _out/* = std::cout*/) const
{
  Met::dump(_out);

  _out << "sumEt = " << sumEt << std::endl;
  _out << "significance = " << significance << std::endl;
}

/* BEGIN CUSTOM RecoMet.cc.global */
/* END CUSTOM */
