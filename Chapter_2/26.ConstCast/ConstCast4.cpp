   
#include <iostream> 
#include <typeinfo> 
using namespace std; 
  
int main(void) 
{ 
    int a1 = 40; 
    const volatile int* b1 = &a1; 
    cout << "typeid of b1 " << typeid(b1).name() << '\n'; 
    int* c1 = const_cast < int *> (b1); 
    cout << "typeid of c1 " << typeid(c1).name() << '\n'; 

//      int a =1;
//      while(a)
//      {
//   /// ssss
//      }


//   /// ssss
     


//      volatile int a =1;
//      while(a)
//      {
//   /// ssss
//   // share_thread(a)
//      }

//      volatile int a =1;
//      while(a)
//      {
//   /// ssss
// // share_thread(a)
//      }
    return 0; 
} 

// KVPi