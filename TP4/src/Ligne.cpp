#include "Ligne.h"
#include <iostream>
Ligne::Ligne(const Couleur & couleur,const Point & p0,const Point & p1): FigureGeometrique(couleur),_p0(p0),_p1(p1){}

void Ligne::afficher() const {
  //Couleur A = this->getCouleur();
  //Puis A._r
  std::cout<<"Ligne "<<_couleur._r<<"_"<<_couleur._g<<"_"<<_couleur._b<<" ";
  std::cout<<_p0._x<<"_"<<_p0._y<<" ";
  std::cout<<_p1._x<<"_"<<_p1._y<<" "<<std::endl;
}
