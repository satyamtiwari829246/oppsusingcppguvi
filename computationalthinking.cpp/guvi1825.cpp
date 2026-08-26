#include <iostream>
#include <string>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b)
{
    return a + b;
}

// Class Template
template <typename T>
class Calculator
{
private:
    T a, b;

public:
    // Constructor
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    // Subtraction
    T subtract()
    {
        return a - b;
    }

    // Multiplication
    T multiply()
    {
        return a * b;
    }
};

int main()
{
    string type;
    cin >> type;

    // Integer Operations
    if (type == "int")
    {
        int a, b;
        cin >> a >> b;

        Calculator<int> calc(a, b);

        cout << "Addition: " << add(a, b) << endl;
        cout << "Subtraction: " << calc.subtract() << endl;
        cout << "Multiplication: " << calc.multiply() << endl;
    }

    // Double Operations
    else if (type == "double")
    {
        double a, b;
        cin >> a >> b;

        Calculator<double> calc(a, b);

        cout << "Addition: " << add(a, b) << endl;
        cout << "Subtraction: " << calc.subtract() << endl;
        cout << "Multiplication: " << calc.multiply() << endl;
    }

    // String Operations
    else if (type == "string")
    {
        string a, b;
        cin >> a >> b;

        cout << "Addition: " << add(a, b) << endl;
        cout << "Subtraction: Not Supported" << endl;
        cout << "Multiplication: Not Supported" << endl;
    }

    else
    {
        cout << "Invalid Type" << endl;
    }

    return 0;
}