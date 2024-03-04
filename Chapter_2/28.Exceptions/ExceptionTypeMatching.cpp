#include <iostream>
#include <stdexcept>
using namespace std;
 
int main()
{
 
    try { 
        
        // cout<<"enter a number"<<endl;
        // int type;
        // cin>>type;

//        int a = 5/0;

        throw "some data";

        // if(type !=0 )
        //     throw 1 ;
        // else
            throw 'c';
             throw "C";
        

    }
    // catch block to catch the thrown exception

    catch (int e) {
        cerr << "Exception int " << e << endl;
    }

    catch (unsigned int e) {
        cerr << "Exception unsigned int " << e << endl;
    }

    catch (char e) {
        cerr << "Exception char " << e << endl;
    }

    catch (const char* e) {
        cerr << "Exception const char " << e << endl;
    }
    catch (...) {
        cerr << "Exception all " << endl;
    }

    return 0;
}