#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mp;//map add 0 to all index
   for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;//for precomputation
   }

   //for checking
   int a;
   cin>>a;
   while(a--){
    int number;
    cin>>number;
    cout<<mp[number]<<endl;
   }

   
   return 0;
}