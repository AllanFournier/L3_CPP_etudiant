#ifndef BIBLI_HPP
#define BIBLI_HPP
#include "Livre.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
class Bibliotheque : public std::vector<Livre>
{
public:
  void afficher() const;
  void trierParAuteurEtTitre();
  void trierParAnnee();
};
#endif
