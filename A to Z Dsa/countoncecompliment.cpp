#include <iostream>
using namespace std;

int main() {
    int N = 13;
    int count = 0;
     int binary=0;
    while (N > 0) {
         
        if (N % 2 == 1) {
            count++;
        }
        int rem= N%2;
        binary+=rem;
        binary*=10 
        N = N / 2;
    }
    cout
   
    cout << "Set bits = " << count;

    return 0;
}