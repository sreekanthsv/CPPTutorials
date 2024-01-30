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


int main()
{
  create_scoped_base_derived();
  create_dynamic_base_derived();
  create_dynamic_base_derived_products();
  return 0;
}
