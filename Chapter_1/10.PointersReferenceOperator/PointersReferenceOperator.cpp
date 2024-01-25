/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

/*Restrictions to References
There are a number of restrictions that apply to references. You cannot reference another
reference. Put differently, you cannot obtain the address of a reference. You cannot create
arrays of references. You cannot create a pointer to a reference. You cannot reference
a bit-field.
A reference variable must be initialized when it is declared unless it is a member
of a class, a function parameter, or a return value. Null references are prohibited.
*/
// void sorting( auto& arr )
// {
//   using namespace std;    
//   auto tmp = arr[0]
//   for ( auto index =0 ; index< sizeof(arr) ; index++)
//   {      
       
//   }
//   std::cout<<std::endl; 
// }

void display_viaReference( auto& arr )
{
  using namespace std;    
  for ( auto& element : arr)
  {      
    cout <<element << " ";     
  }
  std::cout<<std::endl; 

}
void display_viaConst_Reference( const auto& arr )
{
  using namespace std;    
  for ( auto& element : arr)
  {      
    cout <<element << " ";     
  }
  std::cout<<std::endl; 
}



void display_viaPointer( char* arr , size_t count)
{
  using namespace std;    
  if(!arr || count == 0)
    return;
  
  for ( auto index =0 ; index< count ; index++)
  {      
    cout <<arr[index] << " ";     
  }
  std::cout<<std::endl; 
}

void display_viaReference( char& arr )
{
  using namespace std;    
  
  {      
    cout <<arr << " " << ++arr <<endl;   
      
  }
  std::cout<<std::endl; 
}


int main()
{
    char cha_arr[] {'a','b','c','d'}; 
   
   // std::cout <<why <<std::endl;   
    display_viaPointer(cha_arr,sizeof(cha_arr));
    // Compile time pointer check is not there on pointers
    display_viaPointer(NULL,sizeof(cha_arr)); 
    
    // using namespace std; 
    int index =0, some_thervar=1; 
    int &Refer_index = index; //  create a reference to index 
    // // Refer_index = &index // not allowed
    // // Refer_index = &some_thervar; // not allowed to re-assign to another variable 



    std::cout << index << " " << Refer_index <<std::endl;  // lets see both prints same values
    index++;  // 

    std::cout << index << " " << Refer_index <<std::endl; // lets see both prints same values

    Refer_index++;  // 

    std::cout << index << " " << Refer_index <<std::endl; // lets see both prints same values

    char why = 'y';
    display_viaReference(why);
    display_viaReference(cha_arr);
    display_viaConst_Reference(cha_arr);
    // display_viaReference(NULL);
      //  char cha_arr_aryy[] {'1','e','c','d'}; 
    // sorting(cha_arr_aryy); // do soting of char arrays
    // sorting(int_array)
    // write a function template 
    return 0;
}