#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int target){
    int start=0;
    int end = n-1;
    while(start<=end){
        int mid = start +(end-1);
        if (target==arr[mid]){
            return mid+1;
        }
        if(target>arr[mid]){
            end=mid-1;

        }else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[5]={2,4,6,8,9};
    cout<<binarySearch(arr,5,8);
    return 0;
}