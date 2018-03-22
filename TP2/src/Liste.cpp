#include "Liste.hpp"

Liste::Liste(){
  Noeud * element = new Noeud;

  element->valeur = 0;
  element->suivant = nullptr;
  tete = element;
}

Liste::~Liste(){
  Noeud * temp = tete;
  if(temp->suivant==nullptr)
    {
      delete tete;
    }
  else{ 
    while(temp->suivant!=nullptr){
      temp=temp->suivant;
      delete tete;
      tete=temp;
    }
    delete tete;
  }
}

void Liste::ajouterDevant(int valeur){
  Noeud * a = new Noeud;
  a->valeur = valeur;
  a->suivant = tete;
  tete = a;
}

int Liste::getTaille() const{
  int cpt = 0;
  Noeud * courant = tete;
  while(courant){
    courant = courant->suivant;
    cpt++;
  }
  return cpt;
}

int Liste::getElement(int indice) const{
  Noeud * courant = tete;
  for(int i = 0 ; i<indice ; i++){
    courant = courant->suivant;
  }
  return courant->valeur;
}
