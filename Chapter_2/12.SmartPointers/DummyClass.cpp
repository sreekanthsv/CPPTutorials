#include "DummyClass.hpp"
#include <iostream>

dummy::dummy() 
{
    std::cout<<"Object with instance "  << ++identity<< " created "<<std::endl;
}

dummy::~dummy()
{
    std::cout<<"Object with instance " <<  identity-- <<" destroyed "<<std::endl;
}

void dummy::printval()
{
    std::cout<<"Object's instance  "<< identity<<std::endl;
}

