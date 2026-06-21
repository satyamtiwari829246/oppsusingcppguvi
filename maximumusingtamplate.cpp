#include<iostream>
using namespace std;

template<class t>

t maimun(t a,t b){
    
   return (a>b)?a:b;
    
}

int main(){
   int a,b;

   cin>>a>>b;
  cout<< maimun(a,b);
   return 0;
}