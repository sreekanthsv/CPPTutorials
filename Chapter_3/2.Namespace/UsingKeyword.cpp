// A C++ program to demonstrate use of class
// in a namespace
#include <iostream>
using namespace std;
 
namespace ns {


    namespace nt2 {
    class geek {
    public:
        void display() { cout << "ns::ns2::geek::display()\n"; }
    };
    }
 
}
int main()
{
    // Creating Object of geek Class
    ns::nt2::geek obj;
    obj.display();

    using GeeK = ns::nt2::geek ;

    GeeK obj2;
    obj2.display();
    std::cout<<typeid(obj2).name()<<endl;

    return 0;
}