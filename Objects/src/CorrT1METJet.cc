#include "../interface/CorrT1METJet.h"

/*static*/
panda::utils::BranchList
panda::CorrT1METJet::getListOfBranches()
{
  utils::BranchList blist;
  blist += Particle::getListOfBranches();
  blist += {"area", "muonSubtrFactor", "rawPt"};
  return blist;
}

void
panda::CorrT1METJet::datastore::allocate(UInt_t _nmax)
{
  Particle::datastore::allocate(_nmax);

  area = new Float_t[nmax_];
  muonSubtrFactor = new Float_t[nmax_];
  rawPt = new Float_t[nmax_];
}

void
panda::CorrT1METJet::datastore::deallocate()
{
  Particle::datastore::deallocate();

  delete [] area;
  area = 0;
  delete [] muonSubtrFactor;
  muonSubtrFactor = 0;
  delete [] rawPt;
  rawPt = 0;
}

void
panda::CorrT1METJet::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Particle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "area", _branches);
  utils::setStatus(_tree, _name, "muonSubtrFactor", _branches);
  utils::setStatus(_tree, _name, "rawPt", _branches);
}

panda::utils::BranchList
panda::CorrT1METJet::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Particle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "area"));
  blist.push_back(utils::getStatus(_tree, _name, "muonSubtrFactor"));
  blist.push_back(utils::getStatus(_tree, _name, "rawPt"));

  return blist;
}

void
panda::CorrT1METJet::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Particle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "area", area, _branches, _setStatus);
  utils::setAddress(_tree, _name, "muonSubtrFactor", muonSubtrFactor, _branches, _setStatus);
  utils::setAddress(_tree, _name, "rawPt", rawPt, _branches, _setStatus);
}

void
panda::CorrT1METJet::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Particle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "area", size, 'F', area, _branches);
  utils::book(_tree, _name, "muonSubtrFactor", size, 'F', muonSubtrFactor, _branches);
  utils::book(_tree, _name, "rawPt", size, 'F', rawPt, _branches);
}

void
panda::CorrT1METJet::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Particle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "area");
  utils::resetAddress(_tree, _name, "muonSubtrFactor");
  utils::resetAddress(_tree, _name, "rawPt");
}

void
panda::CorrT1METJet::datastore::resizeVectors_(UInt_t _size)
{
  Particle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::CorrT1METJet::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return CorrT1METJet::getListOfBranches().fullNames(_name);
}

panda::CorrT1METJet::CorrT1METJet(char const* _name/* = ""*/) :
  Particle(new CorrT1METJetArray(1, _name)),
  area(gStore.getData(this).area[0]),
  muonSubtrFactor(gStore.getData(this).muonSubtrFactor[0]),
  rawPt(gStore.getData(this).rawPt[0])
{
}

panda::CorrT1METJet::CorrT1METJet(CorrT1METJet const& _src) :
  Particle(new CorrT1METJetArray(1, _src.getName())),
  area(gStore.getData(this).area[0]),
  muonSubtrFactor(gStore.getData(this).muonSubtrFactor[0]),
  rawPt(gStore.getData(this).rawPt[0])
{
  operator=(_src);
}

panda::CorrT1METJet::CorrT1METJet(datastore& _data, UInt_t _idx) :
  Particle(_data, _idx),
  area(_data.area[_idx]),
  muonSubtrFactor(_data.muonSubtrFactor[_idx]),
  rawPt(_data.rawPt[_idx])
{
}

panda::CorrT1METJet::CorrT1METJet(ArrayBase* _array) :
  Particle(_array),
  area(gStore.getData(this).area[0]),
  muonSubtrFactor(gStore.getData(this).muonSubtrFactor[0]),
  rawPt(gStore.getData(this).rawPt[0])
{
}

panda::CorrT1METJet::~CorrT1METJet()
{
  destructor();
}

void
panda::CorrT1METJet::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM CorrT1METJet.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Particle::destructor(kTRUE);
}

panda::CorrT1METJet&
panda::CorrT1METJet::operator=(CorrT1METJet const& _src)
{
  Particle::operator=(_src);

  area = _src.area;
  muonSubtrFactor = _src.muonSubtrFactor;
  rawPt = _src.rawPt;

  /* BEGIN CUSTOM CorrT1METJet.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::CorrT1METJet::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Particle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "area", "", 'F', &area, _branches);
  utils::book(_tree, _name, "muonSubtrFactor", "", 'F', &muonSubtrFactor, _branches);
  utils::book(_tree, _name, "rawPt", "", 'F', &rawPt, _branches);
}

void
panda::CorrT1METJet::doInit_()
{
  Particle::doInit_();

  area = 0.;
  muonSubtrFactor = 0.;
  rawPt = 0.;

  /* BEGIN CUSTOM CorrT1METJet.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::CorrT1METJet::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM CorrT1METJet.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::CorrT1METJet::dump(std::ostream& _out/* = std::cout*/) const
{
  Particle::dump(_out);

  _out << "area = " << area << std::endl;
  _out << "muonSubtrFactor = " << muonSubtrFactor << std::endl;
  _out << "rawPt = " << rawPt << std::endl;
}

/* BEGIN CUSTOM CorrT1METJet.cc.global */
/* END CUSTOM */
