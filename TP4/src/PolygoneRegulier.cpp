#include <iostream>
#include "PolygoneRegulier.h"
#include "math.h"
#include "vector"
PolygoneRegulier::PolygoneRegulier(const Couleur & couleur,const Point & centre,int rayon,int nbCotes) : FigureGeometrique(couleur)
{
  _points = new Point [nbCotes];
  int offsetx = centre._x;
  int offsety = centre._y;
  _nbPoints = nbCotes; 
  //Point de base 0.0
  // Point calcule
  for(int i = 0 ; i < nbCotes ; i++)
    {
      float angle = 2*i*M_PI/(float)nbCotes;
      int posx = rayon * cos(angle) + offsetx ;
      int posy =  rayon * sin(angle) + offsety;
      Point A{posx,posy};
      _points[i]=A;
    }
}
void PolygoneRegulier::afficher() const
{
  std::cout<<"PolygoneRegulier "<<_couleur._r<<"_"<<_couleur._g<<"_"<<_couleur._b<<" ";
  for( int i = 0 ; i < _nbPoints;i++)
    {
      std::cout<<_points[i]._x<<"_"<<_points[i]._y<<" ";
    }
  std::cout<<std::endl;
}

int PolygoneRegulier::getNbPoints() const
{
  return _nbPoints;
}

const Point & PolygoneRegulier::getPoint(int indice) const
{
  return _points[indice];
}

PolygoneRegulier::~PolygoneRegulier()
{
  delete  [] _points;
}
