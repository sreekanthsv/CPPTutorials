#include <iostream>
using namespace std;
 
// first name space
namespace first_order
{

  void func()
  {
     cout << "Inside first_order" << endl;
  }
  // second name space
  namespace second_order
  {
    int i =100;
     void func()
     {
        cout << "Inside second_order" << endl;
     }
  }
}

int main ()
{
    using namespace first_order::second_order;
    // This calls function from second name space.
    func();
    std::cout<<i << endl;
    return 0;
}