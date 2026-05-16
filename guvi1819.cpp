#include<iostream>
using namespace std;

class Person{
    protected :
    string name;
    int id;
    public:
    Person(string n,int i){
        id=i;
        name=n;
         cout<<"Person Constructor"<<endl;
    }
   
};

class Manager:virtual public Person{
    protected:
    string Department;
    public:
    Manager(string dep,string nam,int idi):Person(nam,idi){
        Department = dep;
         cout<<"Manager Constructor"<<endl;
    }
    
};

class Engineer: virtual public Person{
    protected:
    string Project;
    public:
    Engineer(string pro,string nam2,int idi1):Person(nam2,idi1){
        Project = pro;
         cout<<"Engineer Constructor"<<endl;
    }
   
};

class TechLead: public Manager,public Engineer{
  public:
  TechLead(string na,int iD,string Depa,string proj):Person(na,iD),Manager(Depa,na,iD),Engineer(proj,na,iD){
      cout<<"TechLead Constructor"<<endl;
  }
  
  
  void display(){
     cout<<"Name: "<<name<<" ID: "<<id<<" Dept: "<<Department<<" Project: "<<Project<<endl; 
  
  }
};

int main(){
    string name,department,project;
    int id;
    cin>>name>>id>>department>>project;
    TechLead t1(name,id,department,project);
    t1.display();
    return 0;
};