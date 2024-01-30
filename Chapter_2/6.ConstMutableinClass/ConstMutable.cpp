#include "ConstMutable.hpp"
#include <iostream>


ConstMutable::ConstMutable() 
{
    std::cout<<"ConstMutable created " << std::endl;
    std::cout<<"please Enter value for indetity " << std::endl;
    std::cin>>identity;
    std::cout<<"please Enter value for someSymbol " << std::endl;
    std::cin>>someSymbol;
}


ConstMutable::ConstMutable(int val) : identity(val) , someSymbol('C')// some term 
{
    std::cout<<"ConstMutable paramter Constructor " << identity<< " " << someSymbol << std::endl;
}

ConstMutable::ConstMutable(int val, char symb) : identity(val) , someSymbol(symb)// some term 
{
    std::cout<<"ConstMutable paramter Constructor with two params " << identity<< " "<< someSymbol<< std::endl;
}

ConstMutable::~ConstMutable()
{
    std::cout<<"ConstMutable destroyed "<< identity<< " " << someSymbol << 
        " " << PI << " " << somechar << " "<< (int)result <<std::endl;
}

void ConstMutable::printval()
{
    std::cout<<"ConstMutable printval "<< identity<< " " << someSymbol << " " << PI <<  std::endl;
}

void ConstMutable::addChars() 
{
    result = someSymbol + somechar;
}


