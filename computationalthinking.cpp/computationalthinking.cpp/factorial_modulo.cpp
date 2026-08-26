#include<iostream>

using namespace std;

int main(){
     int  n;
   long long n1=1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
   for(int i=1; i<=n;i++){
      n1=n1*i;
        n1=n1%(1000000007);
   }
    cout<<n1;
    return 0;
}