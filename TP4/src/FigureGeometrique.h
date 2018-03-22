#ifndef FIGUREGEO_HPP
#define FIGUREGEO_HPP
#include "Couleur.h"
class FigureGeometrique {
 protected:
  Couleur _couleur;
 public:
  FigureGeometrique(const Couleur & couleur);
  const Couleur & getCouleur() const;
  virtual void afficher() const = 0;
  virtual ~FigureGeometrique();
};
#endif
