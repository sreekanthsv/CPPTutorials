#include <iostream>
#include "MyString.hpp"



int main()
{
    using namespace std;

    MyString s1("Hello"),s2(" World");
    
    MyString s3 = s1+s2;
    
    cout<<s3<<endl;
    cout<<s3.length()<<endl;
    cout<<s3.size()<<endl;

    //s3+=s3;

}

