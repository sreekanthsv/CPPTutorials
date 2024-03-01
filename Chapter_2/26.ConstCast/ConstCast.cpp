   
#include <iostream> 
using namespace std; 
  
class student 
{ 
private: 
    int roll; 
public: 
    // constructor 
    student(int r):roll(r) {} 
  
    // A const function that changes roll with the help of const_cast 
    void fun() const
    { 
        // the This pointer here is a const object pointer
        // by using const_cast we made it a non const pointer
        // hence we are able to make changes
        ( const_cast <student*> (this) )->roll = 5; 
    } 
  
    int getRoll()  { return roll; } 
}; 
  
int main(void) 
{ 
    student s(3); 
    cout << "Old roll number: " << s.getRoll() << endl; 
  
    s.fun(); 
  
    cout << "New roll number: " << s.getRoll() << endl; 
  
    return 0; 
}