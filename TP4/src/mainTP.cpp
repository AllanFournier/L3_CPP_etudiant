#include <iostream>
#include "FigureGeometrique.h"
#include "Ligne.h"
#include "PolygoneRegulier.h"
#include <vector>
int main(int argc,char **argv)
{
  Point A{0,0};
  Point B{100,200};
  Couleur R{1,0,0};
  Ligne L(R,A,B);
  //L.afficher();
  PolygoneRegulier P(R,B,50,5);
  //P.afficher();
  // FigureGeometrique * ptrFi;
  //ptrFi = &L;
  //FigureGeometrique * ptrFi2;
  //ptrFi2 = &P;
  std::vector<FigureGeometrique*> fg;
  fg.push_back(new Ligne(R,A,B));
  fg.push_back(new PolygoneRegulier(R,B,50,5));
  for(int i = 0;i < fg.size();i++)
    {
      fg[i]->afficher();
    }
  for(int i = 0;i < fg.size();i++)
    {
      delete fg[i];
    }
  return 0;
}
