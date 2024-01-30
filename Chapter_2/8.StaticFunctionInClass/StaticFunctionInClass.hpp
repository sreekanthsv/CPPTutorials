#ifndef StaticFunctionInClass_H
#define StaticFunctionInClass_H

class StaticFunctionInClass
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

    StaticFunctionInClass() ;  // Default Constructor
    StaticFunctionInClass(int val) ;  // parmeterised Constructor
    StaticFunctionInClass(int val, char symb); // 2nd  parmeterised Constructor
    
    inline void setSymbol(char symb)
    { 
        someSymbol = symb; 
    }

    inline char getSymbol() const 
    { 
        return someSymbol;
    }
    inline double getPI(){ return PI ; }
    ~StaticFunctionInClass(); 

    void printval();
    void addChars() const ;

    inline static int getNumberOfInstances() 
    // Like Global function, 
    // you can call it without an instance of the class being created
    {
         return instanceCounter;
    };
};

#endif