#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() {
        return 3.1416 * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() {
        return length * width;
    }
};

int main() {
    double radius, length, width;

    cin >> radius >> length >> width;

    Shape* c = new Circle(radius);
    Shape* r = new Rectangle(length, width);

    cout << fixed << setprecision(2);

    cout << "Circle Area: " << c->area() << endl;
    cout << "Rectangle Area: " << r->area();

    delete c;
    delete r;

    return 0;
}