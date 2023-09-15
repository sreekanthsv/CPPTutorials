/******************************************************************************
https://www.asciitable.com/
*******************************************************************************/
#include <iostream>
using namespace std;
class Person{
public:
    void PrintAge(){
        std::cout<<Age<<std::endl;
    }
    void PrintName(){
        std::cout<<Name<<std::endl;
    }
    void PrintInitial(){
        std::cout<<Initial<<std::endl;
    }
    void Beep(){
        std::cout<<beep<<std::endl;
    }
    int Age =36;
    char Initial = 'S';
    char Name[20] = "Sreekanth";
    char beep = '\a';
};

int main()
{
    Person Teacher;
    Teacher.PrintAge();
    Teacher.PrintName();
    Teacher.PrintInitial();
    Teacher.Beep();
    return 0;
}