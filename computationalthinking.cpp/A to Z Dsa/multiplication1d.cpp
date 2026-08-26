#include<iostream>
using namespace std;

int main(){
    int A[3];
    int B[3];
    int sum[3];
        cout<<"enter the 1 d array";
    for(int i=0;i<3;i++){
        cin>>A[i];
    }
     for(int i=0;i<3;i++){
        cin>>B[i];
    }
    for(int i=0;i<3;i++){
        sum[i]=A[i]*B[i];
    }
    for(int i=0;i<3;i++){
       cout<<sum[i]<<" ";
    }
    return 0;
}
