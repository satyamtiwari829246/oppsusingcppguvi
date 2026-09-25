#include<iostream>
using namespace std;
//  Optimized Approach & Testing
bool isPoweroftwo(int n){
    return n > 0 && (n & (n - 1)) == 0;
};
//bruteforce approach
bool isPowerOfTwo(int n) {
    if (n <= 0)
        return false;

    while (n % 2 == 0) {
        n = n / 2;
    }

    return n == 1;
}

int main(){
    int n=16;
    cout<<isPoweroftwo(n);
    return 0;
}