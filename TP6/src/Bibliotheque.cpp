#include "Bibliotheque.hpp"

void Bibliotheque::afficher() const {
  for(Livre l : *this)
    {
      std::cout << l << std::endl;
    }
}
void Bibliotheque::trierParAuteurEtTitre(){
  std::sort(begin(),end());
}
void Bibliotheque::trierParAnnee(){
  auto f1 = [] (Livre x ,Livre y) -> bool {return x.getAnnee() < y.getAnnee();};
  std::sort(begin(),end(),f1);
}
