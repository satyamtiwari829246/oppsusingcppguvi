#include<iostream>
#include<stdexcept>
#include<exception>
#include<cstdlib>

using namespace std;

void myTerminate() {
    cout << "Custom terminate called. Program terminated due to noexcept violation." << endl;
    exit(0);
}

double safeDivide(double a, double b) noexcept {

    if (b == 0) {
        throw runtime_error("Division by zero");
    }

    return a / b;
}

int main() {

    set_terminate(myTerminate);

    double a, b;
    cin >> a >> b;

    double result = safeDivide(a, b);

    cout << "Result: " << result << endl;

    return 0;
}