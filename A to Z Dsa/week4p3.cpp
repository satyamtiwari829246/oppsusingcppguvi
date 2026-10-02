#include <iostream>
using namespace std;

int main() {
    int n;
    int runs[100];

    cout << "Enter number of matches: ";
    cin >> n;

    cout << "Enter runs scored in " << n << " matches:\n";

    for (int i = 0; i < n; i++) {
        cin >> runs[i];
    }

    int max = runs[0];
    int min = runs[0];

    for (int i = 1; i < n; i++) {
        if (runs[i] > max) {
            max = runs[i];
        }

        if (runs[i] < min) {
            min = runs[i];
        }
    }

    cout << "\nArray of runs: ";

    for (int i = 0; i < n; i++) {
        cout << runs[i] << " ";
    }

    cout << "\nHighest score = " << max;
    cout << "\nLowest score = " << min;

    return 0;
}