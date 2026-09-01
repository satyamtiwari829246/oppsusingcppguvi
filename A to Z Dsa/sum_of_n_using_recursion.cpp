#include<iostream>
using namespace std;

int sum(int i,int n){
    if(i<1){
        cout<<n;
    return 0;
    }
    sum(i-1,n+i);
}

int main(){
    sum(5,0);
    return 0;
}