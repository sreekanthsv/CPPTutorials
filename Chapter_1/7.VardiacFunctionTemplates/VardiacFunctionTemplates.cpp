// C++ program to demonstrate working of
// Variadic function Template
// How do you write your own printf
#include <iostream>
using namespace std;
 
// To handle base case of below recursive
// Variadic function Template
void print()
{
    cout<< endl;
}
 
// // Variadic function Template that takes
// // variable number of arguments and prints
// // all of them.

template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1 << " ";
 
    print(var2...);
}



int main()
{
    print(1, 2, 3.14,
          "Pass me any "
          "number of arguments",
          "I will print\n" );

    return 0;
}