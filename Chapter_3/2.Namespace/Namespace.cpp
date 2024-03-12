#include <iostream>


using namespace std;
// first name space


namespace first_space
{
  int  i =100;
  void func()
  {
     cout << "Inside first_space " << i<<endl;
  }
 
}
 
// second name space
namespace second_space
{
  char i ='C';
  void func()
  {
     cout << "Inside second_space " << i << endl;
  }
 // here 

}
//using namespace first_space;
int main ()
{

   // This calls function from first name space.
  //first_space::func();
  //second_space::func();
  using namespace first_space;

  func();
  std::cout<<i<<endl;

  return 0;
}