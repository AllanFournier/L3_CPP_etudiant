#include "Vecteur3.h"
#include <iostream>
#include <cmath>
void afficher(Vecteur v){
	std::cout<<"("<<v.x<<","<<v.y<<","<<v.z<<")"<<std::endl;
}

float norme(Vecteur v){
	float norme = sqrt(v.x*v.x + v.y*v.y + v.z*v.z); 
	return norme;
}

float produitScalaire(Vecteur u,Vecteur v){
	Vecteur temp;
	temp.x=v.x-u.x;
	temp.y=v.y-u.y;
	temp.z=v.z-u.z;
	float produit = 0.5*( norme(u)*norme(u) + norme(v)*norme(v) - norme(temp)*norme(temp)   );
	return produit;
}

Vecteur addition(Vecteur u,Vecteur v){
	Vecteur temp;
	temp.x=v.x+u.x;
	temp.y=v.y+u.y;
	temp.z=v.z+u.z;
	return temp;
}
