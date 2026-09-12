#include<iostream>
using namespace std;

int main(){
    int arr[] ={32,54,56,34,25,65,87,56,43,87};
   int pos,value;
  int n=10;
   cout<<"Enter the position of insertion: "<<endl;
   cin>>pos;

   cout<<"Enter the value:"<<endl;
   cin>>value;
   for(int i=n;i>=pos;i--){
   arr[i+1]=arr[i];
   }
   arr[pos-1]=value;
   n++;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

   cout<<"Enter the position of Delation"<<endl;
   for(int i=pos-1;i<n-1;i++){
    arr[i]=arr[i+1];
   }
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }

}
