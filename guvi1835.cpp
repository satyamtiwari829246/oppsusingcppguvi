#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    char name[20];
    float marks;

public:
    void input() {
        cin >> roll >> name >> marks;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void setMarks(float m) {
        marks = m;
    }
};

int main() {
    int n;
    cin >> n;

    Student s;

    // Write records to binary file
    ofstream fout("students.dat", ios::binary);

    for (int i = 0; i < n; i++) {
        s.input();
        fout.write((char*)&s, sizeof(s));
    }

    fout.close();

    int recordNo;
    float newMarks;

    cin >> recordNo;
    cin >> newMarks;

    // Open file for update
    fstream file("students.dat", ios::in | ios::out | ios::binary);

    // Check valid record
    if (recordNo < 1 || recordNo > n) {
        cout << "Record not found";
        file.close();
        return 0;
    }

    // Move pointer to required record
    file.seekg((recordNo - 1) * sizeof(Student), ios::beg);

    // Read existing record
    file.read((char*)&s, sizeof(s));

    // Update marks
    s.setMarks(newMarks);

    // Move write pointer back
    file.seekp((recordNo - 1) * sizeof(Student), ios::beg);

    // Write updated record
    file.write((char*)&s, sizeof(s));

    cout << "Record Updated Successfully" << endl;
    cout << "Updated Record:" << endl;

    // Read updated record again
    file.seekg((recordNo - 1) * sizeof(Student), ios::beg);
    file.read((char*)&s, sizeof(s));

    s.display();

    file.close();

    return 0;
}