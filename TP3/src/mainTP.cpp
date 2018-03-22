#include <iostream>
#include "Location.h"
#include "Client.h"
#include "Produit.h"
#include "Magasin.h"
int main(int argc,char **argv)
{
  Location loc{0,0};
  loc.afficherLocation();
  Client cli(42,"toto");
  cli.afficherClient();
  Produit pro(50,"Une tomate");
  pro.afficherProduit();
  Magasin mag;
  mag.ajouterClient("jean");
  mag.ajouterClient("luc");
  mag.ajouterClient("mark");
  mag.ajouterClient("taric");
  std::cout<<"Nombre de clients :"<<mag.nbClients()<<std::endl;
  mag.afficherClients();
  try {
    mag.supprimerClient(5);
  }
  catch (std::string s){
    std::cerr<<"Exception client :"<< s << std::endl;
  }
  mag.afficherClients();
  mag.ajouterProduit("tomate");
  mag.ajouterProduit("poire");
  mag.ajouterProduit("poire");
  mag.afficherProduits();
  try{
  mag.supprimerProduit(4);
  }
  catch(std::string mess){
    std::cerr<<"Exception produit : "<< mess << std::endl;
  }
  mag.afficherProduits();
  mag.ajouterLocation(1,1);
  /* try{
  mag.ajouterLocation(1,1);
  }
  catch(std::string me){
    std::cerr<<"Loc error :"<< me <<std::endl;
  }
  */
}
