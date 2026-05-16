#include<iostream>
using namespace std;

class Student{
    string name;
     float marks;
    public:
   
    
    void input(){
       
      cin>>name>>marks;
     
    }
    void Display(){
       cout<<"Name:"<<name<<", Marks:"<<marks<<endl;
    }
  static double calculateAverage(Student* arr[],int n){
                  int sum=0;
                  for (int i= 0; i< n;i++){
                    sum +=arr[i]->marks;
                  }
                  return (double)sum/n;
                  
    }
};


int main(){
    int n;
    cin>> n;
    Student* arr[n];
    for (int i = 0; i<n; i++){
         arr[i] =new Student;
        arr[i]->input();
    }
    cout<<"Student Details:"<<endl;
    for (int i =0; i< n; i++){
        arr[i]->Display();
    } 
     
    double avg = Student::calculateAverage(arr,n);
    cout<<"Average Marks:"<<avg<<endl;
    for(int i=0; i < n; i++){
        delete arr[i];//only delete heap memory
    }
    return 0;
    
}