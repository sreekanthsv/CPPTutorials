#include <iostream>
#include "MyString.hpp"



#if _CPP_STRING
int main()
{
  using namespace std;

  // constructor
  // parameterized constructor
  //  copy constructor
  // assignment operator

  //  operator overloading later


  string s1;  // contructor ()
  string s2(""),s3("Hello ") ;
  

  string s4=s3, s5;  
  s5=s4;


  cout<<s5<<endl;
}
#endif


  // constructor
  // parameterized constructor
  //  copy constructor
  // assignment operator

  //  operator overloading later

MyString myfunc(MyString tmp)
{
   // do something
    return tmp;
}

int main()
{
    using namespace std;
    MyString s1, s5 ;  // default constructor

    MyString s2(""),s3("Hello") , s6('x'), s7("tmp"); // parameterized constructor
    MyString s4=s3  ;  //  Copy Constructor

    s5=s4; // assignment operator with MyString as param is called
    cout<<s5<<endl ;
    cout<<s5.size()<<endl;
    cout<<s5.length()<<endl;


   //  without overrriding assignment operator  contents of member will become s5.pstring = s4.pstring, s5.size=s4.size
   //  delete  s4; 
   // s4.pstring = nullptr; 
   // std::cout<<s5;
   // 

    s4 =s4;

   // s9 = "hpe"; // assignment operator with const char*  as param is called
   // s10 = 3; s11 = 'x';
   // 

    s7=s4; // assignment operator 
    MyString s8 = myfunc(s7);
    //s9 = s7 +s6 ; /// tmp copy constructor is created




}

