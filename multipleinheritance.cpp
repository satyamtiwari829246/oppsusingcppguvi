#include<iostream>
using namespace std;

class a{
    public:
  virtual void display(){
    cout<<"base1";
  }
};

class b{
    public:
  virtual void display(){
    cout<<"base2";

  }

};

class c:public a,public b{
    public:
virtual void display(){
    cout<<"derived";
    
  }
};


int main(){
    c obj;
    obj.display();
    return 0;
}