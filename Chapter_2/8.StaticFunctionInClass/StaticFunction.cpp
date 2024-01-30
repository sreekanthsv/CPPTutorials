#include "StaticFunctionInClass.hpp"
#include <iostream>


int main()
{
  std::cout<< StaticFunctionInClass::getNumberOfInstances()<<std::endl;
  StaticFunctionInClass  var  ;
  //var.getNumberOfInstances();
  std::cout<< var.getNumberOfInstances()<<std::endl;
 
  // StaticFunctionInClass  varArray[2] ={{1,'c'},{2,'f'}} ;
  StaticFunctionInClass  varArrayLarge[20] ;
  std::cout<< varArrayLarge[3].getNumberOfInstances()<<std::endl;
  return 0;
}


