#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    string name;
    int m1, m2, m3;

    cout << "--------------------------------------------------" << endl;
    cout << left << setw(12) << "Name"
         << right << setw(6) << "M1"
         << setw(6) << "M2"
         << setw(6) << "M3"
         << setw(8) << "Total"
         << setw(10) << "Average" << endl;

    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cin >> name >> m1 >> m2 >> m3;

        int total = m1 + m2 + m3;
        double average = total / 3.0;

        cout << left << setw(12) << name
             << right << setw(6) << m1
             << setw(6) << m2
             << setw(6) << m3
             << setw(8) << total
             << setw(10) << fixed << setprecision(2) << average
             << endl;
    }

    cout << "--------------------------------------------------" << endl;

    return 0;
}