#ifndef DUMMY_H
#define DUMMY_H

class dummy
{
    inline static int identity=0;     // members

    public:
    dummy() ;  // member functions
    virtual ~dummy(); // 
    void printval();
};

#endif