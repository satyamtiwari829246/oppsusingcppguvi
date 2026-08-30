#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the two no:"<<endl;
    cin>>a;
    cin>>b;
      while(b!=0){
        int temp=b;
       b=a%b;
       a=temp;
      }
      cout<<"The G.C.D of two no:"<<a<<endl;
      return 0;
}
