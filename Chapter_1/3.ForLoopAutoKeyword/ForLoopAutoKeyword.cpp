
#include <iostream>
#include <typeinfo>


void display(auto& arr )
{
    using namespace std; 
    cout<<"Initial initialization " <<std::endl;


    for (auto element : arr){ 
        // print the contents of array  
    // create a variable and copy contentes
        cout <<element << " ";
    }
    std::cout<<std::endl;    

    cout<<"can we change the contents " <<std::endl;

    for (auto& element: arr){ 
        // increment the contents of array  : 
    //get address of the each element and do operation on it
        cout << ++element << " ";
    }
    std::cout<<std::endl;    
    cout<<"contents after we try to change " <<std::endl;
    for (auto& element: arr){
        cout << element++ << " ";
    }
    std::cout<<std::endl;    
}
 

// declaration of arrays
// finding lenth of arrays
// how pass an array in C++
// how to modify the contents array with & 
// function overloading  : 
// why is it because of concept name mangling 
int main()
{
    using namespace std; 
    int arr[] {40, 50, 60, 70, 80, 90, 100};        
    char cha_arr[] {'a','b','c','d'}; 
    
    display(arr);
    display(cha_arr); 
    return 0;
}