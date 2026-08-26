#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
    virtual void show() {   // virtual is important for RTTI
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class\n";
    }
};

int main() {
    Base* ptr = new Derived();

    cout << "Actual type: " << typeid(*ptr).name() << endl;

    Derived* d = dynamic_cast<Derived*>(ptr);

    if (d != NULL) {
        cout << "RTTI successful: ptr Derived object ko point kar raha hai\n";
        d->show();
    } else {
        cout << "RTTI failed\n";
    }

    delete ptr;
    return 0;
}