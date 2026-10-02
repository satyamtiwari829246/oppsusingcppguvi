#include <iostream>
using namespace std;

// Recursive function to calculate total working hours
int recursiveTotal(int hours[], int n) {
    // Base case
    if (n == 0) {
        return 0;
    }

    // Recursive call
    return hours[n - 1] + recursiveTotal(hours, n - 1);
}

int main() {
    int n;
    int hours[100];

    cout << "Enter number of working days: ";
    cin >> n;

    cout << "Enter hours worked for each day:\n";

    for (int i = 0; i < n; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> hours[i];
    }

    // Iterative approach
    int iterativeTotal = 0;

    for (int i = 0; i < n; i++) {
        iterativeTotal += hours[i];
    }

    // Recursive approach
    int recursiveResult = recursiveTotal(hours, n);

    // Display results
    cout << "\nTotal working hours using iteration = "
         << iterativeTotal;

    cout << "\nTotal working hours using recursion = "
         << recursiveResult;

    // Compare results
    if (iterativeTotal == recursiveResult) {
        cout << "\nBoth approaches give the same result.";
    }
    else {
        cout << "\nThe results are different.";
    }

    return 0;
}
