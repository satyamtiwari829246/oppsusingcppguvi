#include <iostream>
using namespace std;

int main() {
    int n;
    int salary[100];

    cout << "Enter number of employees: ";
    cin >> n;

    cout << "Enter monthly salary of " << n << " employees:\n";

    for (int i = 0; i < n; i++) {
        cin >> salary[i];
    }

    int max = salary[0];
    int min = salary[0];

    for (int i = 1; i < n; i++) {
        if (salary[i] > max) {
            max = salary[i];
        }

        if (salary[i] < min) {
            min = salary[i];
        }
    }

    cout << "\nArray of employee salaries: ";

    for (int i = 0; i < n; i++) {
        cout << salary[i] << " ";
    }

    cout << "\nHighest salary = " << max;
    cout << "\nLowest salary = " << min;

    return 0;
}