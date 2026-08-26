#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("priyam.txt");
    fout<<"ABCDEFGH";
    fout.close();
    
    ifstream fin("priyam.txt");
    string a;
    getline(fin,a);

    fin.seekg(4);
    char ch;
    fin.get(ch);
    cout<<ch;
    fin.close();
    return 0;
}