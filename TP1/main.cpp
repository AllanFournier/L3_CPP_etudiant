#include <iostream>
#include "Fibonacci.h"
#include "Vecteur3.h"

int main(int argc,char *argv[])
{
  std::cout<<"Bonjour" <<std::endl;
  std::cout<<fibonacciRecursif(7)<<std::endl;
  std::cout<<fibonacciIteratif(7)<<std::endl;
  Vecteur v,u,z;
  v.x=2.0;
  v.y=3.0;
  v.z=6.0;
  u.x=2.0;
  u.y=3.0;
  u.z=6.0;
  afficher(v);
  z = addition(u,v);
  float test = produitScalaire(u,v);
  std::cout<<test<<std::endl;
  afficher(z);
  return 0;
}
