

// https://learn.microsoft.com/en-us/cpp/cpp/function-overloading?view=msvc-170
// https://en.wikipedia.org/wiki/Name_mangling

#include <iostream>

// Developer written functions names 
//int  f () { return 1; }
//int  f (int)  { return 0; }
//void g () { int i = f(), j = f(0); }

// Compiler Convertd the above function names as below
//int  __f_v () { return 1; }
//int  __f_i (int)  { return 0; } 
//void __g_v () { int i = __f_v(), j = __f_i(0); }


 // void  addints_i_i()
void addints(int a, int b)
{
  std::cout << "sum of two = " << (a + b)<<std::endl;
}
 
void addints(int a, int b, int c)
{
    std::cout  << "sum of three = " << (a + b + c)<< std::endl;
}
// void  addints_i_i_i()
int main()
{
    addints(10, 2);
    addints(5, 6, 4);
    addints('c', 2);  // void  addints_i_i()
    return 0;
}