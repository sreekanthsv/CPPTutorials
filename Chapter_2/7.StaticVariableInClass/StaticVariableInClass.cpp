 #include "StaticVariableInClass.hpp"
#include <iostream>


StaticVariableInClass::StaticVariableInClass() 
{
    StaticVariableInClass::instanceCounter++;
    std::cout<<"StaticVariableInClass created " << std::endl;
    //std::cout<<"please Enter value for indetity " << std::endl;
   // std::cin>>identity;
   identity=3;
    //std::cout<<"please Enter value for someSymbol " << std::endl;
    someSymbol='T';
    //std::cin>>someSymbol;
}


StaticVariableInClass::StaticVariableInClass(int val) : identity(val) , someSymbol('C')// some term 
{
    StaticVariableInClass::instanceCounter++;
    std::cout<<"StaticVariableInClass paramter Constructor " << identity<< " " << someSymbol << std::endl;
}

StaticVariableInClass::StaticVariableInClass(int val, char symb) : identity(val) , someSymbol(symb)// some term 
{
    StaticVariableInClass::instanceCounter++;
    std::cout<<"StaticVariableInClass paramter Constructor with two params " << identity<< " "<< someSymbol<< std::endl;
}

StaticVariableInClass::~StaticVariableInClass()
{
    std::cout<<"StaticVariableInClass destroyed "<< identity<< " " << someSymbol << 
        " " << PI << " " << somechar << " "<< (int)result <<
        " instanceCounter " << --StaticVariableInClass::instanceCounter << std::endl;
}

void StaticVariableInClass::printval()
{
    std::cout<<"StaticVariableInClass printval "<< identity<< " " << someSymbol << " " << PI <<  std::endl;
}

void StaticVariableInClass::addChars() const
{
    result = someSymbol + somechar;
}


