#include <iostream>
using namespace std;

// Arithmetic namespace
namespace Arithmetic {

    int operate(int a, int b) {
        return a + b;
    }
}

// Advanced namespace
namespace Advanced {

    int operate(int a, int b) {
        return a * b;
    }

    // Nested namespace
    namespace Power {

        int operate(int base, int exp) {

            int result = 1;

            for (int i = 0; i < exp; i++) {
                result *= base;
            }

            return result;
        }
    }
}

int main() {

    int a, b;
    int base, exponent;

    cin >> a >> b;
    cin >> base >> exponent;

    cout << "Addition: "
         << Arithmetic::operate(a, b) <<endl;

    cout << "Multiplication: "
         << Advanced::operate(a, b)<<endl;

    cout << "Power: "
         << Advanced::Power::operate(base, exponent);

    return 0;
}