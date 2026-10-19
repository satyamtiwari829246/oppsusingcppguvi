#include <iostream>
using namespace std;
void merge(int a[],int low,int mid,int high){
  int i=low;
  int j= mid+1;
  int k= high;
  int temp[k];
  while(i<=mid&&j<=high){
    if( a[i]<=a[j]){
        temp[k]=a[i];
        i=i+1;
    }else
    temp[k]=a[j];
    j=j+1;
    k=k+1;
  } 
  while(j<=high){
    temp[k]=a[j];
    j=j+1;
    k=k+1;
  } 
  for(int i=low;i<=high;i++){
    a[i]=temp[i];
  }
}
void merge_sort(int a[],int low,int high){
    int mid;
    if (low<high){

       mid=(low+high)/2;
        
    }
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
};



int main(){
    int arr[]={2,4,1,3,5,9,6};
    merge_sort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<""<<endl;
    }
    return 0;
}
