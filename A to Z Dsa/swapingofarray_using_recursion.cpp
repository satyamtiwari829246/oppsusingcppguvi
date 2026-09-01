#include<iostream>
using namespace std;

int fun(int arr[],int i,int n){
    if(i>=n){
    
    return 0;
    }
    
     swap(arr[i],arr[n]);
     fun( arr,i+1,n-1);
}

int main(){
    int arr[]={2,3,4,5,6};
    fun(arr,0,4);
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}