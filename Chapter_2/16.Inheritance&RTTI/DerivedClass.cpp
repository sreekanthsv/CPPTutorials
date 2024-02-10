#include "DerivedClass.hpp"
#include <iostream>

DerivedClass::DerivedClass()
{
    std::cout<<"Derived created " <<std::endl;
}

DerivedClass::~DerivedClass()
{
    std::cout<<"Derived destroyed "<<std::endl;
}
