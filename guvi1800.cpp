#include<iostream>
#include<iomanip>
using namespace std;

// class Employee{
//     public:
//     double Basic,HRA,DA,Tax;

//     Employee(){
//       cin >> Basic >> HRA >> DA >> Tax;
//       HRA=Basic*HRA*0.01;
//       DA=Basic*DA*0.01;
//      double gross_salary = Basic + HRA + DA;
//      Tax=gross_salary*Tax*0.01;
//      double Net_salary = gross_salary-Tax;
//      cout<<fixed<<setprecision(2);
//      cout<<Net_salary;
//     }
    

// };

// int main(){
//     Employee A;
    
// }


class A{
    private:
    int x=10;
    protected:
    int y = 12;
    private:
    int z=43;
    friend void Acess(){

    }
};

void Acess( A obj){
    cout<<obj.z<<endl;
}

class B:protected A{

};

int main(){
    B obj1;
    cout<<obj1.x<<endl;
    cout<<obj1.y<<endl;
    Acess(obj1);
    return 0;

}