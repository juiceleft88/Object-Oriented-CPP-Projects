//Hugo Izquierdo
//886895301
//The purpose of this program is to creat a virtual function to calculate the area of the derived classes

#include <iostream>
#include <iomanip>

using namespace std;

class BasicShape //base class abstract type
{
    private:
    double area; 

    public:
    double getArea() //accessor 
        {return area;}
    virtual void calcArea()=0; //virtual function for calculating area. Does not contain data or a body.
    void setArea(double ar) // mutator function to set the area, and thus access the private member
        {area = ar;}
};

class Circle : public BasicShape //derived class Circle from the the BasicChild class
{
    private: //private members for this class
    long centerX;
    long centerY;
    double radius;

    public:
    Circle() // default constructor
    {
        centerX = 0;
        centerY = 0;
        radius = 0.0;
    }
    Circle(long xval, long yval, double r) //parametrized constructor, which calls the overriden calcArea function
    { 
        centerX = xval;
        centerY = yval;
        radius = r;
        calcArea();
        
    }
    long getCenterX() //Accessor
        {return centerX;}
    long getCenterY() //Accessor
        {return centerY;}
    void calcArea()  //overriden virtual function
    {
        double circArea;
        circArea = 3.14159 * radius * radius;
        setArea(circArea); //calling setArea function from base class, and passing local variable circArea as an argument. This sets circArea to 'area'
    }
};

class Rectangle : public BasicShape //deived class Rectangle from BasicShape base class
{
    private: 
    long width;
    long length;

    public:
    Rectangle()
    {
        width = 0;
        length = 0;
    }
    Rectangle(long w, long l) //parametrized constructor
    {
        width = w;
        length = l;
        calcArea(); //calling calcArea function in constructor
    }
    long getWidth() //accessors
        {return width;}
    long getLength()
        {return length;}
    void calcArea() //overriden virtual function from base class. Used to claculate the rectangle's area.
    {
        double rectArea;
        rectArea = length * width;
        setArea(rectArea); //calling setArea function from base class, and passing local variable rectArea as an argument. This sets rectArea to 'area'
    }
};


int main()
{
    Circle circ(5, 5, 1.0);
    cout << "The area of the circle is: ";
    cout << circ.getArea() << " units.";

    cout << "\nThe are of the square is: ";

    Rectangle rect(4, 3);
    
    cout << rect.getArea() << " units.";

    return 0;
}