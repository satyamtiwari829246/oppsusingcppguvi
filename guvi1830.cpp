#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Employee {
public:
    int id;
    char name[20];
    double salary;

    void input() {
        cin >> id >> name >> salary;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    int n;
    cin >> n;

    Employee emp;

    // Write objects to binary file
    ofstream fout("employees.dat", ios::binary);

    for (int i = 0; i < n; i++) {
        emp.input();
        fout.write((char*)&emp, sizeof(emp));
    }

    fout.close();

    int r;
    cin >> r;

    // Check valid record number
    if (r < 1 || r > n) {
        cout << "Record not found";
        return 0;
    }

    // Open file for reading
    ifstream fin("employees.dat", ios::binary);

    // Random access using seekg
    fin.seekg((r - 1) * sizeof(emp), ios::beg);

    fin.read((char*)&emp, sizeof(emp));

    if (fin) {
        cout << "Employee Found:" << endl;
        emp.display();
    }
    else {
        cout << "Record not found";
    }

    fin.close();

    return 0;
}