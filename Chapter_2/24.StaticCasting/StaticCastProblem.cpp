// C++ Program to demonstrate 
// static_cast char* to int*
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
  int a = 10;
  char c = 'a';
  char d = 'a';

  cout<<c<<endl;
  cout<<d<<endl;

  // Pass at compile time, 
  // may fail at run time
  int* q = (int*)&c;
  *q = 1001;

  cout<<*q<<endl;
  cout<<c<<endl;
  cout<<d<<endl;

  // We are trying to access memory locations beyond what is alloted to char
  // hence you see errors
  int* p = static_cast<int*>(&c);
  return 0;
}