#include "Livre.hpp"

Livre::Livre() : _titre("vide"),_auteur("vide"),_annee(0){}

Livre::Livre(const std::string & titre,const std::string & auteur,int annee)
{
  if(titre.find(";") != std::string::npos) throw std::string("erreur : titre non valide (';' non autorisé)");
  if(auteur.find(";") != std::string::npos) throw std::string("erreur : auteur non valide (';' non autorisé)");
  if(titre.find("\n") != std::string::npos) throw std::string("erreur : titre non valide ('\n' non autorisé)");
  if(auteur.find("\n") != std::string::npos) throw std::string("erreur : auteur non valide ('\n' non autorisé)");
  _titre = titre;
  _auteur = auteur;
  _annee = annee;
}

const std::string & Livre::getTitre() const{return _titre;}
const std::string & Livre::getAuteur() const{return _auteur;}
int Livre::getAnnee() const{return _annee;}
   
bool Livre::operator<(const Livre & l2) const {
    if(_auteur == l2._auteur)
      {
	if(_titre < l2._titre)
	  {
	    return true;
	  }
       }
    if(_auteur < l2._auteur)
      {
	return true;
      }
    return false;
}

bool operator==(const Livre & l1,const Livre & l2) {
return l1.getTitre() == l2.getTitre() and l1.getAuteur() == l2.getAuteur() and
  l1.getAnnee() == l2.getAnnee();
}
std::ostream & operator <<(std::ostream &os,Livre const & l)
{
return os << l.getTitre() << ";"<< l.getAuteur() << ";" << l.getAnnee();
}
std::istream & operator >>(std::istream &is,Livre &l)
{

std::getline(is,l._titre,';');
std::getline(is,l._auteur,';');
std::string st;
std::getline(is,st,';');
l._annee = std::stoi(st);

return is;
}

