
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 0;

    while (i * i <= N) {
        i++;
    }

    cout << "Floor square root = " << i - 1;

    return 0;
}