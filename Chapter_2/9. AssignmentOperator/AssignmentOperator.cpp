#include <iostream>
#include <string.h>
class MyStudent
{
  int StudentROllNo = 444;
  std::string name = "junk";
  char *college  = NULL;

  public:
  
  MyStudent(int no, std::string  _name, char * pCollege) : 
  StudentROllNo(no), name(_name)
  {

    int size_of_college = strlen(pCollege)+1;
  
    college = new char[size_of_college];
    strcpy(college,pCollege);
  }
  ~MyStudent(){

    std::cout<< "destroying" <<std::endl;
    if(college != NULL )
    {
      delete [] this->college;
      college = NULL;
    }
  }


  void print()
  {
    std::cout<< " StudentROllNo " << StudentROllNo << " name " << name << 
    " college "<< (college? college : "") <<std::endl;
  }


  MyStudent& operator=(const MyStudent& obj)
  {
    std::cout<< "assignment operator"<< std::endl;
    StudentROllNo = obj.StudentROllNo;
    name = obj.name;
   // college = obj.college; // shallow copy 


   // Deep copy 
    std::cout<< strlen(college) << " " << strlen(obj.college) <<std::endl;

    if( strlen(college) != strlen(obj.college) )
    {
      delete [] college;
      college = NULL;
      college = new char[strlen(obj.college) +1 ]  ;
    }

    strcpy(college, obj.college);
    std::cout<< strlen(college) << " " << strlen(obj.college) <<std::endl;

    return *this;
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


// when and where a copy constructor is called
// 1) when initializing obj_new with old object wo objects
// 2) when passed as a parameter
// 3) when return from a function
// 4) when compiler creates a temporary object ;


int main()
{
  char *col1 = " GIET "; 
  char *col2 = " BIT"; 

  MyStudent Subu( 2, "Guru", col2);
  
  MyStudent Sakalya( 1, "sakalya", col1);


  Sakalya.print();
  Subu.print();

  //Sakalya = Subu;
  Subu = Sakalya;

  Sakalya.print();
  
  Subu.print();

}

