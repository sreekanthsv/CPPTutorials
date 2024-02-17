#include <iostream>
//  base class declaration.


class serialDevice { // Interface
    // if all functions are pure in a class we call it a interface
    // we call it a interface
public:
    
    // BY Making the virtual  function as pure
    virtual void open() =0;
    virtual void setupchar(void* settings) =0;
    virtual void read(unsigned char* data) =0;
    virtual void write(unsigned char* data) =0;
    virtual void close(void* settings) =0;
};

class I2C : public serialDevice
{
    void open()
    {
        // ....
    }
    /// ..
}; // developer 1

class UART : public serialDevice
{
    
}; // developer 2

class CAN : public serialDevice
{
    
}; // developer 3


int main()
{

    // CAN connection;
    // UART connection;
    // I2C connection;

    // serialDevice* connection;

    // if( selection =1 )
    //     connection = new CAN();
    // else if(selection =2)
    //     connection = new UART();
    // else if (selection =3 )
    //     connection = new I2C();
    
    // connection->open();
    // connection->setupchar();

    // while(1){ // while(no_error)

    // connection->read();
    // // calculate response
    // connection->write();
    // }

    // connection->close();
    // delete connection;

}