#include "DerivedClass.hpp"
#include <iostream>


void some_non_friend_function()
{
  // BaseClass instance1(" initialised");
  //BaseClass *pinstance2 = new BaseClass();
}



void friend_function()
{
 // std::string initializeddata;
 // std::cin>>initializeddata;

  // if ( do_chaeck_palindraome(initializeddata) == true)
 // {

//  BaseClass instance1;
 // BaseClass *pinstance2 = new BaseClass(initializeddata);

  // }
}



int main()
{
  
 // BaseClass instance1('C');  // constructor for instance1

  BaseClass *pinstance2 = new BaseClass('D'); // construcor for pinstance2

  delete pinstance2;

 // he will put destructor for instance1
  return 0;
}
