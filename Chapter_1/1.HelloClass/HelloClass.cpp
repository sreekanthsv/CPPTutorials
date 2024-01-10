#include <iostream>


// Main should always retun something it cannot be void in c++
// Main cannot be called again and again 


int func()
{
    //if(condition)
      //  return 0;

   // ==>>  what happen when control reach here
   return 0;
}
int main()  // why int return type ..?
{
    //using namespace std;   // local namespacing ..?

    std::cout<<"Hello World"<<std::endl;    

    return 0; // what happens if not returned
}