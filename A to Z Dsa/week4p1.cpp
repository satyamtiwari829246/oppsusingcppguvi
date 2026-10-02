#include <iostream>
using namespace std;

int main() {
    int n;
    int marks[100];

    cout << "Enter number of students: ";
    cin >> n;


    cout << "Enter marks of " << n << " students:\n";

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

   
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < n; i++) {

        if (marks[i] > max) {
            max = marks[i];
        }

        if (marks[i] < min) {
            min = marks[i];
        }
    }


    cout << "\nArray of marks: ";

    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

   
    cout << "\nHighest mark = " << max;
    cout << "\nLowest mark = " << min;

    return 0;
}