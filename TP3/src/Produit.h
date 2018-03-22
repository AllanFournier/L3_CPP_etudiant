#ifndef PRODUIT_HPP
#define PRODUIT_HPP
#include <string>
class Produit{
 public:
  int _id;
  std::string _description;
  Produit(int id,const std::string & _description);
  int getId() const;
  const std::string & getDescription() const;
  void afficherProduit() const;
};
#endif
