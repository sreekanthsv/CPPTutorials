#include "DummyClass.hpp"

int main()
{
  int reference=0;
  dummy obj(++reference);

  dummy* pObj = new dummy(++reference);
  auto pObj2 = new dummy(++reference);
  dummy* obj_arr = new dummy[4]{++reference,++reference,++reference,++reference};

  delete [] obj_arr;
  delete pObj;
  delete pObj2; 
  return 0;
}
