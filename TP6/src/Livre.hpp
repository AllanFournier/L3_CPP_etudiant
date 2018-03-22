#ifndef LIVRE_HPP
#define LIVRE_HPP
#include <string>
#include <iostream>
class Livre
{
private:
  std::string _titre;
  std::string _auteur;
  int _annee;
public:
  Livre();
  Livre(const std::string & titre,const std::string & auteur,int annee);
  const std::string & getTitre() const;
  const std::string & getAuteur() const;
  int getAnnee() const;
  bool operator<(const Livre & l2) const;

  friend std::istream & operator >>(std::istream &is,Livre & l);
};
std::istream & operator >>(std::istream &is,Livre & l);
std::ostream & operator <<(std::ostream &os,Livre const & l);
bool operator==(const Livre & l1,const Livre & l2);
#endif
