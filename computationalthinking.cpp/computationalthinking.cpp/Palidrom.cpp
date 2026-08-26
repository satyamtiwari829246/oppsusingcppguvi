#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the no to check pallidron:"<<endl;
    cin>>a;
    int temp_a=a;
    int rev=0;
    int rem=0;
    while(a>0){
     rem=a%10;
     rev=(rev*10)+rem;
     a=a/10;
    }
    
   if(temp_a==rev){
    cout<<temp_a<<" is pallidrom"<<endl;
   }else{
    cout<<temp_a<<" is not pallidrom"<<endl;
   }
  return 0;
}