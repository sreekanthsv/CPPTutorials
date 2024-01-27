#include "DummyClass.hpp"
#include <memory>
#include <iostream>

int reference=0;
dummy* pObj3 =nullptr;

void create_release_scoped_dummy()
{
  {  /// scopes starts
    dummy obj1(++reference);
  } // scope ends 
  
  std::cout<< "scope of a local objects ended" <<std::endl<<std::endl;
}

void create_release_dynamic_dummy()
{
  std::cout<< "creating dynamic objects" <<std::endl;
  auto pObj2 = new dummy(++reference);  
  delete pObj2; pObj2=nullptr;

  pObj3 = new dummy(++reference);
}

void create_release_arrayof_dynamic_dummy()
{
  std::cout<< "creating dynamic array objects" <<std::endl<<std::endl;
  dummy* obj_arr_4_7 = new dummy[4] {++reference, ++reference, ++reference, ++reference};

  delete [] obj_arr_4_7;
  std::cout<< "after deleting dynamically created array objects" <<std::endl<<std::endl;
}


std::unique_ptr<dummy> create_release_objects_in_openbmc()
{
  std::cout<< "creating objects via unique_ptr" <<std::endl;

  {   // scope starts
                                      
      std::unique_ptr<dummy> pObj8 = std::make_unique<dummy>(++reference);  // create and obj dynamicall

  }  // scope ends
  

  
  std::unique_ptr<dummy> pObj9 = std::make_unique<dummy>(++reference);  // create and obj dynamicall
  
  std::cout<< "dynamically created objects released after scope ended" <<std::endl<<std::endl;

   return  pObj9;
}



int main()
{

  create_release_scoped_dummy();

  create_release_dynamic_dummy(); // call a function to allocate some memory and initialize pObj3
  // some code to use the buffer 

  delete pObj3; pObj3=nullptr;  // release them you have to manulaay write the delete release 
  
 
  std::cout<< "after deleting dynamically created objects" <<std::endl;

  create_release_arrayof_dynamic_dummy();

  {
    std::unique_ptr<dummy> localptr = create_release_objects_in_openbmc();  //  RAII to avoid deloper induced memory leaks
    
    localptr->printval();
  }

  std::cout<<"before close"<<std::endl;
  return 0;
}
