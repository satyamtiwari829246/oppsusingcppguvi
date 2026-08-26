#include<iostream>
using namespace std;

int main(){
  int N;
  cin>>N;
  int n[N];
  
  cin>>n[0];
  int large = n[0];
  int small = n[0];
  int sum =n[0];
  for(int a=1; a<N ;a++){
    cin>>n[a];

    if(n[a]>large){
      large = n[a];
    }
    if(small>n[a]){
      small = n[a];
    }
    sum +=n[a];
  }
  cout<<large<<endl;
  cout<<small<<endl;
  cout<<sum<<endl;
    return 0;
  }