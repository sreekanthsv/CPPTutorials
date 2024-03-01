#include <iostream> 
using namespace std; 
  
int main(void) 
{ 
    int a1 = 40; 
    const int* b1 = &a1; 
    char* c1 = (char *) (b1); // compiler error 
    //char* c2 = const_cast <char *> (b1); // compiler error 
    *c1 = 'A'; 

    cout<< " b1 " << b1 << " "<< *b1<<endl;
    cout<< " c1 " << c1<< " " << *c1<< endl;
    return 0; 
} 