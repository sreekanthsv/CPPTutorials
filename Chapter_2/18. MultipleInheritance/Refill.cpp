#include "Refill.hpp"
#include <iostream>

Refill::Refill()
{
}

Refill::~Refill()
{
}
void Refill::whatColorAmI()
{
    std::cout<<typeid(*this).name()<<std::endl;
}
void Refill::Draw()
{
    std::cout<<"Drawing "<< lineColour<<" line" <<std::endl;
}
