// C++ program to demonstrate working of
// Variadic function Template
#include <iostream>

 
// To handle base case of below recursive
// Variadic function Template
auto addcontents()
{
    return 0;
}
 
// Variadic function Template that takes
// variable number of arguments and addcontentss
// all of them.
template <typename T, typename... Types>
T addcontents(T var1, Types... var2)
{
   return  addcontents(var2...) + var1 ;
}
 
int main()
{
    using namespace std;
    cout << addcontents(1, 2, 3, 'c', -1, 'f')<< endl;
    cout << addcontents(1, 'c', 3)<< endl;
    cout << addcontents( 'c', 3, 'd')<< endl;
     
    return 0;
}