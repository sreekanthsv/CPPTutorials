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
     std::cout<<"Copy const called"<<std::endl;   
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
    os << s.pString;
    return os;
}



MyString::~MyString()
{
    if(pString == nullptr)
     return;
    
    delete [] pString;
}

 MyString MyString::operator+ (const MyString& obj )
 {
    size_t tmp_length = length() + obj.length(); 
    
    std::cout<<"overload called"<<std::endl;

    if(tmp_length<=0)
    {
         MyString empty; 
        return empty;
    }

    char *tmp_pString = NULL;
    try{
        tmp_pString= new char[tmp_length+1];
        strcpy(tmp_pString,pString);
        strcat(tmp_pString,obj.pString);
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Allocation failed: " << e.what() << '\n';
    }

    MyString tmp(tmp_pString);        
    return tmp;
}

 size_t MyString::length() const
{
    return strlen(pString);
}


// void * operator new(size_t size)
// {
//     cout<< "Overloading new operator with size: " << size << endl;
//     void * p = ::operator new(size);
//     //void * p = malloc(size); will also work fine
    
//     return p;
// }

// void operator delete(void * p)
// {
//     cout<< "Overloading delete operator " << endl;
//     free(p);
// }


 MyString& MyString::operator+= ( MyString& obj )
 {
    size_t tmp_length = length() + obj.length(); 

    std::cout << "+= overloaded" << std::endl;
    if(tmp_length<=0)
    {
        return *this;
    }

    char *tmp_pString = NULL;
    try{
        tmp_pString= new char[tmp_length+1];
        strcpy(tmp_pString,pString);
        strcat(tmp_pString,obj.pString);
        delete [] pString;
        Size = tmp_length+1;

        pString= new char[Size];
        strcpy(pString,tmp_pString);
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Allocation failed: " << e.what() << '\n';
    }

    return *this;
}

