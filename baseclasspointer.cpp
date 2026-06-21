#include<iostream>
using namespace std;

class base{
    public:
   virtual void display(){
     cout<<"ram ram"<<endl;
    }
};

class derived:public base {
    public:
    void display(){
    cout<<"Hare Hare"<<endl;
    }
};


int main(){
    base* obj;
    derived a;
   
    obj=&a;
    obj->display();
    return 0;
};
