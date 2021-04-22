#include <iostream>
#include <iomanip>

using namespace std;

class BasicShape
{
    private:
    double area;

    public:
    double getArea()
        {return area;}
    virtual double calcArea()=0;
    void setArea(int ar)
        {area = ar;}
};

class Circle : public BasicShape
{
    private:
    long centerX;
    long centerY;
    double radius;

    public:
    Circle()
    {
        centerX = 0;
        centerY = 0;
        radius = 0.0;
    }
    Circle(long xval, long yval, double r)
    { 
        centerX = xval;
        centerY = yval;
        radius = r;
    }
    long getCenterX()
        {return centerX;}
    long getCenterY()
        {return centerY;}
    double calcArea()
    {
        double circArea;
        circArea = 3.14159 * radius * radius;
        return circArea;
    }
};

class Rectangle : public BasicShape
{
    private:
    long width;
    long length;

    public:
    long getWidth();
    long getLength();
    double calcArea();
};


int main()
{

    return 0;
}