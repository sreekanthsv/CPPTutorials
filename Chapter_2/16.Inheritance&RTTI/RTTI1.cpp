#include "DerivedClass.hpp"
#include <memory>
#include <iostream>

void use_release_obj(BaseClass* pObj)
{
  delete pObj;
}

void create_scoped_base_derived()
{
  {
    BaseClass BaseClassObj;
    DerivedClass DerivedClassObj;
  }
  std::cout<< "scoped objects released" <<std::endl<<std::endl;
}

void create_dynamic_base_derived()
{
  BaseClass* pObj = new BaseClass();
  use_release_obj(pObj);

  pObj = new DerivedClass();
  use_release_obj(pObj);

  std::cout<< "dynamically created objects released" <<std::endl<<std::endl;
}

void create_dynamic_base_derived_products()
{
  {
    std::unique_ptr<BaseClass> pbase = std::make_unique<BaseClass>();    
    pbase = std::make_unique<DerivedClass>();
  }
  std::cout<< "dynamically created objects released after scope ended" <<std::endl<<std::endl;
}

#if 0
int main()
{
  create_scoped_base_derived();
  create_dynamic_base_derived();
  create_dynamic_base_derived_products();
  return 0;
}
#endif 

// Compile time Type identification
// RTTI : Run Time Type Identification
// 
int main()
{
  // {
  //   // Compile time Type identification
  //   BaseClass BaseClassObj;
  //   DerivedClass DerivedClassObj;
  // }

  {
    // RTTI : Run Time Type Identification
    BaseClass *BaseClassObj = NULL; // here i created a pointer of type Baseclass
    
    //std::cout<< typeid(*BaseClassObj).name() ;    // this will crash

    BaseClassObj = new BaseClass();
    std::cout<< typeid(*BaseClassObj).name() <<std::endl;  // we assigned a Baseclass obj
    delete BaseClassObj;  //

    BaseClassObj = new DerivedClass();
    std::cout<< typeid(*BaseClassObj).name() <<std::endl;  // 
    delete BaseClassObj; // we are trying to call the destructors

    DerivedClass *DerivedClassObj = new DerivedClass();
    std::cout<< typeid(*DerivedClassObj).name() <<std::endl;  // 
    delete DerivedClassObj; // we are trying to call the destructors

//    DerivedClass DerivedClassObj;
  }


  return 0;
}