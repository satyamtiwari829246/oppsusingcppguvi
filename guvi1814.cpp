
#include<iostream>
using namespace std;

class Employee{
    public:
    void processSalary(int baseSalary){
       double salary = baseSalary;
       double Total= salary+calcuateBonus(baseSalary);
       displaTotal(Total);
    }
    protected:
    int calcuateBonus(int baseSalary){
        return(baseSalary)*(0.2);
        
    }
    private:
    void displaTotal(int totalSalary){
        cout<<"Total Salary: "<<totalSalary<<endl;
    }
    
};

class SecureEmployee:private Employee{
    public:
    void generateSalary(int baseSalary){
        if(baseSalary<=0){
            cout<<"Invalid Salary"<<endl;
            return ;
        }
        processSalary(baseSalary);
    }
};

int main(){
    int baseSalary;
    cin>>baseSalary;
    SecureEmployee emp;
    emp.generateSalary(baseSalary);
    return 0;
    
}
