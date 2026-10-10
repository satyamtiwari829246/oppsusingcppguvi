#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }

    string binary = "";

    while (n > 0) {
        int remainder = n % 2;
        binary += char('0' + remainder);
        n = n / 2;
    }

    reverse(binary.begin(), binary.end());
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;

    for (char digit : binary) {
        decimal = decimal * 2 + (digit - '0');
    }

    return decimal;
}

int main() {
    int numbers[] = {0, 1, 11, 25, 255};

    cout << "Q2: Decimal to Binary and Back to Decimal\n";

    for (int number : numbers) {
        string binary = decimalToBinary(number);
        int decimal = binaryToDecimal(binary);

        cout << "Original: " << number
             << ", Binary: " << binary
             << ", Back to Decimal: " << decimal
             << ", Verified: "
             << (number == decimal ? "True" : "False")
             << endl;
    }

    return 0;
}