#include <iostream>
#include <iomanip>

using namespace std;

class BasicShape
{
    private:
    double area;

    public:
    double getArea();
    virtual void calcArea();
    void setArea();
};



int main()
{

    return 0;
}