#ifndef StaticVariableInClass_H
#define StaticVariableInClass_H

class StaticVariableInClass
{
   char somechar;
   int identity;     // members   
   char someSymbol ;
   inline static const  double PI = 3.14 ;
   //inline static int fd  = 0;
   inline static int instanceCounter = 0 ;
   // some temp variable 
   char mutable result = 0;

public:

    StaticVariableInClass() ;  // Default Constructor
    StaticVariableInClass(int val) ;  // parmeterised Constructor
    StaticVariableInClass(int val, char symb); // 2nd  parmeterised Constructor
    
    inline void setSymbol(char symb)
    { 
        someSymbol = symb; 
    }

    inline char getSymbol() const 
    { 
        return someSymbol;
    }
    inline double getPI(){ return PI ; }
    ~StaticVariableInClass(); 

    void printval();
    void addChars() const ;
};

#endif