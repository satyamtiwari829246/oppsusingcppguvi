#include<iostream>
using namespace std;

template <class T>

void myswap(T &a, T &b ){
    T temp;
    temp=a;
    a=b;
    b=temp;
};

int main(){
    int a,b;
    cin>>a>>b;
    myswap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
    
}
