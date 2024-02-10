#ifndef BASECLASS_H
#define BASECLASS_H
#include <string>


class BaseClass{
    std::string baseData =" I am base variable";
public:
    BaseClass() ;

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

    virtual ~BaseClass();

protected:
    void some_protected(){}
  
};

#endif