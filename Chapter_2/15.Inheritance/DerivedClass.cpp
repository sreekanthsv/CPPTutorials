#include "DerivedClass.hpp"
#include <iostream>

DerivedClass::DerivedClass()
{
    std::cout<<"DerivedClass created "<< derivedData <<std::endl;
}

DerivedClass::~DerivedClass()
{
    std::cout<<"DerivedClass destroyed "<<std::endl;
}


void DerivedClass::setData(std::string data)
{
    derivedData = data;
    setBaseData( data );
}

std::string DerivedClass::getData()
{
    return derivedData + getBaseData() ;
}