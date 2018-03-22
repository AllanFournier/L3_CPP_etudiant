#ifndef VECTEUR3_
#define VECTEUR3_
struct Vecteur{
  float x = 0;
  float y = 0;
  float z = 0;
};
void afficher(Vecteur v);
float norme(Vecteur v);
float produitScalaire(Vecteur u,Vecteur v);
Vecteur addition(Vecteur u,Vecteur v);
#endif
