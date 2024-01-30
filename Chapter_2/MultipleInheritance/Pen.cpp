#include "BlueRefill.hpp"
#include "RedRefill.hpp"
#include <memory>
#include <iostream>



class BluePen :public BlueRefill
{
    public:
    BluePen() {
      };
    virtual ~BluePen(){
    };
};

class RedPen :public RedRefill
{
    public:
    RedPen() {
      };
    virtual ~RedPen(){
    };
};

// void optimizeCall( void* pVoidObj)
// {
//   Refill* pObj =((Refill*)pVoidObj);
//   pObj->whoAmi();
//   pObj->Draw();
//   std::cout<<std::endl<<std::endl;
// }

void optimizeCall( Refill* pObj)
{
  // Refill* pObj = dynamic_cast<Refill*> ((Refill*)pVoidObj);
  pObj->whoAmi();
  pObj->Draw();
  std::cout<<std::endl<<std::endl;
}

void factory()
{
  Refill refill;
  RedRefill redrefill;
  BlueRefill bluerefill;
  RedPen redpen;   
  BluePen bluepen;

  optimizeCall( &refill);
  optimizeCall(&redrefill);
  optimizeCall(&bluerefill);
  optimizeCall(&redpen);
  optimizeCall(&bluepen);
}

void dynamic_factory(int selection )
{
  std::unique_ptr<Refill> pRefill ;

  switch(selection)
  {
    case 1: 
      pRefill = std::make_unique<Refill>(); break;
    case 2: 
      pRefill = std::make_unique<RedRefill>();break;
    case 3: 
      pRefill = std::make_unique<BlueRefill>();break;
    case 4: 
      pRefill = std::make_unique<RedPen>();break;
    case 5: 
      pRefill = std::make_unique<BluePen>();break;
    default:
      return;
  }
  pRefill->whoAmi();
  pRefill->Draw();
  std::cout<<std::endl<<std::endl;

}

int main()
{
  // Refill refill;
  // refill.whoAmi();  refill.Draw();
  // std::cout<<std::endl<<std::endl;

  // RedRefill redrefill;
  // redrefill.whoAmi();redrefill.Draw();
  // std::cout<<std::endl<<std::endl;

  // BlueRefill bluerefill;
  // bluerefill.whoAmi();bluerefill.Draw();
  // std::cout<<std::endl<<std::endl;

  // RedPen redpen;   
  // redpen.whoAmi();  redpen.Draw();
  // std::cout<<std::endl<<std::endl;
 
  // BluePen bluepen;
  // bluepen.whoAmi(); bluepen.Draw();
  // std::cout<<std::endl<<std::endl;

//  factory();
  for(int i=1;i<=5;i++)
    dynamic_factory(i);
  
  // BlueRefill* static_cast_ptr = static_cast<BlueRefill*> (&obj1);
  // RedRefill* static_cast_ptr2 = static_cast<RedRefill*> (&obj1);
  // Refill* static_cast_ptr3 = static_cast<Refill*> (&obj1);

  // std::cout<< bP->colour <<std::endl;
  // std::cout<< rP->colour <<std::endl;

  // std::cout<< static_cast_ptr->colour <<std::endl;
  // std::cout<< static_cast_ptr2->colour <<std::endl;
  // std::cout<< static_cast_ptr3->colour <<std::endl;

  // {
  //   std::unique_ptr<Pen> pPen = std::make_unique<Pen>();
  //   callAMethod(pPen.get());
  // }
  //   std::cout<< std::endl<<std::endl;

  // {
  //   std::unique_ptr<BlueRefill> pBlueRefill = std::make_unique<Pen>();
  //   callAMethod(pBlueRefill.get());
  // }
  //   std::cout<< std::endl<<std::endl;

  // {
  //   std::unique_ptr<RedRefill> pRedRefill = std::make_unique<Pen>();
  //   callAMethod(pRedRefill.get());
  // }
  // std::cout<< std::endl<<std::endl;
  // {
  //   std::unique_ptr<Refill> pRefill = std::make_unique<Pen>();
  //   callAMethod(pRefill.get());
  // }
  // std::cout<< std::endl<<std::endl;
  // {
  //   std::unique_ptr<Refill> pRefill = std::make_unique<Pen>();
  //   callAMethod(pRefill.get());
  // }

  return 0;
}
