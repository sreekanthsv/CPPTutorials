#include "DerivedClass.hpp"

void use_release_obj(BaseClass* pObj)
{
  delete pObj;
}

int main()
{
  BaseClass BaseClassObj;
  DerivedClass DerivedClassObj;

  BaseClass* pObj1 = new BaseClass();
  BaseClass* pObj2 = new DerivedClass();

  
  use_release_obj(pObj2);
  use_release_obj(pObj1);
  return 0;
}
