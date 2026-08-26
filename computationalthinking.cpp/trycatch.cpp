#include<iostream>
#include<iomanip>
using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     try{
//    try{
//     if(cin.fail());
//     throw string("invalid input");
//    } 
//    catch(string a){
//     cout<<a<<endl;
//     throw;
//    } }
//    catch(string b){
//     cout<<b<<endl;
//    }
//    return 0;
// }


#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int roll = 101;
    string name = "Satyam";
    float marks = 89.5678;

    cout << "Formatted Output using Manipulators\n\n";

    cout << left << setw(10) << "Roll No"
         << setw(15) << "Name"
         << setw(10) << "Marks" << endl;

    cout << "-----------------------------------" << endl;

    cout << left << setw(10) << roll
         << setw(15) << name
         << fixed << setprecision(2) << setw(10) << marks << endl;

    return 0;
}