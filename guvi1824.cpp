#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<string, int>> records;

    // Input records
    for (int i = 0; i < n; i++) {
        string name;
        int score;

        cin >> name >> score;

        records.push_back({name, score});
    }

    // Store total scores and count
    unordered_map<string, pair<int, int>> studentData;

    for (auto &r : records) {
        studentData[r.first].first += r.second;   // total score
        studentData[r.first].second += 1;         // count
    }

    // Store average scores
    vector<pair<string, double>> averages;

    for (auto &s : studentData) {

        double avg =
            (double)s.second.first / s.second.second;

        averages.push_back({s.first, avg});
    }

    // Sort using lambda
    sort(averages.begin(), averages.end(),
         [](const pair<string, double> &a,
            const pair<string, double> &b) {

        if (a.second == b.second)
            return a.first < b.first;

        return a.second > b.second;
    });

    // Output
    cout << "Sorted List:" << endl;

    for (auto &s : averages) {
        cout << s.first << " "
             << fixed << setprecision(2)
             << s.second << endl;
    }

    // Top scorer
    if (!averages.empty()) {
        cout << "Top Scorer: "
             << averages[0].first << endl;
    }

    return 0;
}