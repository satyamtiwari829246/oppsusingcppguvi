
#include <iostream>
using namespace std;

long long floorSqrt(long long n) {
    long long low = 0, high = n, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid == 0 || mid <= n / mid) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    long long n;
    cin >> n;

    long long f = floorSqrt(n);
    long long c = f;

    if (f != 0 && n / f != f)
        c = f + 1;
    else if (f * f != n)
        c = f + 1;

    cout << "Floor = " << f << endl;
    cout << "Ceil = " << c << endl;

    return 0;
}