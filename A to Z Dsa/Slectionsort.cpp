#include<iostream>
using namespace std;
int slectionSort(int arr[], int n){
     for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]) {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
     }
};
int main(){
    int n;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    slectionSort(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}