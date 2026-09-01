#include<iostream>
using namespace std;

 void fun( int arr[],int i,int n){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[5-i-1]);
    fun(arr,i+1,n);
 }


int main(){
    int arr[]={2,3,4,5,6};
    fun(arr,0,5);
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}