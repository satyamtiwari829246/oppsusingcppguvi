#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 1;

    for (int i = binary.length() - 1; i >= 0; i--) {
        decimal += (binary[i] - '0') * power;
        power *= 2;
    }

    return decimal;
}

int main() {
    string testCases[] = {"0", "1", "1011", "11111111"};

    cout << "Q1: Binary to Decimal\n";

    for (string binary : testCases) {
        cout << "Binary: " << binary
             << " -> Decimal: " << binaryToDecimal(binary)
             << endl;
    }

    return 0;
}