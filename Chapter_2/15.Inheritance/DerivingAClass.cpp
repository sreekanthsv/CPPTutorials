#include "DerivedClass.hpp"
#include <iostream>

int main()
{
  
  BaseClass BaseClassObj;
  BaseClassObj.setBaseData( " Base value set to someting through base object " );
  std::cout<< BaseClassObj.getBaseData()<<std::endl;

//  BaseClassObj.some_protected();




  DerivedClass DerivedClassObj;
  // public members of base class, 
  // which are inherited publicaly
  DerivedClassObj.setBaseData( " Base value set to someting through Derived object  " );
  std::cout<< DerivedClassObj.getBaseData()<<std::endl;

  DerivedClassObj.setData( " set both data to same");
  std::cout<< DerivedClassObj.getData()<<std::endl;
 // DerivedClassObj.some_protected();  
  return 0;
}
