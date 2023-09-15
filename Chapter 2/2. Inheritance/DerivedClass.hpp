#ifndef DERIVED_H
#define DERIVED_H
#include "BaseClass.hpp"

class DerivedClass :public virtual BaseClass
{
    public:
    DerivedClass() ;
    virtual ~DerivedClass();
};

#endif