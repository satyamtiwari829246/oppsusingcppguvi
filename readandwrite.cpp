#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream fout("data.txt");
    fout<<"satyam kumar"<<endl;
    fout.close();

    ifstream fin("data.txt");
    string name;
    getline(fin,name);
    cout<<name;

    return 0;

}