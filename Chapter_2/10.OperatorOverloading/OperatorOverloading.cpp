#include <iostream>
#include <string.h>


class MyStudent
{
  int StudentROllNo = 444;
  std::string name = "junk";
  char *college  = NULL;

  double CGPA = 0;

  public:
  
  MyStudent(int no, std::string  _name, char * pCollege, double marks) : 
  StudentROllNo(no), name(_name), CGPA(marks)
  {

    int size_of_college = strlen(pCollege)+1;
  
    college = new char[size_of_college];
    strcpy(college,pCollege);
  }
  ~MyStudent(){

    std::cout<< "destroying" <<std::endl;
    if(college != NULL )
    {
      delete [] college;
      college = NULL;
    }
    std::cout<< "destroyed" <<std::endl;
  }


  void print()
  {
    std::cout<< " StudentROllNo " << StudentROllNo << " name " << name << 
    " college "<< (college? college : "") << " CGPA " << CGPA << std::endl;
  }

  MyStudent& operator+(const MyStudent& obj)
  {
    name+= " " + obj.name;
    CGPA = CGPA + obj.CGPA;
    return *this;
  }

  MyStudent& operator+=(const MyStudent& obj)
  {
    name+= " " + obj.name;
    CGPA = CGPA + obj.CGPA;
    return *this;
  }

  MyStudent& operator/(const int& divident)
  {
    CGPA = CGPA / divident;
    return *this;
  }

  MyStudent& operator/(const MyStudent& obj)
  {
    CGPA = CGPA / obj.CGPA;
    return *this;
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
  MyStudent(const MyStudent& obj)
  {
  //printDetails(); // print the pre initialized valure line number 5 & 6
  std::cout<< "copy constructor" <<std::endl;
  StudentROllNo = obj.StudentROllNo;
  name = obj.name;  // over writing the values
  
   if( obj.college && strlen(obj.college) )
    {     
      college = new char[strlen(obj.college) +1 ]  ;
      strcpy(college, obj.college);
    }


  // std::cout<< strlen(college) << " " << strlen(obj.college) <<std::endl;
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

// Let us create some students who have some CGPA 
// Let try to get Average CGPA amount these students
// Average = (St1.CGPA + std2.cgpa .... + stdN.cgpa) /N


int main()
{

  MyStudent students[] = {
        {1,"Name1","College1",8.1},
        {2,"Name2","College2",8.5},
        {3,"Name3","College3",8.8},
        {4,"Name4","College4",9},
        {5,"Name5","College5",9.5},
        {6, "Name6","College6",8},
   };

  MyStudent sum(0,"",NULL,0) ; // temporary variable to store the sum
//    double sum =0; 
    // in C we would do this
   for(auto& stud : students )
   {  
      sum = sum + stud; 
   }

  // for(int i=0;i< 5 ;i++)
  // {
   // sum = students[0] + students[1] +students[2] + students[3] + students[4] + students[5];
  // }

   sum.print();

   //A object which will be average off all the students

  MyStudent average =  sum/ 6;

  average.print();

}

