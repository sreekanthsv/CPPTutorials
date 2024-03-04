#include <iostream>
#include <stdexcept>
using namespace std;
 
int main()
{
 
    try { 
        
        cout<<"enter a number"<<endl;
        int type;
        cin>>type;

        if(type !=0 )
            throw 1 ;
        else
            throw 'c';

    }
    // catch block to catch the thrown exception
    catch (char e) {
        cerr << "Exception char " << e << endl;
    }
    catch (int e) {
        cerr << "Exception int " << e << endl;
    }


    return 0;
}