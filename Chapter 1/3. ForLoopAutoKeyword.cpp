
#include <iostream>
#include <typeinfo>


void display(auto& arr )
{
    using namespace std; 
    cout<<"Initial initialization " <<std::endl;
    for (auto element: arr){
        cout <<element << " ";
    }
    std::cout<<std::endl;    

    cout<<"can we change the contents " <<std::endl;
    for (auto element: arr){
        cout << element++ << " ";
    }
    std::cout<<std::endl;    
    cout<<"contents after we try to change " <<std::endl;
    for (auto element: arr){
        cout << element << " ";
    }
    std::cout<<std::endl;    
}
 
int main()
{

    using namespace std; 
    int arr[] {40, 50, 60, 70, 80, 90, 100};        
    char cha_arr[] {'a','b','c','d'}; 
    
    display(arr);
    display(cha_arr);
    
    return 0;
}