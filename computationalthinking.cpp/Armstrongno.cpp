#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cout<<"Enter the to check armstrongno or not: "<<endl;
    cin>>a;
    int temp_a=a;
    int rem=0;
    int sum=0;
    while(a>0){
      rem=a%10;
      sum+=pow(rem,3);  
      a=a/10;
    }
    if(temp_a==sum){
        cout<<temp_a<<" is Armstrong No"<<endl;
    }else{
        cout<<temp_a<<" isn't Armstrong No"<<endl;
    }
    return 0;
}