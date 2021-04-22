#include <iostream>
#include <iomanip>

using namespace std;

class BasicShape
{
    private:
    double area;

    public:
    double getArea();
    virtual void calcArea()=0;
    void setArea();
};

class Circle : public BasicShape
{
    private:
    long centerX;
    long centerY;
    double radius;

    public:
    Circle();
    Circle(long xval, long yval, double r);
    long getCenterX();
    long getCenterY();
    void calcArea();
};

class Rectangle : public BasicShape
{
    private:
    long width;
    long length;

    public:
    long getWidth();
    long getLength();
    void calcArea();
};


int main()
{

    return 0;
}