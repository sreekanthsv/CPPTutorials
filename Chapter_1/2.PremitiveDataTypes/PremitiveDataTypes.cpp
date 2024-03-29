
#include <iostream>
// https://docs.oracle.com/cd/E18752_01/html/817-6223/chp-typeopexpr-2.html
// 
int main()
{
    using namespace std;
    cout<<"bool "<<sizeof(  bool )<<endl; // true & false 
    cout<<"char "<<sizeof(  char )<<endl; // why endl ..?
    cout<<"unsigned char "<<sizeof(  unsigned char )<<std::endl;
    cout<<"short  "<<sizeof(  short  )<<std::endl;
    cout<<"short int "<<sizeof(  short int )<<std::endl;
    cout<<"unsigned short int  "<<sizeof(  unsigned short int )<<std::endl;
    cout<<"unsigned  "<<sizeof(  unsigned )<<std::endl;
    cout<<"int "<<sizeof(  int )<<std::endl;
    cout<<"unsigned int  "<<sizeof(  unsigned int )<<std::endl;
    cout<<"float  "<<sizeof(  float )<<std::endl;
    cout<<"unsigned long int  "<<sizeof(  unsigned long int )<<std::endl;
    cout<<"long int  "<<sizeof(  long int )<<std::endl; // size of long
    cout<<"double  "<<sizeof(  double )<<std::endl;
    cout<<"long double   "<<sizeof(  long double )<<std::endl;    

    return 0;
}
