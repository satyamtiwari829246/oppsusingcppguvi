#include<iostream>
using namespace std;

// void fun(int i,int n){
//     if(i>n)
//     return ;

//     cout<<n<<endl;
//     fun(i,n-1);
// }


 void fun(int n,int i){
   if(i>n)
   return ;
  
   fun(n-1,i);
    cout<<n<<endl;
 }

int main(){
    fun(5,1);
    return 0;
}