#ifndef DUMMY_H
#define DUMMY_H

class dummy
{
    inline static int static_int=0;     // members
    int index;     // members
public:
    dummy() ;  // member functions
    dummy(int index) ;
    virtual ~dummy(); // 
    static void print_static_val(dummy *obj); // cannot acces the this pointer
    void getMyInstanceNumber();
    void destroy();
};

#endif