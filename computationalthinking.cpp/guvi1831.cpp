#include <iostream>
using namespace std;

// Internal namespace
namespace Internal {

    int marks(int m1, int m2) {
        return m1 + m2;
    }
}

// External namespace
namespace External {

    int marks(int m1, int m2) {
        return m1 + m2;
    }
}

int main() {

    int i1, i2, e1, e2;

    cin >> i1 >> i2 >> e1 >> e2;

    int internalTotal = Internal::marks(i1, i2);
    int externalTotal = External::marks(e1, e2);

    int grandTotal = internalTotal + externalTotal;

    cout << "Internal Total: " << internalTotal <<endl;
    cout << "External Total: " << externalTotal <<endl;
    cout << "Grand Total: " << grandTotal;

    return 0;
}