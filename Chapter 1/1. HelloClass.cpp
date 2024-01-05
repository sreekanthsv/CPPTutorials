#include <iostream>


// Main should always retun something it cannot be void in c++
// Main cannot be called again and again 


int func()
{
    if(condition)
        return 0;

   // ==>>  what happen when control reach here
}
int main()  // why int return type ..?
{
    using namespace std;   // local namespacing ..?

    cout<<"Hello class"<<endl;
    

    return 0; // what happens if not returned
}