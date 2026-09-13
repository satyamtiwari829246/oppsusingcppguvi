#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 cout<<"Enter the position where the element is to be inserted"<<endl;
 int pos;
 cin>>pos;
 cout<<"Enter the element to be inserted"<<endl;
 int element;
 cin>>element;
  for(int i=n;i>=pos;i--){
    arr[i]=arr[i-1];
 }
 arr[pos-1]=element;
 n++;
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
   cout<<"Enter the position of the element to be deleted"<<endl;   
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}