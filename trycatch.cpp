#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    try{
   try{
    if(cin.fail());
    throw string("invalid input");
   } 
   catch(string a){
    cout<<a<<endl;
    throw;
   } }
   catch(string b){
    cout<<b<<endl;
   }
   return 0;
}