#include "../interface/LHEPart.h"

/*static*/
panda::utils::BranchList
panda::LHEPart::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"eta", "mass", "pt", "phi", "pdgId"};
  return blist;
}

void
panda::LHEPart::datastore::allocate(UInt_t _nmax)
{
  Element::datastore::allocate(_nmax);

  eta = new Float_t[nmax_];
  mass = new Float_t[nmax_];
  pt = new Float_t[nmax_];
  phi = new Float_t[nmax_];
  pdgId = new Int_t[nmax_];
}

void
panda::LHEPart::datastore::deallocate()
{
  Element::datastore::deallocate();

  delete [] eta;
  eta = 0;
  delete [] mass;
  mass = 0;
  delete [] pt;
  pt = 0;
  delete [] phi;
  phi = 0;
  delete [] pdgId;
  pdgId = 0;
}

void
panda::LHEPart::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Element::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "eta", _branches);
  utils::setStatus(_tree, _name, "mass", _branches);
  utils::setStatus(_tree, _name, "pt", _branches);
  utils::setStatus(_tree, _name, "phi", _branches);
  utils::setStatus(_tree, _name, "pdgId", _branches);
}

panda::utils::BranchList
panda::LHEPart::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Element::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "eta"));
  blist.push_back(utils::getStatus(_tree, _name, "mass"));
  blist.push_back(utils::getStatus(_tree, _name, "pt"));
  blist.push_back(utils::getStatus(_tree, _name, "phi"));
  blist.push_back(utils::getStatus(_tree, _name, "pdgId"));

  return blist;
}

void
panda::LHEPart::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Element::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "eta", eta, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mass", mass, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pt", pt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "phi", phi, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pdgId", pdgId, _branches, _setStatus);
}

void
panda::LHEPart::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Element::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "eta", size, 'F', eta, _branches);
  utils::book(_tree, _name, "mass", size, 'F', mass, _branches);
  utils::book(_tree, _name, "pt", size, 'F', pt, _branches);
  utils::book(_tree, _name, "phi", size, 'F', phi, _branches);
  utils::book(_tree, _name, "pdgId", size, 'I', pdgId, _branches);
}

void
panda::LHEPart::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Element::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "eta");
  utils::resetAddress(_tree, _name, "mass");
  utils::resetAddress(_tree, _name, "pt");
  utils::resetAddress(_tree, _name, "phi");
  utils::resetAddress(_tree, _name, "pdgId");
}

void
panda::LHEPart::datastore::resizeVectors_(UInt_t _size)
{
  Element::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::LHEPart::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return LHEPart::getListOfBranches().fullNames(_name);
}

panda::LHEPart::LHEPart(char const* _name/* = ""*/) :
  Element(new LHEPartArray(1, _name)),
  eta(gStore.getData(this).eta[0]),
  mass(gStore.getData(this).mass[0]),
  pt(gStore.getData(this).pt[0]),
  phi(gStore.getData(this).phi[0]),
  pdgId(gStore.getData(this).pdgId[0])
{
}

panda::LHEPart::LHEPart(LHEPart const& _src) :
  Element(new LHEPartArray(1, _src.getName())),
  eta(gStore.getData(this).eta[0]),
  mass(gStore.getData(this).mass[0]),
  pt(gStore.getData(this).pt[0]),
  phi(gStore.getData(this).phi[0]),
  pdgId(gStore.getData(this).pdgId[0])
{
  operator=(_src);
}

panda::LHEPart::LHEPart(datastore& _data, UInt_t _idx) :
  Element(_data, _idx),
  eta(_data.eta[_idx]),
  mass(_data.mass[_idx]),
  pt(_data.pt[_idx]),
  phi(_data.phi[_idx]),
  pdgId(_data.pdgId[_idx])
{
}

panda::LHEPart::LHEPart(ArrayBase* _array) :
  Element(_array),
  eta(gStore.getData(this).eta[0]),
  mass(gStore.getData(this).mass[0]),
  pt(gStore.getData(this).pt[0]),
  phi(gStore.getData(this).phi[0]),
  pdgId(gStore.getData(this).pdgId[0])
{
}

panda::LHEPart::~LHEPart()
{
  destructor();
}

void
panda::LHEPart::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM LHEPart.cc.destructor */
  /* END CUSTOM */
}

panda::LHEPart&
panda::LHEPart::operator=(LHEPart const& _src)
{
  eta = _src.eta;
  mass = _src.mass;
  pt = _src.pt;
  phi = _src.phi;
  pdgId = _src.pdgId;

  /* BEGIN CUSTOM LHEPart.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::LHEPart::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, _name, "eta", "", 'F', &eta, _branches);
  utils::book(_tree, _name, "mass", "", 'F', &mass, _branches);
  utils::book(_tree, _name, "pt", "", 'F', &pt, _branches);
  utils::book(_tree, _name, "phi", "", 'F', &phi, _branches);
  utils::book(_tree, _name, "pdgId", "", 'I', &pdgId, _branches);
}

void
panda::LHEPart::doInit_()
{
  eta = 0.;
  mass = 0.;
  pt = 0.;
  phi = 0.;
  pdgId = 0;

  /* BEGIN CUSTOM LHEPart.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::LHEPart::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM LHEPart.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::LHEPart::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "eta = " << eta << std::endl;
  _out << "mass = " << mass << std::endl;
  _out << "pt = " << pt << std::endl;
  _out << "phi = " << phi << std::endl;
  _out << "pdgId = " << pdgId << std::endl;
}

/* BEGIN CUSTOM LHEPart.cc.global */
/* END CUSTOM */
