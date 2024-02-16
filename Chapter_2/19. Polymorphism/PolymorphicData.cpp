#include <iostream>

 
//  base class declaration.
class BaseClass {
public:
    std::string color = "Black";

    virtual void display()  // Implementation
    {
        std::cout<< " BaseClass "<< typeid(*this).name()  <<std::endl;
    }
};
 
// inheriting Animal class.
class DerivedClass : public BaseClass {
public:
    std::string color = "Grey";

    void display()  // Implementation
    {
        std::cout<< " DerivedClass "<< typeid(*this).name()  <<std::endl;
    }
};

// void print(DerivedClass* pObj)
// {
//     std::cout<<pObj->color <<std::endl;
//     pObj->display();
// }

void print(BaseClass* pObj)
{
    std::cout<<pObj->color <<std::endl;
    pObj->display();
}

// Driver code
int main(void)
{

    // BaseClass baseobj;
    // std::cout<<baseobj.color <<std::endl;
    // baseobj.display() ;

    // DerivedClass derivedobj;
    // std::cout<<derivedobj.color <<std::endl;
    // derivedobj.display() ;

    BaseClass baseobj;
    DerivedClass derivedobj;
    print(&baseobj);
    print(&derivedobj);
}