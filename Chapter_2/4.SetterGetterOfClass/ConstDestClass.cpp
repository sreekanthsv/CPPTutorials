#include "ConstDestClass.hpp"
#include <iostream>


ConstDest::ConstDest() 
{
    std::cout<<"ConstDest created " << std::endl;
    std::cout<<"please Enter value for indetity " << std::endl;
    std::cin>>identity;
    std::cout<<"please Enter value for someSymbol " << std::endl;
    std::cin>>someSymbol;
}


ConstDest::ConstDest(int val) : identity(val) , someSymbol('C')// some term 
{
    std::cout<<"ConstDest paramter Constructor " << identity<< " " << someSymbol << std::endl;
}

ConstDest::ConstDest(int val, char symb) : identity(val) , someSymbol(symb)// some term 
{
    std::cout<<"ConstDest paramter Constructor with two params " << identity<< " "<< someSymbol<< std::endl;
}

ConstDest::~ConstDest()
{
    std::cout<<"ConstDest destroyed "<< identity<< " " << someSymbol << std::endl;
}

void ConstDest::printval()
{
    std::cout<<"ConstDest printval "<< identity<< " " << someSymbol <<std::endl;
}

