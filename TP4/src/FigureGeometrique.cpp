#include "FigureGeometrique.h"
#include <iostream>
FigureGeometrique::FigureGeometrique(const Couleur & couleur): _couleur(couleur){}

const Couleur & FigureGeometrique::getCouleur() const{
  return _couleur;
}

FigureGeometrique::~FigureGeometrique()
{
}

