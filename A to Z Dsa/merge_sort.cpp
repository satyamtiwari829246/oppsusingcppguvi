#include<iostream>
#include<vector>
using namespace std;

merge_sort(int arr[],int low,int high){
    if(high>=low) return;
    int mid=(low+high)/2;
    merge_sort(arr[],low,high);
    merge_sort(arr[],mid+1,high);
    merge(arr[],low,mid,high);
};

merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
     vector<int>temp(high);
     while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
          temp[i]=arr[i];
          i=i+1;  
        }else{
            temp[j]=arr[j];
            j=j+1;
        }
     }
     while( i <= mid){
       temp[i]=arr[i];
        i = i + 1;
     }

    while (j <= high){
       temp[j]=arr[j];
        j = j + 1;
    }
};

int main(){
    int arr[]= {4,6,1,9,3,5};
    int low=0;
    int high=5;
    merge_sort(arr[],low,high);
    for(auto x:arr[]){
        cout<<x<<" ";
    }
    return 0;
}