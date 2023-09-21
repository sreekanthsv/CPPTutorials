#ifndef REDLINE_H
#define REDLINE_H
#include "Line.hpp"

class RedLine :public virtual Line
{
    public:
    RedLine() ;
    virtual ~RedLine();
};

#endif