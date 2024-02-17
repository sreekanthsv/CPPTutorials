#include <iostream>

 
//  base class declaration.
//  Abstract class 
class plane {
public:
    // variables
    // fdfaf 
    // sfwe 
    // BY Making the virtual  function as pure
    virtual void perimeter() =0;    
}; // incomplete


 
// inheriting Animal class.
class Traingle : public plane {

    int side[3] ={0,0,0};


public:
    Traingle(int x, int y, int z){
        side[0]=x;side[1]=y;side[2]=z;
    }
    void perimeter()  // Implementation
    {
        std::cout<< side[0] + side[1] + side[2]   <<std::endl;
    }
};

class Square : public plane {
public:
    int side =0;

    Square(int x):side(x)
    {}

    void perimeter()  // Implementation
    {
        std::cout<< side *4  <<std::endl;
    }
};


class Line : public plane {
public:
    int side =0;

    Line(int x):side(x)
    {}

    void perimeter()  // Implementation
    {
        std::cout<< side  <<std::endl;
    }

};

// void print(DerivedClass* pObj)
// {
//     std::cout<<pObj->color <<std::endl;
//     pObj->display();
// }

void print_perimeer(plane* pObj)
{
    pObj->perimeter();
}

// Driver code
int main(void)
{

    Traingle baseobj(2,3,4);
    Square derivedobj(5);
    Line line (100);

    plane *obj ;

    print_perimeer(&baseobj);
    print_perimeer(&derivedobj);
    print_perimeer(&line);
}