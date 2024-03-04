#include <iostream>
#include <stdexcept>
using namespace std;


class BaseClass{
 
};


class DerivedClass : public BaseClass{
 
};

int main()
{
 
    try { 
        
        // cout<<"enter a number"<<endl;
        // int type;
        // cin>>type;

        // if(type !=0 )
        //     throw 1 ;
        // else
        //     throw 'c';

        try {
            DerivedClass obj;

            // do some code 
            throw obj;
        }
        
        catch (DerivedClass e) 
        {
         cerr << "Exception DerivedClass "  << endl;
         //throw;
       }       

    }
    // catch block to catch the thrown exception
    catch (char e) {
        cerr << "Exception char " << e << endl;
    }
    catch (int e) {
        cerr << "Exception int " << e << endl;
    }
    catch (BaseClass e) {
        cerr << "Exception BaseClass "  << endl;
    }

    return 0;
}