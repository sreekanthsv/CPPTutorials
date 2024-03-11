#include <iostream>

// I want to create class which will have an array of size N
// But the data types can be any thing
// 

class intArrayClass{

    int *ptr ; // should point to array of N bytes
    int length ;
  public:
    intArrayClass(int size)
    {
        length = size;
        ptr = new int[length];
        for( int i=0 ; i< length ; i++)
            ptr[i]= i;
    }

    void print()
    {
        for( int i=0 ; i< length ; i++)
            std::cout<<ptr[i] << " ";
        std::cout<<std::endl;
    }
     
};

class charArrayClass{

    char *ptr ; // should point to array of N bytes
    int length ;
  public:
    charArrayClass(int size)
    {
        length = size;
        ptr = new char[length];
        for( int i=0 ; i< length ; i++)
            ptr[i]= i;
    }

    void print()
    {
        for( int i=0 ; i< length ; i++)
            std::cout<<ptr[i] << " ";
        std::cout<<std::endl;
    }
     
};

class doubleArrayClass{

    double *ptr ; // should point to array of N bytes
    int length ;
  public:
    doubleArrayClass(int size)
    {
        length = size;
        ptr = new double[length];
        for( int i=0 ; i< length ; i++)
            ptr[i]= i;
    }

    void print()
    {
        for( int i=0 ; i< length ; i++)
            std::cout<<ptr[i] << " ";
        std::cout<<std::endl;
    }
     
};


//Class template

template <class T, class U, class V>
class ArrayClass{

    T *ptr ; // should point to array of N bytes
    U length ;
  public:
    ArrayClass(int size)
    {
        length = size;
        ptr = new T[length];
        for( U i=0 ; i< length ; i++)
            ptr[i]= 65+ i;
    }

    void print()
    {
        for( U i=0 ; i< length ; i++)
            std::cout<<static_cast<V>(ptr[i]) << " ";
        std::cout<<std::endl;
    }
     
};


// class ArrayClass_int{

//     int *ptr ; // should point to array of N bytes
//     int length ;
//   public:
//     ArrayClass_int(int size)
//     {
//         length = size;
//         ptr = new int[length];
//         for( int i=0 ; i< length ; i++)
//             ptr[i]= i;
//     }

//     void print()
//     {
//         for( int i=0 ; i< length ; i++)
//             std::cout<<ptr[i] << " ";
//         std::cout<<std::endl;
//     }
     
// };

// class ArrayClass_char{

//     char *ptr ; // should point to array of N bytes
//     int length ;
//   public:
//     ArrayClass_char(int size)
//     {
//         length = size;
//         ptr = new char[length];
//         for( int i=0 ; i< length ; i++)
//             ptr[i]= i;
//     }

//     void print()
//     {
//         for( int i=0 ; i< length ; i++)
//             std::cout<<ptr[i] << " ";
//         std::cout<<std::endl;
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

    ArrayClass<int,int,char> obj(5);
    obj.print();

    ArrayClass<double,int,float> obj_d(5);
    obj_d.print();

    ArrayClass<char,int,char> obj_c(5);
    obj_c.print();

    return 0; 
}

