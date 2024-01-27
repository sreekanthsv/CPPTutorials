#ifndef ConstDest_H
#define ConstDest_H

class ConstDest
{
   int identity;     // members   
   char someSymbol;
public:

    ConstDest() ;  // Default Constructor
    ConstDest(int val) ;  // parmeterised Constructor
    ConstDest(int val, char symb); // 2nd  parmeterised Constructor
    inline void setSymbol(char symb) { someSymbol= symb;};
    inline char getSymbol() { return someSymbol;};
    ~ConstDest(); 
    void printval();
};

#endif