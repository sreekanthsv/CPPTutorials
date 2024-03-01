  
// CPP program to demonstrate working of 
// reinterpret_cast
#include <iostream>
using namespace std;
 




int main()
{
    int* p = new int('c');
   char* ch = reinterpret_cast<char*>(p);
    // char* ch = (char*)(p);
    cout << "typeid of p " << typeid(p).name() << '\n'; 
    cout << "typeid of ch " << typeid(ch).name() << '\n'; 

    cout << *p << endl;
    cout << *ch << endl;
    cout << p << endl;
    cout << ch << endl;

    ch++;
    cout << *ch << endl;
    cout << ch << endl;


    // const int a1 = 40; 
    // const int* b1 = &a1; 
    
    // const char* c2 = const_cast <const char *> (b1); // compiler error 
    // const  char* c3 = reinterpret_cast <const char *> (b1); // compiler error 
    // cout << *p << endl;
    // cout << *ch << endl;
    // cout << p << endl;
    // cout << ch << endl;
    return 0;
}