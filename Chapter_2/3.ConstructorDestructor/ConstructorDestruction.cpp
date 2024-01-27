#include "ConstDestClass.hpp"
#include <iostream>


int main()
{
  ConstDest insstance; 
  insstance.printval();
 
  ConstDest insstances[3];
  for(auto& element : insstances)
    element.printval();

  ConstDest one_param_insstance(222); 
  insstance.printval();

  ConstDest one_param_insstances[4]={111,222,333,444} ;
  for(auto& element : one_param_insstances)
    element.printval();

  ConstDest two_param_insstance(222, '#'); 
    two_param_insstance.printval();
  
  ConstDest Two_param_insstances[4]={ {111,'a'},  {222,'b'}, {333,'c'}, {444,'d'}} ;
  for(auto& element : Two_param_insstances)
    element.printval();

  
  return 0;
}
