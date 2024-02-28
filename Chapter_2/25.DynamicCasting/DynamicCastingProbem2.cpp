// C++ program demonstrate if there
// is no virtual function used in
// the Base class
#include <iostream>
using namespace std;
 
// Base class declaration
class Base {
public:
    virtual void print()
    {
        cout << "Base" << endl;
    }
};
 
// Derived Class 1 declaration
class Derived1 : public Base {
public:
    virtual void print()
    {
        cout << "Derived1" << endl;
    }
};
 
// Derived class 2 declaration
class Derived2 : public Base {
public:
    virtual  void print()
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


    // // Dynamic casting
    Derived2* dp1 = dynamic_cast<Derived2*>(bp);
    if (dp1 == nullptr)
        cout << "null" << endl;
    else
        dp1->print();


    Derived2 d2;

    Base* bp2 = dynamic_cast<Base*>(&d2);

    bp2->print();

    // // Dynamic casting
    Derived2* dp2 = dynamic_cast<Derived2*>(bp2);
    if (dp2 == nullptr)
        cout << "null" << endl;
    else
        dp2->print();
 
    return 0;
}