#include <iostream>

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
    // logic specific for pointers
      if( pSection)
        section = new char (*(pSection)) ; // 
      else
        section = NULL; // 
   }
   void printDetails()
   {
      std::cout<< "Roll : " << StudentROllNo << " Name : " << name 
         << " Section : "<< (section ? *section : ' ')<< std::endl;
   }
   MyStudent(const MyStudent& obj);

};

// This is what a Compiler will proveide you 
#if 0
MyStudent::MyStudent(const MyStudent& obj)
{
  //printDetails(); // print the pre initialized valure line number 5 & 6
  std::cout<< "copy constructor" <<std::endl;
  StudentROllNo = obj.StudentROllNo;
  name = obj.name;  // over writing the values
  section = obj.section ; // 
  printDetails();  // print new values 
}
#endif

// we need to re-write the pointer logic to meet your goals
MyStudent::MyStudent(const MyStudent& obj)
{
  //printDetails(); // print the pre initialized valure line number 5 & 6
  std::cout<< "copy constructor" <<std::endl;
  StudentROllNo = obj.StudentROllNo;
  name = obj.name;  // over writing the values
  
  if( obj.section )
    section = new char (*(obj.section)) ; // 
  else
    section = NULL; // 
  printDetails();  // print new values 
}

int main()
{
  using namespace std;

  char *Section = new char('C') ;  // malloc
  
  MyStudent student1(2, "Sahu", Section);
  student1.printDetails(); // 
  delete Section;
  Section = NULL;

  student1.printDetails(); // 
  MyStudent student2 (student1); // we are calling CC
  MyStudent student3 = student1;
  
}

