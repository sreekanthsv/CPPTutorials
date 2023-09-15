#include "DummyClass.hpp"
#include <iostream>

dummy::dummy(int val) : identity(val)
{
    std::cout<<"dummy created " << identity<<std::endl;
}

dummy::~dummy()
{
    std::cout<<"dummy destroyed "<< identity<<std::endl;
}

