#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of terms:"<<endl;
    cin>>n;
    int t1=0,t2=1,nexterm;
    cout<<"fibonacci series:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
    return 0;
}