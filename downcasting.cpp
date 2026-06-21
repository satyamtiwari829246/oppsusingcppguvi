#include<iostream>
using namespace std;

class a{
    public:
   virtual void display(){
        cout<<"base class called"<<endl;
    }
};

class b:public a{
    public:
    void display(){
        cout<<"derived class is called"<<endl;
    }
};

int main(){
    a* ptr= new b();

    b* obj= dynamic_cast<b*>(ptr);
  if(obj){
    cout<<"cast sucessful";
  } else{
    cout<<"cast unsucessfull";
  }
  return 0;
}

