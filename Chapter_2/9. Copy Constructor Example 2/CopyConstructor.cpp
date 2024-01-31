#include <iostream>
#include "MyString.hpp"
#include <string>

class MyStudent
{
   int StudentROllNo = 444;
   std::string name = "junk";

   char *section = NULL;  // what problem he can create 

public:
   MyStudent(int No, std::string Name , char *pSection): 
   StudentROllNo(No),
   name(Name)   
   {

    if( pSection)
    {
      int size_section = std::strlen(pSection)+1;

      section = (char *) malloc( size_section * sizeof(char));
      
      if(section)
        std::strcpy(section,pSection);
    }
    else
      section = NULL; // 
   }

   MyStudent(const MyStudent& obj);

   ~MyStudent()
   {
      if(section)
      {
        free(section); 
        section = NULL;
      }
   }

};


// shallow copy  : based constructor is what compiler gives you 
// MyStudent::MyStudent(const MyStudent& obj)
// {
//   //printDetails(); // print the pre initialized valure line number 5 & 6
//   std::cout<< "copy constructor" <<std::endl;
//   StudentROllNo = obj.StudentROllNo;
//   name = obj.name;  // over writing the values
//   section = obj.section ; //   
// }


// Deep Copy 
// we need to re-write the pointer logic to meet your goals
MyStudent::MyStudent(const MyStudent& obj) : MyStudent(obj.StudentROllNo , obj.name, obj.section) 
{
  std::cout<< "copy constructor" <<std::endl;
  
  printDetails();  // print new values 
}

int main()
{
  char *Section = "C Section" ;  // malloc
  
  MyStudent student1(2, "Sahu", Section);
  
  student1.printDetails(); // 
  MyStudent student2 (student1); // we are calling CC
  MyStudent student3 = student1;
    


}

