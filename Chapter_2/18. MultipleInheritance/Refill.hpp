#ifndef Refill_H
#define Refill_H
#include <string>
class Refill{
    protected:
    std::string lineColour = " Empty ";
    public:
    Refill() ;
    virtual ~Refill();
    void whoAmi();
    void Draw();
};

#endif