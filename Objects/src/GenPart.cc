#include "../interface/GenPart.h"

/*static*/
panda::utils::BranchList
panda::GenPart::getListOfBranches()
{
  utils::BranchList blist;
  blist += Particle::getListOfBranches();
  blist += {"pdgId", "status", "statusFlags", "genPartFlav", "genPartIdxMother"};
  return blist;
}

void
panda::GenPart::datastore::allocate(UInt_t _nmax)
{
  Particle::datastore::allocate(_nmax);

  pdgId = new Int_t[nmax_];
  status = new Int_t[nmax_];
  statusFlags = new Int_t[nmax_];
  genPartFlav = new UChar_t[nmax_];
  genPartIdxMother = new Int_t[nmax_];
}

void
panda::GenPart::datastore::deallocate()
{
  Particle::datastore::deallocate();

  delete [] pdgId;
  pdgId = 0;
  delete [] status;
  status = 0;
  delete [] statusFlags;
  statusFlags = 0;
  delete [] genPartFlav;
  genPartFlav = 0;
  delete [] genPartIdxMother;
  genPartIdxMother = 0;
}

void
panda::GenPart::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Particle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "pdgId", _branches);
  utils::setStatus(_tree, _name, "status", _branches);
  utils::setStatus(_tree, _name, "statusFlags", _branches);
  utils::setStatus(_tree, _name, "genPartFlav", _branches);
  utils::setStatus(_tree, _name, "genPartIdxMother", _branches);
}

panda::utils::BranchList
panda::GenPart::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Particle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "pdgId"));
  blist.push_back(utils::getStatus(_tree, _name, "status"));
  blist.push_back(utils::getStatus(_tree, _name, "statusFlags"));
  blist.push_back(utils::getStatus(_tree, _name, "genPartFlav"));
  blist.push_back(utils::getStatus(_tree, _name, "genPartIdxMother"));

  return blist;
}

void
panda::GenPart::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Particle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "pdgId", pdgId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "status", status, _branches, _setStatus);
  utils::setAddress(_tree, _name, "statusFlags", statusFlags, _branches, _setStatus);
  utils::setAddress(_tree, _name, "genPartFlav", genPartFlav, _branches, _setStatus);
  utils::setAddress(_tree, _name, "genPartIdxMother", genPartIdxMother, _branches, _setStatus);
}

void
panda::GenPart::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Particle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "pdgId", size, 'I', pdgId, _branches);
  utils::book(_tree, _name, "status", size, 'I', status, _branches);
  utils::book(_tree, _name, "statusFlags", size, 'I', statusFlags, _branches);
  utils::book(_tree, _name, "genPartFlav", size, 'b', genPartFlav, _branches);
  utils::book(_tree, _name, "genPartIdxMother", size, 'I', genPartIdxMother, _branches);
}

void
panda::GenPart::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Particle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "pdgId");
  utils::resetAddress(_tree, _name, "status");
  utils::resetAddress(_tree, _name, "statusFlags");
  utils::resetAddress(_tree, _name, "genPartFlav");
  utils::resetAddress(_tree, _name, "genPartIdxMother");
}

void
panda::GenPart::datastore::resizeVectors_(UInt_t _size)
{
  Particle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::GenPart::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return GenPart::getListOfBranches().fullNames(_name);
}

panda::GenPart::GenPart(char const* _name/* = ""*/) :
  Particle(new GenPartArray(1, _name)),
  pdgId(gStore.getData(this).pdgId[0]),
  status(gStore.getData(this).status[0]),
  statusFlags(gStore.getData(this).statusFlags[0]),
  genPartFlav(gStore.getData(this).genPartFlav[0]),
  genPartIdxMother(gStore.getData(this).genPartIdxMother[0])
{
}

panda::GenPart::GenPart(GenPart const& _src) :
  Particle(new GenPartArray(1, _src.getName())),
  pdgId(gStore.getData(this).pdgId[0]),
  status(gStore.getData(this).status[0]),
  statusFlags(gStore.getData(this).statusFlags[0]),
  genPartFlav(gStore.getData(this).genPartFlav[0]),
  genPartIdxMother(gStore.getData(this).genPartIdxMother[0])
{
  operator=(_src);
}

panda::GenPart::GenPart(datastore& _data, UInt_t _idx) :
  Particle(_data, _idx),
  pdgId(_data.pdgId[_idx]),
  status(_data.status[_idx]),
  statusFlags(_data.statusFlags[_idx]),
  genPartFlav(_data.genPartFlav[_idx]),
  genPartIdxMother(_data.genPartIdxMother[_idx])
{
}

panda::GenPart::GenPart(ArrayBase* _array) :
  Particle(_array),
  pdgId(gStore.getData(this).pdgId[0]),
  status(gStore.getData(this).status[0]),
  statusFlags(gStore.getData(this).statusFlags[0]),
  genPartFlav(gStore.getData(this).genPartFlav[0]),
  genPartIdxMother(gStore.getData(this).genPartIdxMother[0])
{
}

panda::GenPart::~GenPart()
{
  destructor();
}

void
panda::GenPart::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM GenPart.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Particle::destructor(kTRUE);
}

panda::GenPart&
panda::GenPart::operator=(GenPart const& _src)
{
  Particle::operator=(_src);

  pdgId = _src.pdgId;
  status = _src.status;
  statusFlags = _src.statusFlags;
  genPartFlav = _src.genPartFlav;
  genPartIdxMother = _src.genPartIdxMother;

  /* BEGIN CUSTOM GenPart.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::GenPart::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Particle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "pdgId", "", 'I', &pdgId, _branches);
  utils::book(_tree, _name, "status", "", 'I', &status, _branches);
  utils::book(_tree, _name, "statusFlags", "", 'I', &statusFlags, _branches);
  utils::book(_tree, _name, "genPartFlav", "", 'b', &genPartFlav, _branches);
  utils::book(_tree, _name, "genPartIdxMother", "", 'I', &genPartIdxMother, _branches);
}

void
panda::GenPart::doInit_()
{
  Particle::doInit_();

  pdgId = 0;
  status = 0;
  statusFlags = 0;
  genPartFlav = 0;
  genPartIdxMother = 0;

  /* BEGIN CUSTOM GenPart.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::GenPart::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM GenPart.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::GenPart::dump(std::ostream& _out/* = std::cout*/) const
{
  Particle::dump(_out);

  _out << "pdgId = " << pdgId << std::endl;
  _out << "status = " << status << std::endl;
  _out << "statusFlags = " << statusFlags << std::endl;
  _out << "genPartFlav = " << static_cast<const UInt_t>(genPartFlav) << std::endl;
  _out << "genPartIdxMother = " << genPartIdxMother << std::endl;
}

/* BEGIN CUSTOM GenPart.cc.global */
/* END CUSTOM */
