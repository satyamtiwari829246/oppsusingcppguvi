#include <iostream>
using namespace std;

int main() {
    int n;
    int units[100];

    cout << "Enter number of months: ";
    cin >> n;

    cout << "Enter electricity units consumed for " << n << " months:\n";

    for (int i = 0; i < n; i++) {
        cin >> units[i];
    }

    int max = units[0];
    int min = units[0];

    for (int i = 1; i < n; i++) {
        if (units[i] > max) {
            max = units[i];
        }

        if (units[i] < min) {
            min = units[i];
        }
    }

    cout << "\nArray of monthly consumption: ";

    for (int i = 0; i < n; i++) {
        cout << units[i] << " ";
    }

    cout << "\nMaximum units consumed = " << max;
    cout << "\nMinimum units consumed = " << min;

    return 0;
}