#ifndef POLYREG_HPP
#define POLYREG_HPP
#include "FigureGeometrique.h"
#include "Point.h"
class PolygoneRegulier : public FigureGeometrique {
 private:
  int _nbPoints;
  Point * _points;
 public:
  PolygoneRegulier(const Couleur & couleur,const Point & centre,int rayon,int nbCotes);
  void afficher() const override;
  int getNbPoints() const;
  const Point & getPoint(int indice) const;
  ~PolygoneRegulier();
};
#endif
