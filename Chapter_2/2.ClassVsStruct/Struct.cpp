#include <iostream>

class MyStruct{
// all variables, pointer, structure are called members
// public , private, protected
public:
    int index =1;

    inline static int static_member  = 10 ;


// all FUNCTIONS  are called members functions 
// not supported in C 
    int mem_function() {
        member_v=1;
        return member_v;
    }


    int member_v = 6; 
};


// in c++
struct customerStruct : public MyStruct
{
    

};

int main()
{

    MyStruct variables , variables_2 ; 

    std::cout << variables.static_member<< " "<<variables.member_v 
            << " "<<variables_2.member_v << std::endl;

    return 0;
}

