#include "../interface/TrigObj.h"

/*static*/
panda::utils::BranchList
panda::TrigObj::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"filterBits", "id", "l1charge", "l1iso", "l1pt", "l1pt_2", "l2pt", "pt", "eta", "phi"};
  return blist;
}

void
panda::TrigObj::datastore::allocate(UInt_t _nmax)
{
  Element::datastore::allocate(_nmax);

  filterBits = new Int_t[nmax_];
  id = new Int_t[nmax_];
  l1charge = new Int_t[nmax_];
  l1iso = new Int_t[nmax_];
  l1pt = new Float_t[nmax_];
  l1pt_2 = new Float_t[nmax_];
  l2pt = new Float_t[nmax_];
  pt = new Float_t[nmax_];
  eta = new Float_t[nmax_];
  phi = new Float_t[nmax_];
}

void
panda::TrigObj::datastore::deallocate()
{
  Element::datastore::deallocate();

  delete [] filterBits;
  filterBits = 0;
  delete [] id;
  id = 0;
  delete [] l1charge;
  l1charge = 0;
  delete [] l1iso;
  l1iso = 0;
  delete [] l1pt;
  l1pt = 0;
  delete [] l1pt_2;
  l1pt_2 = 0;
  delete [] l2pt;
  l2pt = 0;
  delete [] pt;
  pt = 0;
  delete [] eta;
  eta = 0;
  delete [] phi;
  phi = 0;
}

void
panda::TrigObj::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Element::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "filterBits", _branches);
  utils::setStatus(_tree, _name, "id", _branches);
  utils::setStatus(_tree, _name, "l1charge", _branches);
  utils::setStatus(_tree, _name, "l1iso", _branches);
  utils::setStatus(_tree, _name, "l1pt", _branches);
  utils::setStatus(_tree, _name, "l1pt_2", _branches);
  utils::setStatus(_tree, _name, "l2pt", _branches);
  utils::setStatus(_tree, _name, "pt", _branches);
  utils::setStatus(_tree, _name, "eta", _branches);
  utils::setStatus(_tree, _name, "phi", _branches);
}

panda::utils::BranchList
panda::TrigObj::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Element::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "filterBits"));
  blist.push_back(utils::getStatus(_tree, _name, "id"));
  blist.push_back(utils::getStatus(_tree, _name, "l1charge"));
  blist.push_back(utils::getStatus(_tree, _name, "l1iso"));
  blist.push_back(utils::getStatus(_tree, _name, "l1pt"));
  blist.push_back(utils::getStatus(_tree, _name, "l1pt_2"));
  blist.push_back(utils::getStatus(_tree, _name, "l2pt"));
  blist.push_back(utils::getStatus(_tree, _name, "pt"));
  blist.push_back(utils::getStatus(_tree, _name, "eta"));
  blist.push_back(utils::getStatus(_tree, _name, "phi"));

  return blist;
}

void
panda::TrigObj::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Element::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "filterBits", filterBits, _branches, _setStatus);
  utils::setAddress(_tree, _name, "id", id, _branches, _setStatus);
  utils::setAddress(_tree, _name, "l1charge", l1charge, _branches, _setStatus);
  utils::setAddress(_tree, _name, "l1iso", l1iso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "l1pt", l1pt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "l1pt_2", l1pt_2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "l2pt", l2pt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pt", pt, _branches, _setStatus);
  utils::setAddress(_tree, _name, "eta", eta, _branches, _setStatus);
  utils::setAddress(_tree, _name, "phi", phi, _branches, _setStatus);
}

void
panda::TrigObj::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Element::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "filterBits", size, 'I', filterBits, _branches);
  utils::book(_tree, _name, "id", size, 'I', id, _branches);
  utils::book(_tree, _name, "l1charge", size, 'I', l1charge, _branches);
  utils::book(_tree, _name, "l1iso", size, 'I', l1iso, _branches);
  utils::book(_tree, _name, "l1pt", size, 'F', l1pt, _branches);
  utils::book(_tree, _name, "l1pt_2", size, 'F', l1pt_2, _branches);
  utils::book(_tree, _name, "l2pt", size, 'F', l2pt, _branches);
  utils::book(_tree, _name, "pt", size, 'F', pt, _branches);
  utils::book(_tree, _name, "eta", size, 'F', eta, _branches);
  utils::book(_tree, _name, "phi", size, 'F', phi, _branches);
}

void
panda::TrigObj::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Element::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "filterBits");
  utils::resetAddress(_tree, _name, "id");
  utils::resetAddress(_tree, _name, "l1charge");
  utils::resetAddress(_tree, _name, "l1iso");
  utils::resetAddress(_tree, _name, "l1pt");
  utils::resetAddress(_tree, _name, "l1pt_2");
  utils::resetAddress(_tree, _name, "l2pt");
  utils::resetAddress(_tree, _name, "pt");
  utils::resetAddress(_tree, _name, "eta");
  utils::resetAddress(_tree, _name, "phi");
}

void
panda::TrigObj::datastore::resizeVectors_(UInt_t _size)
{
  Element::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::TrigObj::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return TrigObj::getListOfBranches().fullNames(_name);
}

