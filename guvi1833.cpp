#include <iostream>
#include <unordered_map>
#include <set>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    unordered_map<string, int> products;
    set<string> productNames;

    string name;
    int price;

    // Input products
    for (int i = 0; i < n; i++) {

        cin >> name >> price;

        // Update price if duplicate exists
        products[name] = price;

        // Store unique names
        productNames.insert(name);
    }

    // Priority queue for highest price
    priority_queue<int> pq;

    vector<int> prices;

    for (auto p : products) {
        pq.push(p.second);
        prices.push_back(p.second);
    }

    // Count products above 1000
    int countAbove1000 =
        count_if(prices.begin(), prices.end(),
                 [](int p) {
                     return p > 1000;
                 });

    // Output
    cout << "Products (sorted): ";

    for (auto p : productNames) {
        cout << p <<" ";
    }
    cout<<endl;

    cout << "Highest Price: " << pq.top() <<endl;

    cout << "Products above 1000: "
         << countAbove1000<<endl;

    return 0;
}