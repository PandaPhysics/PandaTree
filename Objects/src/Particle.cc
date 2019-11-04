#include "../interface/Particle.h"

/*static*/
panda::utils::BranchList
panda::Particle::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"pt", "eta", "phi", "mass"};
  return blist;
}

void
panda::Particle::datastore::allocate(UInt_t _nmax)
{
  Element::datastore::allocate(_nmax);

  pt = new Float_t[nmax_];
  eta = new Float_t[nmax_];
  phi = new Float_t[nmax_];
  mass = new Float_t[nmax_];
}

void
panda::Particle::datastore::deallocate()
{
  Element::datastore::deallocate();

  delete [] pt;
  pt = 0;
  delete [] eta;
  eta = 0;
  delete [] phi;
  phi = 0;
  delete [] mass;
  mass = 0;
}

void
panda::Particle::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Element::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "pt", _branches);
  utils::setStatus(_tree, _name, "eta", _branches);
  utils::setStatus(_tree, _name, "phi", _branches);
  utils::setStatus(_tree, _name, "mass", _branches);
}

panda::utils::BranchList
panda::Particle::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Element::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "pt"));
  blist.push_back(utils::getStatus(_tree, _name, "eta"));
  blist.push_back(utils::getStatus(_tree, _name, "phi"));
  blist.push_back(utils::getStatus(_tree, _name, "mass"));

  return blist;
}

void
panda::Particle::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Element::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "pt", pt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "eta", eta, _branches, _setStatus);
  utils::setAddress(_tree, _name, "phi", phi, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mass", mass, _branches, _setStatus);
}

void
panda::Particle::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Element::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "pt", size, 'F', pt, _branches);
  utils::book(_tree, _name, "eta", size, 'F', eta, _branches);
  utils::book(_tree, _name, "phi", size, 'F', phi, _branches);
  utils::book(_tree, _name, "mass", size, 'F', mass, _branches);
}

void
panda::Particle::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Element::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "pt");
  utils::resetAddress(_tree, _name, "eta");
  utils::resetAddress(_tree, _name, "phi");
  utils::resetAddress(_tree, _name, "mass");
}

void
panda::Particle::datastore::resizeVectors_(UInt_t _size)
{
  Element::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Particle::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Particle::getListOfBranches().fullNames(_name);
}

panda::Particle::Particle(char const* _name/* = ""*/) :
  Element(new ParticleArray(1, _name)),
  pt(gStore.getData(this).pt[0]),
  eta(gStore.getData(this).eta[0]),
  phi(gStore.getData(this).phi[0]),
  mass(gStore.getData(this).mass[0])
{
}

panda::Particle::Particle(Particle const& _src) :
  Element(new ParticleArray(1, _src.getName())),
  pt(gStore.getData(this).pt[0]),
  eta(gStore.getData(this).eta[0]),
  phi(gStore.getData(this).phi[0]),
  mass(gStore.getData(this).mass[0])
{
  operator=(_src);
}

panda::Particle::Particle(datastore& _data, UInt_t _idx) :
  Element(_data, _idx),
  pt(_data.pt[_idx]),
  eta(_data.eta[_idx]),
  phi(_data.phi[_idx]),
  mass(_data.mass[_idx])
{
}

panda::Particle::Particle(ArrayBase* _array) :
  Element(_array),
  pt(gStore.getData(this).pt[0]),
  eta(gStore.getData(this).eta[0]),
  phi(gStore.getData(this).phi[0]),
  mass(gStore.getData(this).mass[0])
{
}

panda::Particle::~Particle()
{
  destructor();
}

void
panda::Particle::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Particle.cc.destructor */
  /* END CUSTOM */
}

panda::Particle&
panda::Particle::operator=(Particle const& _src)
{
  pt = _src.pt;
  eta = _src.eta;
  phi = _src.phi;
  mass = _src.mass;

  /* BEGIN CUSTOM Particle.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Particle::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, _name, "pt", "", 'F', &pt, _branches);
  utils::book(_tree, _name, "eta", "", 'F', &eta, _branches);
  utils::book(_tree, _name, "phi", "", 'F', &phi, _branches);
  utils::book(_tree, _name, "mass", "", 'F', &mass, _branches);
}

void
panda::Particle::doInit_()
{
  pt = 0.;
  eta = 0.;
  phi = 0.;
  mass = 0.;

  /* BEGIN CUSTOM Particle.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Particle::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Particle.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Particle::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "pt = " << pt << std::endl;
  _out << "eta = " << eta << std::endl;
  _out << "phi = " << phi << std::endl;
  _out << "mass = " << mass << std::endl;
}

/* BEGIN CUSTOM Particle.cc.global */
/* END CUSTOM */
