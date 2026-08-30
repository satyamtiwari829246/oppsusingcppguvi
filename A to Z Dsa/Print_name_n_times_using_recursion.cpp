#include<iostream>
using namespace std;

void print_name(int i, int n){
    if(i>n)
    return ;
    cout<<"Satyam"<<endl;
    print_name(i+1,n);
};

int main(){

    print_name(0,3);
    
    return 0;
}