panda::TrigObj::TrigObj(char const* _name/* = ""*/) :
  Element(new TrigObjArray(1, _name)),
  filterBits(gStore.getData(this).filterBits[0]),
  id(gStore.getData(this).id[0]),
  l1charge(gStore.getData(this).l1charge[0]),
  l1iso(gStore.getData(this).l1iso[0]),
  l1pt(gStore.getData(this).l1pt[0]),
  l1pt_2(gStore.getData(this).l1pt_2[0]),
  l2pt(gStore.getData(this).l2pt[0]),
  pt(gStore.getData(this).pt[0]),
  eta(gStore.getData(this).eta[0]),
  phi(gStore.getData(this).phi[0])
{
}

panda::TrigObj::TrigObj(TrigObj const& _src) :
  Element(new TrigObjArray(1, _src.getName())),
  filterBits(gStore.getData(this).filterBits[0]),
  id(gStore.getData(this).id[0]),
  l1charge(gStore.getData(this).l1charge[0]),
  l1iso(gStore.getData(this).l1iso[0]),
  l1pt(gStore.getData(this).l1pt[0]),
  l1pt_2(gStore.getData(this).l1pt_2[0]),
  l2pt(gStore.getData(this).l2pt[0]),
  pt(gStore.getData(this).pt[0]),
  eta(gStore.getData(this).eta[0]),
  phi(gStore.getData(this).phi[0])
{
  operator=(_src);
}

panda::TrigObj::TrigObj(datastore& _data, UInt_t _idx) :
  Element(_data, _idx),
  filterBits(_data.filterBits[_idx]),
  id(_data.id[_idx]),
  l1charge(_data.l1charge[_idx]),
  l1iso(_data.l1iso[_idx]),
  l1pt(_data.l1pt[_idx]),
  l1pt_2(_data.l1pt_2[_idx]),
  l2pt(_data.l2pt[_idx]),
  pt(_data.pt[_idx]),
  eta(_data.eta[_idx]),
  phi(_data.phi[_idx])
{
}

panda::TrigObj::TrigObj(ArrayBase* _array) :
  Element(_array),
  filterBits(gStore.getData(this).filterBits[0]),
  id(gStore.getData(this).id[0]),
  l1charge(gStore.getData(this).l1charge[0]),
  l1iso(gStore.getData(this).l1iso[0]),
  l1pt(gStore.getData(this).l1pt[0]),
  l1pt_2(gStore.getData(this).l1pt_2[0]),
  l2pt(gStore.getData(this).l2pt[0]),
  pt(gStore.getData(this).pt[0]),
  eta(gStore.getData(this).eta[0]),
  phi(gStore.getData(this).phi[0])
{
}

panda::TrigObj::~TrigObj()
{
  destructor();
}

void
panda::TrigObj::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM TrigObj.cc.destructor */
  /* END CUSTOM */
}

panda::TrigObj&
panda::TrigObj::operator=(TrigObj const& _src)
{
  filterBits = _src.filterBits;
  id = _src.id;
  l1charge = _src.l1charge;
  l1iso = _src.l1iso;
  l1pt = _src.l1pt;
  l1pt_2 = _src.l1pt_2;
  l2pt = _src.l2pt;
  pt = _src.pt;
  eta = _src.eta;
  phi = _src.phi;

  /* BEGIN CUSTOM TrigObj.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::TrigObj::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, _name, "filterBits", "", 'I', &filterBits, _branches);
  utils::book(_tree, _name, "id", "", 'I', &id, _branches);
  utils::book(_tree, _name, "l1charge", "", 'I', &l1charge, _branches);
  utils::book(_tree, _name, "l1iso", "", 'I', &l1iso, _branches);
  utils::book(_tree, _name, "l1pt", "", 'F', &l1pt, _branches);
  utils::book(_tree, _name, "l1pt_2", "", 'F', &l1pt_2, _branches);
  utils::book(_tree, _name, "l2pt", "", 'F', &l2pt, _branches);
  utils::book(_tree, _name, "pt", "", 'F', &pt, _branches);
  utils::book(_tree, _name, "eta", "", 'F', &eta, _branches);
  utils::book(_tree, _name, "phi", "", 'F', &phi, _branches);
}

void
panda::TrigObj::doInit_()
{
  filterBits = 0;
  id = 0;
  l1charge = 0;
  l1iso = 0;
  l1pt = 0.;
  l1pt_2 = 0.;
  l2pt = 0.;
  pt = 0.;
  eta = 0.;
  phi = 0.;

  /* BEGIN CUSTOM TrigObj.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::TrigObj::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM TrigObj.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::TrigObj::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "filterBits = " << filterBits << std::endl;
  _out << "id = " << id << std::endl;
  _out << "l1charge = " << l1charge << std::endl;
  _out << "l1iso = " << l1iso << std::endl;
  _out << "l1pt = " << l1pt << std::endl;
  _out << "l1pt_2 = " << l1pt_2 << std::endl;
  _out << "l2pt = " << l2pt << std::endl;
  _out << "pt = " << pt << std::endl;
  _out << "eta = " << eta << std::endl;
  _out << "phi = " << phi << std::endl;
}

/* BEGIN CUSTOM TrigObj.cc.global */
/* END CUSTOM */
