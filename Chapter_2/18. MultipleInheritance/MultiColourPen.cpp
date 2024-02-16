#include "BlueRefill.hpp"
#include "RedRefill.hpp"
#include <memory>
#include <iostream>



class MultiColourPen :  public  RedRefill , public  BlueRefill
{
    public:
    MultiColourPen() {
      };
    virtual ~MultiColourPen(){
    };
};

class MultiColourPenImpl 
{
    Refill *ptrRefill=NULL;

    public:

    MultiColourPenImpl() {
      SelectEmptyLine();
    };
    virtual ~MultiColourPenImpl(){
    };

    void Draw(){
      ptrRefill->Draw();
    }
    void whatColorAmI()
    {
      ptrRefill->whatColorAmI();
    }
    void SelectRedLine()
    {
      if(ptrRefill)
      {
        delete ptrRefill; ptrRefill = NULL;
      }
      ptrRefill = new RedRefill();
    }
    
    void SelectBlueLine()
    {
      if(ptrRefill)
      {
        delete ptrRefill; ptrRefill = NULL;
      }
      ptrRefill = new BlueRefill();
    }
    void SelectEmptyLine()
    {
      if(ptrRefill)
      {
        delete ptrRefill; ptrRefill = NULL;
      }
      ptrRefill = new Refill();
    }
};


// void dynamic_factory(int selection )
// {
//   std::unique_ptr<Refill> pRefill ;

//   switch(selection)
//   {
//     case 1: 
//       pRefill = std::make_unique<Refill>(); break;
//     case 2: 
//       pRefill = std::make_unique<RedRefill>();break;
//     case 3: 
//       pRefill = std::make_unique<BlueRefill>();break;
//     case 4: 
//       pRefill = std::make_unique<MultiColourPen>();break;
//     default:
//       return;
//   }
//   pRefill->whatColorAmI();
//   pRefill->Draw();
//   std::cout<<std::endl<<std::endl;

// }


#if 0
int main()
{
  Refill refill;
  refill.whatColorAmI();  refill.Draw();
  std::cout<<std::endl<<std::endl;

  RedRefill redrefill;
  redrefill.whatColorAmI();redrefill.Draw();
  std::cout<<std::endl<<std::endl;

  BlueRefill bluerefill;
  bluerefill.whatColorAmI();bluerefill.Draw();
  std::cout<<std::endl<<std::endl;

  // MultiColourPen multicolourpen;   
  // multicolourpen.whatColorAmI();  multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;
 

  // for(int i=1;i<=4;i++)
  //   dynamic_factory(i);
  
  // std::cout<<std::endl<<std::endl;
  // MultiColourPenImpl multicolourpen;   
  // multicolourpen.whatColorAmI(); multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;

  // multicolourpen.SelectBlueLine();
  // multicolourpen.whatColorAmI(); multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;

  // multicolourpen.SelectRedLine();
  // multicolourpen.whatColorAmI(); multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;

  return 0;
}


#endif


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

bool createPen(Refill **refill, int color)
{

  bool ret = true;
  switch (color)
  {
  case 1:
    *refill = new BlueRefill();
    break;
  case 2:
    *refill = new RedRefill();
    break;
  case 3:
    *refill = new RedPen();
    break;
  case 4:
    *refill = new BluePen();
    break;
  case 5:
    *refill = new MultiColourPen();
    break;
  default:
    ret = false;
    break;
  }
  return ret;

}


int main()
{

  Refill *refill= NULL;

  int color=0;
  std::cin>> color;
  if ( createPen( &refill, color) !=true )
  {
    std::cout<< "creation failed " <<std::endl;
    return 0;
  }

  refill->whatColorAmI();

  refill->Draw();

  delete refill;
  
  return 0;
}