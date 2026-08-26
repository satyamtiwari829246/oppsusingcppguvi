#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a;
    cout<<"enter the no"<<endl;
    cin>>a;
    // int no=0;
    // while(a>0){
    //     a=a/10;
    //     no+=1;
    // }
    // cout<<no;

    //secondary method
     int count= (int) log10(a)+1;
     cout<<count<<endl;
}