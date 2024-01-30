#ifndef ConstMutable_H
#define ConstMutable_H

class ConstMutable
{
   char somechar;
   int identity;     // members   
   char someSymbol ;
   inline static const  double PI = 3.14 ;

   // some temp variable 
   char mutable result = 0;

public:

    ConstMutable() ;  // Default Constructor
    ConstMutable(int val) ;  // parmeterised Constructor
    ConstMutable(int val, char symb); // 2nd  parmeterised Constructor
    
    inline void setSymbol(char symb)
    { 
        someSymbol = symb; 
    }

    inline char getSymbol() const 
    { 
        return someSymbol;
    }
    inline double getPI(){ return PI ; }
    ~ConstMutable(); 

    void printval();
    void addChars()  ;
};

#endif