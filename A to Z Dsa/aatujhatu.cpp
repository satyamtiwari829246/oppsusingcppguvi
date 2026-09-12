#include<iostream>
using namespace std;
int main(){
        
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int mask = 0;
    int temp = num;

    while (temp > 0) {
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }

    cout << "The complement of " << num << " is: " << (num ^ mask) << endl;

    return 0;
}