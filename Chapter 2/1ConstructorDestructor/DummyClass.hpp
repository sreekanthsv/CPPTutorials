#ifndef DUMMY_H
#define DUMMY_H

class dummy
{
    int identity=0;     // members

    public:
    dummy(int val) ;  // member functions
    virtual ~dummy(); // 
    void printval();
};

#endif