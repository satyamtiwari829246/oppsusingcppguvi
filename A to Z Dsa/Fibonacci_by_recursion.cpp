#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1) return n;
    int last=fibonacci(n-1);
    int second_last=fibonacci(n-2);
    return last+second_last; 

}

int main(){
    int n;
    cout<<"enter the number of terms:"<<endl;
    cin>>n; 
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}

