#include "DummyClass.hpp"
#include <iostream>

dummy::dummy() 
{
    std::cout<<"Object with instance "  << ++static_int<< " created "<<std::endl;
    index = static_int;
}

dummy::dummy(int index) // index which is passed as a param
{  // secnd index which is part of the class/object already
    this->index = index;
    std::cout<<" Object with instance "  << ++static_int<< 
        " created and index value is "<< this->index <<std::endl;
}

dummy::~dummy()
{

    std::cout<<"Object with instance " <<  static_int-- <<" destroyed "<<std::endl;
}

void dummy::getMyInstanceNumber()
{
    std::cout<<"Object's instance  "<< index<< " out of "<< static_int<< " objects "<<std::endl;
}
void dummy::print_static_val(dummy* obj)
{
    std::cout<<"Test Code"<<std::endl;
   // this->getMyInstanceNumber();
    //getMyInstanceNumber(); 
    // // cannot acces the this pointer
    obj->getMyInstanceNumber();
    std::cout<<"Test Code"<<std::endl;
}

void dummy::destroy()
{
    // take backup 
    // release something else
    // if everything is good 
    // if something is bad you can through exception
    delete this;
}

