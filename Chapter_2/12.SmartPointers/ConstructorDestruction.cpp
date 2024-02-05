#include "DummyClass.hpp"
#include <memory>
#include <iostream>

std::unique_ptr<dummy> create_release_objects_with_smart_pointers()
{
  std::cout<< "creating objects via unique_ptr" <<std::endl;

  {   // scope starts
                                      
    std::unique_ptr<dummy> pObj = std::make_unique<dummy>();  // create and obj dynamicall
    pObj->printval();
    pObj.release();
    std::cout<< "before scope ends "<<std::endl;
  }  // scope ends
  

  std::cout<< "dynamically created objects released after scope ended" <<std::endl<<std::endl;

  std::unique_ptr<dummy> pObj_2 = std::make_unique<dummy>();  // create and obj dynamicall
  pObj_2->printval();
  

   return  pObj_2;
}

dummy* create_forgot_to_release_dynamic_dummy()
{
  std::cout<< "creating dynamic objects" <<std::endl;
  return new dummy();
}

void create_release_arrayof_dynamic_dummy()
{
  std::cout<< "creating dynamic array of objects" <<std::endl<<std::endl;

  // char *arrayyy = (char*)malloc(10*sizeof(char)); // c way 


  dummy* obj_arr_4 = new dummy[4];

  delete [] obj_arr_4;
  std::cout<< "after deleting dynamically created array objects" <<std::endl<<std::endl;
}

void create_release_scoped_dummy()
{
  {  /// scopes starts
    dummy obj1;
    obj1.printval();
  } // scope ends 
  
  std::cout<< "scope of a local objects ended" <<std::endl<<std::endl;
}

// call a function to allocate some memory and release it
void create_release_dynamic_dummy()
{
  std::cout<< "creating dynamic objects" <<std::endl;
  auto pObj2 = new dummy();  //
  
  pObj2->printval();
  delete pObj2;  // destructor will be called
  pObj2=nullptr;
}



int main()
{
  auto ptr = create_release_objects_with_smart_pointers();
  ptr->printval();
  // delete ptr; ==> Destructor()
  return 0;
}

#if 0
int main()
{

  create_release_scoped_dummy();

  create_release_dynamic_dummy(); // call a function to allocate some memory and initialize pObj3
  std::cout<< "after deleting dynamically created object" <<std::endl;
  
  
  
  
  create_release_arrayof_dynamic_dummy();
  std::cout<< "after deleting dynamically created array of objects" <<std::endl;


  // some code to use the buffer 

  dummy *pDyanmicObject = create_forgot_to_release_dynamic_dummy();

  pDyanmicObject->printval();
  delete pDyanmicObject; 
  pDyanmicObject=nullptr;  // release them you have to manualy write the delete release 
 
  {
    //  RAII to avoid developer induced memory leaks
    std::unique_ptr<dummy> smartPointer =  std::make_unique<dummy>();  
    
    smartPointer->printval();
  }

  {
    //  RAII to avoid developer induced memory leaks
    std::unique_ptr<dummy> smartPointer = create_release_objects_with_smart_pointers();  
    
    smartPointer->printval();
  }

  std::cout<<"before close"<<std::endl;
  return 0;
}

#endif