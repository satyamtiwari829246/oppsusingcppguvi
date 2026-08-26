#include<iostream>
using namespace std;

int main() {
    int n;
    int n1;
    int div=5;
    int n2=0;
    cout<<"Enter a number ";
    cin>>n;
    while(n1>0){
        n1=n/div;
        div=div*5;
        n2=n2+n1;
    }
   cout<<n2<<endl;


    return 0;
}
