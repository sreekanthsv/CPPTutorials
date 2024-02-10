#include "BaseClass.hpp"
#include <iostream>

BaseClass::BaseClass()
{
    std::cout<<"BaseClass created " <<baseData<<std::endl;
}

BaseClass::~BaseClass()
{
    std::cout<<"BaseClass destroyed "<<std::endl;
}


