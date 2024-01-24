
#include <iostream>
#include <typeinfo>


int initiatiolizer=0;
struct my_struct {
    int value =initiatiolizer++;  
    friend std::ostream& operator<<(std::ostream& os, const my_struct& dt);
    
    my_struct& operator++()
    {
        return *this;
    }
};

std::ostream& operator<<(std::ostream& os, const my_struct& dt)
{
    return os;
}

void display(const auto& arr )
{
    for (const auto& element: arr)
    {
       if (typeid(element) == typeid(int))
          std::cout<< typeid(element).name() << " " << element << " ";   
        else if (typeid(element) == typeid(char))
          std::cout  << typeid(element).name() << " " << element << " ";  

        else if (typeid(element) == typeid(my_struct)) // tweek for certain data types 
          std::cout <<typeid(element).name() << " " << (((my_struct)element).value);  
    }
    std::cout<<std::endl; 
}
void increment(auto& arr )
{
    for ( auto& element: arr)
    {
       if (typeid(element) == typeid(my_struct))
           ++((my_struct&)element).value;         
        else
            ++element;
    }
}


int main()
{
    int arr[] {40, 50, 60, 70, 80, 90, 100};
    char cha_arr[] {'a','b','c','d'}; 
    my_struct array_of_struct[3];    

    display(arr);    display(cha_arr);     display(array_of_struct);
    increment(arr);    increment(cha_arr);     increment(array_of_struct);
    std::cout<<std::endl; 
    display(arr);    display(cha_arr);     display(array_of_struct);
    
    return 0;
}