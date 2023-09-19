#include "BlueLine.hpp"
#include "RedLine.hpp"
#include <memory>
#include <iostream>



class Pen :public BlueLine, public RedLine
{
    public:
    Pen() {std::cout<<"Pen created " <<std::endl;};
    virtual ~Pen(){std::cout<<"Pen destroyed " <<std::endl;};
};

int main()
{
  Pen obj1;
  obj1.colour =10;
  BlueLine* bP=&obj1;
  RedLine* rP=&obj1;
  bP->colour =10;
  rP->colour =20;
  std::cout<< bP->colour <<std::endl;
  std::cout<< rP->colour <<std::endl;
  return 0;
}
