// Here we can see that more than one variables
// are being used without reporting any error.
// That is because they are declared in the
// different namespaces and scopes.
#include <iostream>
using namespace std;

// Global variable
static int val = 100;


// Variable created inside namespace
namespace first {
int val = 500;

/// enum
// struct
// clases
// fnctions
// clas templates

void func()
{

    //.....
}
}
 
namespace second {
int val = 500;
void func()
{

    //.....
}
/// enum
// struct
// clases
// fnctions
// clas templates
}
 
int main()
{
    // Local variable
    int val = 200;
 
    // These variables can be accessed from
    // outside the namespace using the scope
    // operator ::
    // using namespace first;
    cout << ::val << '\n';
    cout << first::val << '\n';
    cout << val << '\n';

    return 0;
}