
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
    cout<<endl; 
}
void increment(auto& arr )
{
    for ( auto& element: arr)
    {
        ++element      ;
    }
}


int main()
{

    int arr[] {40, 50, 60, 70, 80, 90, 100};
    char cha_arr[] {'a','b','c','d'};   

    display(arr);    display(cha_arr);     
    increment(arr);    increment(cha_arr);    
    std::cout<<std::endl;  
    display(arr);    display(cha_arr);    
    
    return 0;
}