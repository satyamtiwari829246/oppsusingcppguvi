#include<iostream>
#include<fstream>
using namespace std;

int main(){
     
    ofstream fout("satyam.txt");
    fout<<"satyam"<<endl;
    fout<<"priyam";

  fout.close();
  

ifstream fin("satyam.txt");
string name;
while(getline(fin,name)){
    cout<<name<<endl;
}
fin.close();
return 0;

}