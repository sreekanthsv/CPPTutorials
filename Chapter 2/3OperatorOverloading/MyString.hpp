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
            MyString operator+ (MyString& obj );
            MyString& operator+= (MyString& obj );
            friend std::ostream& operator<< ( std::ostream& os, const MyString& s );

            ~MyString();

            const size_t length();
            size_t size(){return Size;};
};


#endif