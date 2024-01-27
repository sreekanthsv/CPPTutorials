#include <iostream>
#include "MyString.hpp"



int main()
{
    using namespace std;


    MyString s1("Hello"),s2(" World"), s4(" !!"); 

    MyString s3 = s1+s2; // + operator 0verloading

    // new object to be created s3 
    // s1 will be and object which can be accessed via this pointer
    // s2 will be the object which will be acceses as a parameter obj.

    
    cout<<s3<<endl;
    cout<<s3.length()<<endl;
    cout<<s3.size()<<endl;

    MyString s5 = s1+s2 +s4; // + operator 0verloading

    // new object to be created s5 
    // s1 will be and object which can be accessed via this pointer
    // s2 will be the object which will be acceses as a parameter obj.
    // temp object is created
    // the temp is reference via this
    // and s4 will be references as obj


   // Making changes to self
    s3+=s3;        // += operator overloading
    cout<<s3<<endl;
    cout<<s3.length()<<endl;
    cout<<s3.size()<<endl;

}

