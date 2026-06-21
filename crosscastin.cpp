#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void show() {}     // Polymorphic base class
};

class Walker : virtual public Animal
{
};

class Swimmer : virtual public Animal
{
};

class Duck : public Walker, public Swimmer
{
};

int main()
{
    Walker* w = new Duck();          // Upcasting

    Swimmer* s = dynamic_cast<Swimmer*>(w);   // Cross casting

    if (s)
        cout << "Cross Casting Successful";
    else
        cout << "Cross Casting Failed";

    delete w;
    return 0;
}