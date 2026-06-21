#include<iostream>
using namespace std;
template<class T>

T square(T a){
 return a*a;
}

int main(){
    auto a=2.9;
    auto b= 3;
    auto c= 2.007875776768778;
    cout<<square(a)<<endl;
    cout<<square(b)<<endl;
    cout<<square(c)<<endl;
    return 0;
}