#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Patient{
    public:
    string name;
    int age;
    string disease;
    void input(){
        cout<<"Enter Name: "<<endl;
        getline(cin,name);
        cout<<"enter age: "<<endl;
        cin>>age;
        cin.ignore();
        cout<<"enter disease: "<<endl;
        getline(cin,disease);
    }
    void save(){
        ofstream fout("patient.txt");
        fout<<name<<endl;
        fout<<age<<endl;
        fout<<disease<<endl;
        fout.close();
    }

    void load(){
        ifstream fin("patient.txt");
        getline(fin,name);
        fin>>age;
        fin.ignore();
        getline(fin,disease);
        fin.close();
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Disease: "<<disease<<endl;
    }
};

class Doctor{
    public:
    string name;
    string specialization;
    int experience;
    void input(){
        cout<<"Enter Name: "<<endl;
        getline(cin,name);
        cout<<"enter specialization: "<<endl;
        getline(cin,specialization);
        cout<<"enter experience: "<<endl;
        cin>>experience;
    }
    void save(){
        ofstream fout("doctor.txt");
        fout<<name<<endl;
        fout<<specialization<<endl;
        fout<<experience<<endl;
        fout.close();
    }

    void load(){
        ifstream fin("doctor.txt");
        getline(fin,name);
        getline(fin,specialization);
        fin>>experience;
        fin.close();
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"Experience: "<<experience<<" years"<<endl;
    }
};

class Medicine{
    public:
    string name;
    string manufacturer;
    double price;
    void input(){
        cout<<"Enter Name: "<<endl;
        getline(cin,name);
        cout<<"enter manufacturer: "<<endl;
        getline(cin,manufacturer);
        cout<<"enter price: "<<endl;
        cin>>price;
    }
    void save(){
        ofstream fout("medicine.txt");
        fout<<name<<endl;
        fout<<manufacturer<<endl;
        fout<<price<<endl;
        fout.close();
    }

    void load(){
        ifstream fin("medicine.txt");
        getline(fin,name);
        getline(fin,manufacturer);
        fin>>price;
        fin.close();
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Manufacturer: "<<manufacturer<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

class Appointment{
    public:
    string patientName;
    string doctorName;
    string date;
    void input(){
        cout<<"Enter Patient Name: "<<endl;
        getline(cin,patientName);
        cout<<"enter Doctor Name: "<<endl;
        getline(cin,doctorName);
        cout<<"enter Date: "<<endl;
        getline(cin,date);
    }
    void save(){
        ofstream fout("appointment.txt");
        fout<<patientName<<endl;
        fout<<doctorName<<endl;
        fout<<date<<endl;
        fout.close();
    }

    void load(){
        ifstream fin("appointment.txt");
        getline(fin,patientName);
        getline(fin,doctorName);
        getline(fin,date);
        fin.close();
    }

    void display(){
        cout<<"Patient Name: "<<patientName<<endl;
        cout<<"Doctor Name: "<<doctorName<<endl;
        cout<<"Date: "<<date<<endl;
    }
};


int main(){
    Patient p1;
    Doctor d1;
    Medicine m1;
    Appointment a1;

    cout<<"Enter Patient Details: "<<endl;
    p1.input();
    p1.save();

    cout<<"Enter Doctor Details: "<<endl;
    d1.input();
    d1.save();

    cout<<"Enter Medicine Details: "<<endl;
    m1.input();
    m1.save();

    cout<<"Enter Appointment Details: "<<endl;
    a1.input();
    a1.save();

    cout<<"\nPatient Details: "<<endl;
    p1.load();
    p1.display();

    cout<<"\nDoctor Details: "<<endl;
    d1.load();
    d1.display();

    cout<<"\nMedicine Details: "<<endl;
    m1.load();
    m1.display();

    cout<<"\nAppointment Details: "<<endl;
    a1.load();
    a1.display();

    return 0;

}