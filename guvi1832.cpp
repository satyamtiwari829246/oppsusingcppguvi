#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, int> students;
    vector<int> scores;

    // Input student records
    for (int i = 0; i < n; i++) {

        string name;
        int score;

        cin >> name >> score;

        students[name] = score;
        scores.push_back(score);
    }

    // Sort scores in ascending order
    sort(scores.begin(), scores.end());

    // Count students scoring above 75
    int countAbove75 = 0;

    for (int s : scores) {
        if (s > 75) {
            countAbove75++;
        }
    }

    // Highest and Lowest scores
    int highest = *max_element(scores.begin(), scores.end());
    int lowest = *min_element(scores.begin(), scores.end());

    // Output in single-line format
    cout << "Sorted Scores: ";

    for (int s : scores) {
        cout << s<<" ";
    }
    cout<<endl;

    cout << "Highest Score: " << highest<<endl;
    cout << "Lowest Score: " << lowest<<endl;
    cout << "Students above 75: " << countAbove75;

    return 0;
}