#include "MyString.hpp"
#include <cstring>

MyString::MyString():Size(0),pString(nullptr){}


MyString::MyString(const char *pChar)
{
    this->Size = strlen(pChar)+1;
    
    try{
        pString = new char[Size];
        strcpy(pString,pChar);
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Allocation failed: " << e.what() << '\n';
    }
}


MyString::MyString(const MyString& obj): MyString()
{
    
    Size = obj.Size;
    // pString = obj.pString; to avoid this we do below
    
    try{
        pString = new char[Size];
        strcpy(pString,obj.pString);
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Allocation failed: " << e.what() << '\n';
    }
}

MyString::MyString(const char Char): MyString() 
{
    
    Size = sizeof(char) +1;
    
    try{
        pString = new char[Size];
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Allocation failed: " << e.what() << '\n';
    }

    pString[0] = Char;
	pString[1]= '\0';
}


 MyString& MyString::operator= (  const MyString& obj )
 {
    if( this == &obj) // 
      return *this;   // 

   // 1) check is the object has previously assigned data

    if(obj.Size > Size) // if i need to assign more contents
    {
         if (pString != nullptr)
             delete [] pString;

        try{
            pString = new char[obj.Size];
            Size = obj.Size;
        }
        catch (const std::bad_alloc& e)
        {
            std::cout << "Allocation failed: " << e.what() << '\n';
        }
    }
    for (size_t i = 0 ; i < obj.Size ; i++)
    {
        pString[i] = obj.pString[i];
	}

    pString[ obj.Size-1] ='\0';

    return *this;
}

std::ostream& operator <<( std::ostream& os, const MyString& s )
{
	for (size_t i = 0 ; i < s.Size ; i++)
        os << s.pString[i];
    return os;
}

MyString::~MyString()
{
    if(pString == nullptr)
     return;
    
    delete [] pString;
}

 MyString& MyString::operator+ ( const MyString & obj )
 {
    // TODO
    return *this;
}

size_t MyString::length()
{
    return strlen(pString);
}