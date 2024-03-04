#include <iostream>
#include <stdexcept>
using namespace std;
 
int main()
{
 
   
    while(1)
    {

        try { 
            int numerator ;
            int denominator ;
            int res;
            
            cout<<"enter numerator"<<endl;
            cin>>numerator;
            cout<<"enter denominator"<<endl;
            cin>>denominator;


            // check if denominator is 0 then throw runtime
            // error.
            if (denominator == 0) {
                throw runtime_error(   "Division by zero not allowed!");  
            
            }

            // calculate result if no exception occurs
            res = numerator / denominator;
            //[printing result after division
            cout << "Result after division: " << res << endl;
            break;
        }
        // catch block to catch the thrown exception
        catch (const exception& e) {
            // print the exception
            cerr << "Exception " << e.what() << endl;
        }

    } 
    return 0;
}