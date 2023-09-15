#include "BlueLine.hpp"
#include "RedLine.hpp"
#include <memory>
#include <iostream>



class Book :public virtual BlueLine,  RedLine
{
    public:
    Book() {std::cout<<"Book created " <<std::endl;};
    virtual ~Book(){std::cout<<"Book destroyed " <<std::endl;};
};

int main()
{
  Book obj1;
  return 0;
}
