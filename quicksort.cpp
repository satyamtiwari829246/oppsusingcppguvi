#include<iostream>
using namespace std;
int quick(int arr[],int low,int high){
int pivot=arr[low];
int i=low;
int j=high;
while(i<j){
    while(arr[i]<=arr[pivot]&&i<high){
        i++;
    };
    while(arr[i]>arr[pivot]&&j>low){
        j--;
        if(i<j) swap(arr[i],arr[j]);
    }
}
swap(arr[low],arr[j]);
return j;

}
int quick_sort(int arr[],int low,int high){
if(low<high){
    int partion = quick(arr,low,high);
    quick_sort(arr,low,partion-1);
    quick_sort(arr,partion+1,high);
}
}



int main(){
    int arr[]={2,1,2,3};
    
    quick_sort(arr,0,3);
    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}