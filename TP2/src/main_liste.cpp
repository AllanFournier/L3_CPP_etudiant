#include "Liste.hpp"
#include <iostream>


int main(){
  Liste * C = new Liste;
  C->ajouterDevant(13);
  C->ajouterDevant(37);
  int taille = C->getTaille();

  for(int i = 0 ;i < taille ;i++)
    {
      int ret  = C->getElement(i);
      std::cout << ret <<std::endl;
    }

  
  // std::cout << ret <<std::endl;
  // std::cout << tai <<std::endl;
  delete C;
  return 0;
}
