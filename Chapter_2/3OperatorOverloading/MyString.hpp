#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <cstddef>

class MyString{
   private:
      std::size_t Size=0;

      char *pString=nullptr; // we have pointer

      // int filedesctiptor = -1; 
    
    public:
            MyString();  // default constructor

            MyString(const char* pInitial); // parameterized constructor 
            MyString(const char Char);   // parameterized contrucot


            MyString(const MyString& obj);

            MyString& operator= ( const MyString& obj );
            
            
            MyString operator+ (const MyString& obj );

            MyString operator<= (MyString& obj ); // this is much need for us // to enable sort operation 


            MyString& operator+= (MyString& obj );  // 


            // here we are overloading << for ostream class
            // and trying to declare the operator<< of ostream as a friend in MyString

            friend std::ostream& operator<< ( std::ostream& os, const MyString& s );

            ~MyString();

             size_t length() const;
            size_t size() const {return Size;} ;
};


#endif