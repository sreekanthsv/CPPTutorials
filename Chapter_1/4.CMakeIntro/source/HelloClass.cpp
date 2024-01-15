#include "additional.hpp"

namespace something {
  int variable;

}

namespace something2 {
  char variable;
   
}

// never put a namespace a global  std::cout

int main()  // why int return type ..?
{ 
    // in c you can call main again and again
    // in c++ you cannot

    //using namespace std;   // local namespacing ..?
  
 
    func();
    return 0; // what happens if not returned 
}



// Main should always retun something it cannot be void in c++
// Main cannot be called again and again 


