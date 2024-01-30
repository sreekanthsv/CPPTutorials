 #include "StaticFunctionInClass.hpp"
#include <iostream>


StaticFunctionInClass::StaticFunctionInClass() 
{
    StaticFunctionInClass::instanceCounter++;
    std::cout<<"StaticFunctionInClass created " << std::endl;
    //std::cout<<"please Enter value for indetity " << std::endl;
   // std::cin>>identity;
   identity=3;
    //std::cout<<"please Enter value for someSymbol " << std::endl;
    someSymbol='T';
    //std::cin>>someSymbol;
}


StaticFunctionInClass::StaticFunctionInClass(int val) : identity(val) , someSymbol('C')// some term 
{
    StaticFunctionInClass::instanceCounter++;
    std::cout<<"StaticFunctionInClass paramter Constructor " << identity<< " " << someSymbol << std::endl;
}

StaticFunctionInClass::StaticFunctionInClass(int val, char symb) : identity(val) , someSymbol(symb)// some term 
{
    StaticFunctionInClass::instanceCounter++;
    std::cout<<"StaticFunctionInClass paramter Constructor with two params " << identity<< " "<< someSymbol<< std::endl;
}

StaticFunctionInClass::~StaticFunctionInClass()
{
    std::cout<<"StaticFunctionInClass destroyed "<< identity<< " " << someSymbol << 
        " " << PI << " " << somechar << " "<< (int)result <<
        " instanceCounter " << --StaticFunctionInClass::instanceCounter << std::endl;
}

void StaticFunctionInClass::printval()
{
    std::cout<<"StaticFunctionInClass printval "<< identity<< " " << someSymbol << " " << PI <<  std::endl;
}

void StaticFunctionInClass::addChars() const
{
    result = someSymbol + somechar;
}


