#include<iostream>
#include<map>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    map<int,int> mp;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
     int lower=0;
     int bigger=0;  
    for(int i=0;i<a;i++){
       if(mp[i]>bigger){
        bigger=mp[i];
       }
       if(mp[i]<lower){
        lower=mp[i];
       }
    // cout<<mp[i]<<" ";
      
    }
    cout<<"most occurs:"<<arr[bigger]<<endl;
    cout<<"Least occurs:"<<arr[lower]<<endl;
    return 0;

}