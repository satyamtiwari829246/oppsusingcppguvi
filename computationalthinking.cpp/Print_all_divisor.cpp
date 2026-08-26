#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the no that you want to print all divisor:"<<endl;
    cin>>a;
    int rem=0;
    for(int i=1;i<=a;i++){
        rem=a%i;
        if(rem==0){
            cout<<i<<" ";
        }
    }
    return 0;
}