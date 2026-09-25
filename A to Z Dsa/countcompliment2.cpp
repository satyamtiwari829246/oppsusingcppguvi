#include <iostream>
using namespace std;

int countSetBits(int N) {
    int count = 0;

    while (N != 0) {
        N = N & (N - 1);
        count++;
    }

    return count;
}

int main() {
    int N = 10;

    cout << "Set bits = " << countSetBits(N);

    return 0;
}