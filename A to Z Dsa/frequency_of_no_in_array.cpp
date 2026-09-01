#include<iostream>
using namespace std;

int f(int no,int arr[],int n){
int count=0;
    for(int i=0;i<n;i++ ){
        if(arr[i]==no){
            count++;
        }
    }
    return count;
};

int main(){
    int no=2;
  
    int arr[]={2,3,4,2,5,6,2};
      int n=sizeof(arr)/sizeof(arr[0]);
       cout<<f(no,arr,n);
    
    return 0;
}