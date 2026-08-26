#include<iostream>
#include <algorithm>
using namespace std;

template <class T>

void Shortarray(T arr[],int n){
    sort(arr,arr+n);
}
template <class T>
void display(T arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int a[]={12,4,6,5,32,6,2,1};
    float b[]={12.3,4.5,6.67,5.89,32.21,6.45,2.78,1.43};
    char c[]={'a','c','f','b','z','d','g','e'};
     Shortarray(a,8);
     Shortarray(b,8);
     Shortarray(c,8);
     display(a,8);
     display(b,8);
     display(c,8);
    
     return 0;
}