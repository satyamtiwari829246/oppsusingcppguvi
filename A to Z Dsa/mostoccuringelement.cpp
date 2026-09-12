#include <iostream>
#include <unordered_map>
using namespace std;

class FrequencyCounter {
public:
    void Frequency(int arr[], int n) {

        // Store frequency of each element
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        int maxFreq = 0;
        int minFreq = n;

        int maxElem = 0;
        int minElem = 0;

        // Traverse the map
        for (auto it : mp) {

            int element = it.first;
            int count = it.second;

            // Update maximum frequency
            if (count > maxFreq) {
                maxFreq = count;
                maxElem = element;
            }

            // Update minimum frequency
            if (count < minFreq) {
                minFreq = count;
                minElem = element;
            }
        }

        // Print result
        cout << "The Highest occurring element: "
             << maxElem << " (Frequency: " << maxFreq << ")" << endl;

        cout << "The Lowest occurring element: "
             << minElem << " (Frequency: " << minFreq << ")" << endl;
    }
};

int main() {
    FrequencyCounter f1;

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    f1.Frequency(arr, n);

    return 0;
}