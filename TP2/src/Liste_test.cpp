#include <CppUTest/CommandLineTestRunner.h>

#include "Liste.hpp"

TEST_GROUP(GroupList) {};

TEST(GroupList , TestList1)
{
  Liste * C = new Liste;
  C->ajouterDevant(1);
  int ret = C->getElement(0);
  CHECK_EQUAL(ret,1);
}

TEST(GroupList , TestList2)
{
  
}
