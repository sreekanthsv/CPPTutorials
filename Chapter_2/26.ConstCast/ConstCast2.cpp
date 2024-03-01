   
#include <iostream> 
using namespace std; 


 // this function is a library function
 // or wriiten by someone else for which you have only read-access 
int fun( int* ptr) 
{ 
    *ptr = 30;
    return (*ptr + 10); 
} 
  
int main(void) 
{ 
    const int val = 10; 
    //val =12;

    // int *ptr = &val; 
    const int *ptr = &val; 
    // cout << fun(ptr); 

   // it is just trying to remove the constantness from the pointer
    int *ptr1 = const_cast <int *>(ptr); 
    cout << fun(ptr1)<<endl; 

    *ptr1 = 50;  // this value is modified on to the same memory location
    cout<<*ptr1<<endl;
    cout<<val<<endl;

    cout<<&val << " " << ptr1 << endl;
    return 0; 
}