#include<iostream>
using namespace std;
int i=0;
   void f(){
    if(i==4)
    return ;
    cout<<" Hello this an recursion function"<<endl;
 
    i++;
    f();
   }
int main(){
   f();
   return 0;
}