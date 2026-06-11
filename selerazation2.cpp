#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Employee{
    public:
    string name;
    int id;
    double salary;
    void input(){
        cout<<"Enter name: "<<endl;
        getline(cin,name);
        cout<<"Enter id: "<<endl;
        cin>>id;
        cin.ignore(); // To ignore the newline character left in the input buffer
        cout<<"Enter salary: "<<endl;
        cin>>salary;
    }

    void store(){
        ofstream fout("employee.txt");
        fout<<name<<endl;
        fout<<id<<endl;
        fout<<salary<<endl;
        fout.close();
    }

    void Acess(){
        ifstream fin("employee.txt");
        getline(fin,name);
        fin>>id;
       
        fin>>salary;
        fin.close();
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
 
int main(){
    Employee E1,E2;
    E1.input();
    E1.store();
    E2.Acess();
    E2.display();
    return 0;
}