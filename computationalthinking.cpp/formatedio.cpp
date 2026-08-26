#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double a = 2.444332332;
    cout<<setprecision(3)<<a<<endl;
    char b= 'A';
    cout<<setw(10)<<b<<endl;
    cout <<setfill('*')<<setw(10)<<123<<endl;

    return 0;

}