#include <iostream>
using namespace std;

int main() {
    int n;
    float temp[100];

    cout << "Enter number of days: ";
    cin >> n;

    cout << "Enter temperatures for " << n << " days:\n";

    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    float max = temp[0];
    float min = temp[0];

    for (int i = 1; i < n; i++) {
        if (temp[i] > max) {
            max = temp[i];
        }

        if (temp[i] < min) {
            min = temp[i];
        }
    }

    cout << "\nArray of temperatures: ";

    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }

    cout << "\nHighest temperature = " << max;
    cout << "\nLowest temperature = " << min;

    return 0;
}