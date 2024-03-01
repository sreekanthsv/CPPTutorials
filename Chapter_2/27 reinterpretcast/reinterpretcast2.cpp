  
// CPP program to demonstrate working of 
// reinterpret_cast
#include <iostream>
using namespace std;
 
 struct dummy{
    char a='8';
};

void function_in_cpp(void *ptr)
{

   char* ch = reinterpret_cast<char*>(ptr);
   cout<< *ch<<endl;

   int* pi = reinterpret_cast<int*>(ptr);
   cout<< *pi<<endl;

   dummy* pSt = reinterpret_cast<dummy*>(ptr);
   cout<< pSt->a<<endl;

}

// void function_in_cpp(char *ptr)
// {

//    char* ch = reinterpret_cast<char*>(ptr);
//    cout<< *ch<<endl;

//    int* pi = reinterpret_cast<int*>(ptr);
//    cout<< *pi<<endl;

// }
// void function_in_cpp(int *ptr)
// {

//    char* ch = reinterpret_cast<char*>(ptr);
//    cout<< *ch<<endl;

//    int* pi = reinterpret_cast<int*>(ptr);
//    cout<< *pi<<endl;

// }



// c code calling c++ function
int main()
{
    int* p = new int('c');
    dummy obj;
    // to chare

 
    // function_in_cpp(p);
    function_in_cpp(&obj);

    return 0;
}