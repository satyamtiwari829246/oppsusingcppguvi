#include<iostream>
using namespace std;

class University{
  public :
    string name;

    class Student{
     public:
    
     float marks;
     string Grade;
   void calculategrade(){
     if (marks>=80){
       Grade="A";
     } else if (marks>=60)
     {
       Grade="B";
     } else {
        Grade="C";
     };
   } 
     
     
    };
};

int main(){
    string Name;
    float Marks;
    cin>>Name>>Marks;
    University galgotias;
    galgotias.name=Name;
    University::Student s;
    s.marks=Marks;
    s.calculategrade();
    cout<<s.Grade;

}