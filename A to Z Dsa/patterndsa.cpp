#include<iostream>
using namespace std;
  

class pattern{
    public:
   void printA(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<" "<<endl;
    }
   }
   void printB(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<" "<<endl;
    }
   }

   void printC(int n){
    for(int i=n; i>0 ;i--){
        for(int j=0; j<i;j++){
             cout<<"*"<<" ";

        }
        cout<<" "<<endl;
    }

   }
   void printD(int n){
    for(int i=n; i>0 ;i--){
        for(int j=0; j<i;j++){
             cout<<j+1<<" ";

        }
        cout<<" "<<endl;
    }

   }
};

int main(){
    int n,r;
    cin>>n;
     pattern A;
   for (int i=0;i<n;i++){
     cin >> r ;
     A.printD(r);
   }
  
   return 0;
}