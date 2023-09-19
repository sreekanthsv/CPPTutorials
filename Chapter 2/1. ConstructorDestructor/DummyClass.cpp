#include "DummyClass.hpp"
#include <iostream>

dummy::dummy(int val) : identity(val) // some term 
{
    std::cout<<"dummy created " << identity<<std::endl;
}

dummy::~dummy()
{
    std::cout<<"dummy destroyed "<< identity<<std::endl;
}

void dummy::printval()
{
    std::cout<<"dummy printval "<< identity<<std::endl;
}

