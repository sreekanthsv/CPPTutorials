// C++ program demonstrate if there
// is no virtual function used in
// the Base class
#include <iostream>
using namespace std;
 
// Base class declaration
class Base {
public:
    void print()
    {
        cout << "Base" << endl;
    }
};
 
// Derived Class 1 declaration
class Derived1 : public Base {
public:
    void print()
    {
        cout << "Derived1" << endl;
    }
};
 
// Derived class 2 declaration
class Derived2 : public Base {
public:
    void print()
    {
        cout << "Derived2" << endl;
    }
};
 
// Driver Code
int main()
{
    Derived1 d1;
 
    // Base class pointer hold Derived1
    // class object
    Base* bp = dynamic_cast<Base*>(&d1);

    bp->print();
 
    Derived1* dp = dynamic_cast<Derived1*>(&d1);
    dp->print();

 
    return 0;
}