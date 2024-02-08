#include <iostream>
#include <string.h>


class MyStudent
{
  int StudentROllNo = 444;
  std::string name = "junk";
  char *college  = NULL;

  double CGPA = 0;

  void checkcollege() {}

public:
  friend void trusted_function_asign_sur_name(MyStudent& obj , std::string surname);
  friend std::ostream& operator<<(std::ostream& os, const MyStudent& dt);

  MyStudent(int no, std::string  _name, char * pCollege, double marks) : 
  StudentROllNo(no), name(_name), CGPA(marks)
  {

    int size_of_college = strlen(pCollege)+1;
  
    college = new char[size_of_college];
    strcpy(college,pCollege);
  }
  ~MyStudent(){

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

// which can change member functions as you wanted
//
void trusted_function_asign_sur_name(MyStudent& obj , std::string surname)
{
    obj.name += " "; // " subu subash"
    obj.name += surname; // " subu subash"
    obj.checkcollege();
}
// <<
// primitive_data << primitive_data
// 3 << 4 : 0000 0011  ==> 0011 0000


// primitive_data << primitive_data
std::ostream& operator<<(std::ostream& os, const MyStudent& obj)
{
   os<< " StudentROllNo " << obj.StudentROllNo << " name " << obj.name << 
    " college "<< (obj.college? obj.college : "") << " CGPA " << obj.CGPA << std::endl;
  return os;
}
// 


// class3 operator+(class1 os, class2 obj)
// {
  
//   class3 obj3;
//   obj3.NO = obj.no;
//   obj3.name = os.name;

//   return class3_obj;
//   // return 
// }



void print_obj_contents()
{
  MyStudent smitha(2,"smitha","College2",8);
  std::cout<<smitha;

  std::string surname = " ruchi ";
  trusted_function_asign_sur_name(smitha , surname);
  std::cout<<smitha;

}



int main()
{

  // MyStudent students[] = {
  //       {1,"Name1","College1",8.1},
  //       {2,"Name2","College2",8.5},
  //       {3,"Name3","College3",8.8},
  //       {4,"Name4","College4",9},
  //       {5,"Name5","College5",9.5},
  //       {6, "Name6","College6",8},
  //  };


  //students[0].StudentROllNo ;

  MyStudent subu(1,"subu","College1",8.1);
  subu.print();

  // do some operation and get a surname
  // modify object
  std::string surname = " subash";
  trusted_function_asign_sur_name(subu , surname);
  subu.print();


  print_obj_contents();

}

