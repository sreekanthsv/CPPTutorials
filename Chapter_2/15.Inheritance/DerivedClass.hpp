#ifndef DERIVED_H
#define DERIVED_H
#include "BaseClass.hpp"

// public , private , protected
//


class DerivedClass : public BaseClass
{
    std::string derivedData = " I am a Derived variable";
public:
    DerivedClass();
    void setData(std::string data);
    std::string getData();
    std::string getDerivedData(){ 
        some_protected();
        return derivedData;
    };  
    virtual ~DerivedClass();
};


class SecondDerivedClass : public DerivedClass
{
    std::string SecondderivedData = " I am a Derived variable";
public:
    SecondDerivedClass();
    //void SetSecondOrder(std::string data);
    std::string getSecondOrderData(){
        return SecondderivedData + getDerivedData() + getBaseData();
    };
    virtual ~SecondDerivedClass();
};

class SomeClass 
{
    std::string SecondderivedData = " I am a Derived variable";
    DerivedClass Dobj; // yuu can call only public functions
public:
    SomeClass();
    //void SetSecondOrder(std::string data);
    std::string getSecondOrderData(){
          //  Dobj.some_protected(); 
          // acheivable by declaring a friend class SomeClass  
          // as friend or SomeClass::getSecondOrderData

        return SecondderivedData +  Dobj.getBaseData();
    };
    virtual ~SomeClass();
};



// derived members = base members +  mebers added in derived class
#endif