#include "DummyClass.hpp"
#include <memory>
#include <iostream>

int main()
{
  int reference=0;
  {
    dummy obj(++reference);
  }
  std::cout<< "scope of a local objects" <<std::endl<<std::endl;


  std::cout<< "creating dynamic objects" <<std::endl;
  dummy* pObj = new dummy(++reference);
  auto pObj2 = new dummy(++reference);
  
  delete pObj;
  delete pObj2; 
  std::cout<< "after deleting dynamically created objects" <<std::endl;



  std::cout<< "creating dynamic array objects" <<std::endl<<std::endl;
  dummy* obj_arr = new dummy[4]{++reference,++reference,++reference,++reference};

  delete [] obj_arr;
  std::cout<< "after deleting dynamically created array objects" <<std::endl<<std::endl;


  std::cout<< "creating objects via unique_ptr" <<std::endl;
  {
    std::unique_ptr<dummy> p = std::make_unique<dummy>(++reference);
  }
  std::cout<< "dynamically created objects released after scope ended" <<std::endl<<std::endl;
  return 0;
}
