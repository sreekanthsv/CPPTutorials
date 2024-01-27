#include "ConstDestClass.hpp"
#include <iostream>


int main()
{
  ConstDest insstance; // take input form user
  insstance.printval(); // print current values

  std::cout<<"Lets set them " << std::endl;

  insstance.setSymbol('s'); // over write the values
  std::cout<<insstance.getSymbol()<<std::endl; // print the symbol

  insstance.printval(); // print current values
  
  return 0;
}
