#include "Magasin.h"
#include <iostream>
Magasin::Magasin() : _idCourantClient(0),_idCourantProduit(0){}
int Magasin::nbClients() const
{
  return _clients.size();
}
void Magasin::ajouterClient(const std::string & nom)
{
  Client A(_idCourantClient++,nom);
  _clients.push_back(A);
}
void Magasin::afficherClients() const
{
  std::cout << "Les clients du magasin :"<<std::endl;
  for(Client c : _clients)
    {
      c.afficherClient();
    }
}
void Magasin::supprimerClient(int idClient)
 {
   //trouver client a supprimmer
   //swap le reste
   //pop back
   bool trouve = false;
   for(unsigned int i = 0;i< _clients.size()-1;i++)
     if(_clients[i].getId() == idClient)
       {
	 trouve = true;
	 std::swap(_clients[i],_clients[i+1]);
       }
   if(trouve ==false ) throw std::string("Ce client n'existe pas !");
   _clients.pop_back();
 }
int Magasin::nbProduits() const
{
  return _produits.size();
}
void Magasin::ajouterProduit(const std::string & nom)
{
  Produit P(_idCourantProduit++,nom);
  _produits.push_back(P);
}
void Magasin::afficherProduits() const
{
  std::cout << "Les produits du magasin :"<<std::endl;
  for(Produit p : _produits)
    {
      p.afficherProduit();
    }
}
void Magasin::supprimerProduit(int idProduit)
{
   bool trouve = false;
   for(unsigned int i = 0;i< _produits.size()-1;i++)
     if(_produits[i].getId() == idProduit)
       {
	 trouve = true;
	 std::swap(_produits[i],_produits[i+1]);
       }
   if(trouve == false) throw std::string("Le produit n'existe pas !");
   _produits.pop_back();
}
int Magasin::nbLocations() const
{
  return _locations.size();
}
void Magasin::ajouterLocation(int idClient,int idProduit)
{
 
   for(unsigned int i = 0;i< _locations.size()-1;i++)
     {
     if(_locations[i]._idClient==idClient && _locations[i]._idProduit==idProduit)
       {
	 throw std::string ("Cette location existe déjà !");
	 break;
       }
     }
    
       
     Location L{idClient,idProduit} ;
     _locations.push_back(L);
       
}

void Magasin::afficherLocations() const
{
  std::cout << "Les locations du magasin :"<<std::endl;
  for(Location l : _locations)
    {
      l.afficherLocation();
    }
}
void Magasin::supprimerLocation(int idClient,int idProduit)
{
   bool trouve = false;
   for(unsigned int i = 0;i< _locations.size()-1;i++)
     if(_locations[i]._idClient==idClient && _locations[i]._idProduit==idProduit)
       {
	 trouve = true;
	 std::swap(_locations[i],_locations[i+1]);
       }
   if(trouve == false) throw std::string("Cette location n'existe pas");
   _locations.pop_back();
}
bool Magasin::trouverClientDansLocation(int idClient) const
{
  for(unsigned int i = 0;i< _locations.size()-1;i++)
   {
     if(_locations[i]._idClient==idClient)
       {
	 return true;
       }
   }
  return false;
}

std::vector<int> Magasin::calculerClientsLibres() const
{
  std::vector<int> idLibre;
  //Les id de client sont t'ilts dans locations ?
  for(Client c : _clients)
  {
    if(!trouverClientDansLocation(c.getId()))
      {
	idLibre.push_back(c.getId());
      }
  }
  return idLibre;
}
bool Magasin::trouverProduitDansLocation(int idProduit) const
{
  for(unsigned int i = 0;i< _locations.size()-1;i++)
   {
     if(_locations[i]._idProduit==idProduit)
       {
	 return true;
       }
   }
   return false; 
}
std::vector<int> Magasin::calculerProduitsLibres() const
{
  std::vector<int> idLibre;
  //Les id de client sont t'ilts dans locations ?
  for(Produit p : _produits)
  {
    if(!trouverProduitDansLocation(p.getId()))
      {
	idLibre.push_back(p.getId());
      }
  }
  return idLibre;  
}

