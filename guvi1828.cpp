#include<iostream>
using namespace std;

class Shape {
public:
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double area() {
        return 3.14 * radius * radius;
    }

    void display() override {}
};

class Rectangle : public Shape {
public:
    double length, width;

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }

    void display() override {}
};

template <typename T>
void processShape(Shape* ptr) {

    T* derived = dynamic_cast<T*>(ptr);

    if (derived) {
        cout << "Area: " << derived->area() << endl;
    }
    else {
        cout << "Invalid cast" << endl;
    }
}

int main() {

    string type, cast_type;
    cin >> type;

    Shape* ptr = nullptr;

    if (type == "circle") {
        double radius;
        cin >> radius;
        ptr = new Circle(radius);
    }
    else if (type == "rectangle") {
        double length, width;
        cin >> length >> width;
        ptr = new Rectangle(length, width);
    }

    cin >> cast_type;

    if (cast_type == "circle") {
        processShape<Circle>(ptr);
    }
    else if (cast_type == "rectangle") {
        processShape<Rectangle>(ptr);
    }

    delete ptr;

    return 0;
}