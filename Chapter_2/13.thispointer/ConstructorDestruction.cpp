#include "DummyClass.hpp"
#include <memory>
#include <iostream>

// this is a key word provided by compiler
// to specifically point out or refer to 
// variable of the object on which you are doing the operations

int main()
{

   dummy obj, obj2(2),obj3;
  obj.getMyInstanceNumber();
  obj2.getMyInstanceNumber();
  obj3.getMyInstanceNumber();

  dummy::print_static_val(&obj3);
  
  dummy* obj4 = new dummy();

  // delete obj4; typical coding
  // if you don like the above you can do as below
  obj4->destroy();
  //obj->takebackup
  // do error check
  //...
  // delete obj4;


  return 0;
}
