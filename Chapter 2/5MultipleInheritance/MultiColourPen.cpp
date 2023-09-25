#include "BlueRefill.hpp"
#include "RedRefill.hpp"
#include <memory>
#include <iostream>



class MultiColourPen :public  RedRefill, public   BlueRefill
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
    void whoAmi()
    {
      ptrRefill->whoAmi();
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
//   pRefill->whoAmi();
//   pRefill->Draw();
//   std::cout<<std::endl<<std::endl;

// }

int main()
{
  Refill refill;
  refill.whoAmi();  refill.Draw();
  std::cout<<std::endl<<std::endl;

  RedRefill redrefill;
  redrefill.whoAmi();redrefill.Draw();
  std::cout<<std::endl<<std::endl;

  BlueRefill bluerefill;
  bluerefill.whoAmi();bluerefill.Draw();
  std::cout<<std::endl<<std::endl;

  // MultiColourPen multicolourpen;   
  // multicolourpen.whoAmi();  multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;
 

  // for(int i=1;i<=4;i++)
  //   dynamic_factory(i);
  
  // std::cout<<std::endl<<std::endl;
  // MultiColourPenImpl multicolourpen;   
  // multicolourpen.whoAmi(); multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;

  // multicolourpen.SelectBlueLine();
  // multicolourpen.whoAmi(); multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;

  // multicolourpen.SelectRedLine();
  // multicolourpen.whoAmi(); multicolourpen.Draw();
  // std::cout<<std::endl<<std::endl;

  return 0;
}
