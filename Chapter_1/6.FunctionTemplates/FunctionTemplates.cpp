// C++ program to demonstrate working of
// Variadic function Template
#include <iostream>
using namespace std;
 
template <typename T>
void smallestOf(T& var1)
{
    auto smallest =var1[0]; 
    for (auto& element: var1)
    {
      if ( element <  smallest )
      {
        smallest = element;
      }
    }
    cout << smallest <<endl;
}



int main()
{
    int arr[] {41, 5, 60, 7, 80, 2, 100};
    char cha_arr[] {'a','b','c','d'}; 
    double arr2[] {41.0, 5, 60, 7, 80, -22, 100.0};

    smallestOf(arr);
    smallestOf(cha_arr);
    smallestOf(arr2);
 
    return 0;
}