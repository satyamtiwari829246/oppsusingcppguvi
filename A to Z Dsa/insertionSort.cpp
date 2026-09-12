#include<iostream>
using namespace std;
// method 1
void insertionSort(int arr[],int n){ //O(n^2)
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
//method 2
void insertionSort2(int arr[],int n){  // O(n^2)
    for(int i=1;i<n;i++){
        // int current =arr[i];//=4 =1
        int prev=i-1;//=0=1
        while(prev>=0 && arr[prev]>arr[i]){//*//
           
            arr[prev+1] = arr[prev];//ind 2=4;1=2
            prev--;//=0=-1
        }
        arr[prev+1]=arr[i];//=1
    }
}

int main(){
    int arr[]={2,4,1,5,3};
    int n=5;
    insertionSort2(arr,n);
    for(auto it: arr){
        cout<<it<<" ";
    }
    return 0;
}