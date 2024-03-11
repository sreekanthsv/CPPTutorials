#include <iostream>

// I want to create class which will have an array of size N
// But the data types can be any thing
// 



//Class template

// template <class T, class U, class V>
// class StackCLass{

//     T *ptr ; // should point to array of N bytes
//     U length ;
//   public:
//     ArrayClass(int size)
//     {
//         length = size;
//         ptr = new T[length];
//         for( U i=0 ; i< length ; i++)
//             ptr[i]= 65+ i;
//     }

//     void print()
//     {
//         for( U i=0 ; i< length ; i++)
//             std::cout<<static_cast<V>(ptr[i]) << " ";
//         std::cout<<std::endl;
//     }
     
// };


// arrray of fixed size on which 
// on which you add form top & remove from bottom

#define MAX_SIZE 10

template <class T, class U>
class Stack{

    T array[MAX_SIZE] ; // should point to array of N bytes
    int top =0;
    
  public:
    void push( T x)
    {
        if(top > MAX_SIZE)
            return;
        array[top++] =x;
    }

    T pop( )
    {
        if(top == -1)
            return -1;
        return array[--top];
    }

    void clear()
    {
        for(int i=0;i<MAX_SIZE;i++)
             std::cout<<U(pop())<<std::endl;   
    }

    void init()
    {
        for(int i=0;i<MAX_SIZE;i++)
            push(65+i);  
    }
     
};

// class Stack_int{

//     int array[MAX_SIZE] ; // should point to array of N bytes
//     int top =0;
    
//   public:
//     void push( int x)
//     {
//         if(top > MAX_SIZE)
//             return;
//         array[top++] =x;
//     }

//     int pop( )
//     {
//         if(top == -1)
//             return -1;
//         return array[--top];
//     }
     
// };


int main()
{
   // intArrayClass obj(5);
   // array of 5 ints
   // every int will have a value as per its index
  
  // int *array =new int[5];
  // some initialized code
   // some printconetent(array,5);

    // ArrayClass<int,int,char> obj(5);
    // obj.print();

    // ArrayClass<double,int,float> obj_d(5);
    // obj_d.print();

    // ArrayClass<char,int,char> obj_c(5);
    // obj_c.print();

    //Stack_int S_int;

    Stack<int,char> S_int;

    S_int.init();
    S_int.clear();

    Stack<char,int> S_char;

    S_char.init();
    S_char.clear();


    return 0; 
}

