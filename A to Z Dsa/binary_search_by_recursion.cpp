#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>&arr,int low,int high,int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]== target){
        return mid+1;
    }else if(arr[mid]<target){
        return binarysearch(arr,mid+1,high,target);   
    }else{
        return binarysearch(arr,low,mid-1,target);
    }
};

int main(){
    vector<int> arr={2,4,5,6,8,9};
    cout<<binarysearch(arr,0,5,5);
    return 0;
}