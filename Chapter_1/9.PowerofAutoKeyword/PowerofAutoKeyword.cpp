/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <typeinfo>


void display(const auto& arr )
{
  using namespace std;    
  for (const auto& element: arr)
  {
      if (typeid(element) == typeid(int))
        cout <<" int "<< element << " ";   
      else if (typeid(element) == typeid(char))
        cout <<" char " << element << " ";  
  }
  std::cout<<std::endl; 
}

void displayOptimized(const auto& arr )
{
  using namespace std;    
    for (const auto& element: arr)
    {      
      cout <<typeid(element).name() << " "<<  element << " ";     
    }
    std::cout<<std::endl; 
}

void smallestOf(auto& var1)
{
    auto smallest =var1[0]; 
    for (auto& element: var1)
    {
      if ( element <  smallest )
      {
        smallest = element;
      }
    }
    std::cout << smallest <<std::endl;
}


// void addArray(const auto& arr )
// {
//   /// ....
//   // print result
// }


int main()
{
    int arr[] {40, 50, 60, 70, 80, 9, 100};
    char cha_arr[] {'d','b','z','d'}; 
    smallestOf(arr);
    smallestOf(cha_arr);
    display(arr);
    display(cha_arr);
    displayOptimized(arr);
    displayOptimized(cha_arr);

    return 0;
}