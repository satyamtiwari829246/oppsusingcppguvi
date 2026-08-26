#include <iostream>
#include <iomanip>
using namespace std;

// Abstract Base Class
class Shape
{
public:
    // Pure Virtual Function
    virtual double area() = 0;

    // Virtual Function with Implementation
    virtual void describe()
    {
        cout << "Shape Description" << endl;
    }

    // Virtual Destructor
    virtual ~Shape()
    {
    }
};

// Derived Class: Triangle
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    // Override area()
    double area()
    {
        return 0.5 * base * height;
    }

    ~Triangle()
    {
    }
};

// Derived Class: Square
class Square : public Shape
{
private:
    double side;

public:
    Square(double s)
    {
        side = s;
    }

    // Override area()
    double area()
    {
        return side * side;
    }

    ~Square()
    {
    }
};

int main()
{
    double base, height, side;

    cin >> base >> height;
    cin >> side;

    // Base Pointer Array
    Shape* shapes[2];

    shapes[0] = new Triangle(base, height);
    shapes[1] = new Square(side);

    // Runtime Polymorphism
    cout << fixed << setprecision(2);

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->describe();

        // Identify Shape Type
        if (i == 0)
            cout << "Triangle Area: ";
        else
            cout << "Square Area: ";

        cout << shapes[i]->area() << endl;
    }

    // Destructor Chaining
    for (int i = 0; i < 2; i++)
    {
        delete shapes[i];
    }

    return 0;
}