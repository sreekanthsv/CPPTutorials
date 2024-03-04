#include <iostream>
using namespace std;
 

 int open_file(const char* filename )
 {

    // wite fopen()
    if(filename)
        return 1;

    return 0;

 }

int read_file(int fileopen)
{
  // some code to ead
    if(fileopen)
        return 0;    
    else 
        return 1;
}

void some_function(int fileopen)
{

    // some_funct

    try {
            int readcontents = read_file(fileopen);  // Check the contents of file

            if(readcontents==0)
                throw 20;
        
    }
    catch (int n) {
        cout << " file conents invalid "<< n <<endl;
        throw; // Re-throwing an exception
    }
}

void some_function2(int fileopen)
{
    some_function(fileopen);
}


int main()
{
// nesting of try/catch
//  


 try {

            try {

                int fileopen =open_file("/testfile");  // Check on file name is correct

                if(fileopen == 0)
                    throw fileopen;
                    // 
                //  fileopen =open_file(NULL);

                // if(fileopen == 0)
                //     throw fileopen;

                some_function2(fileopen);

            }
            catch (int n) {
                cout << " Invalid file name " << n <<endl;        
                throw;
            }
 }
    catch (int n) {
        cout << " final catch " << n <<endl;        
    }
    return 0;
}