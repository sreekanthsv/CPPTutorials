#include "ConstMutable.hpp"
#include <iostream>


int main()
{
  ConstMutable  var[2] ={{1,'c'},{2,'f'}} ;
  var[0].addChars(); // calculate and store
  var[1].addChars();
  
  
  const ConstMutable  var_const ={1,'c'} ;
  //var_const.setSymbol('d');
  var_const.addChars();
  return 0;
}


