#ifndef BASECLASS_H
#define BASECLASS_H
#include <string>
#include <iostream>

class BaseClass{
    std::string baseData =" I am base variable";

    BaseClass() ;


public:
   

    void setBaseData(std::string data)
    {
        // you can check for some null check and throw warning
        // some limit checks etc...
        baseData = data;
    }
    std::string  getBaseData()
    {
        // you can check is it initialized 
        return baseData;
    };
    friend void friend_function();
    friend class SomeClass;
private :   virtual ~BaseClass();

private :   BaseClass(std::string data ) { 
        std::cout<< " string based constructor" << std::endl;
        setBaseData(data);
    };


protected :   BaseClass(int intttt ) { 
        std::cout<< " int based constructor" << std::endl;
        setBaseData( " something" + std::to_string(intttt));
    };

public :   BaseClass(char c ) { 
        std::cout<< " char based constructor" << std::endl;
        setBaseData( " something" + std::to_string(c));
    };
protected:
    void some_protected(){}

//private:

  
};

class SomeClass{

    BaseClass instance;
public:
    SomeClass(){}
    void make_a_base_functionCall()
    {
        instance.getBaseData();
    }

};

#endif