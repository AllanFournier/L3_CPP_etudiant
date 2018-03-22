#ifndef LISTE_HPP
#define LISTE_HPP
struct Noeud{
  int valeur;
  Noeud * suivant;
};

struct Liste{
  Noeud * tete;
  Liste();
  ~Liste();
  void ajouterDevant(int valeur);
  int getTaille() const;
  int getElement(int indice) const;
};

#endif
