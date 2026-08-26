#include<iostream>
#include<iomanip>
using namespace std;

class LibraryBook{
    private:
    string bookTittle;
    int bookID;
    int daysLate;
    double fineAmount=0;
    public:
    void setDetails(string title,int id,int lateDays){
        bookTittle=title;
        bookID=id;
        daysLate=lateDays;
    }
    void calculateFine(){
        if (daysLate<=5){
          fineAmount= daysLate*2;

        }else if (daysLate>5)
        {
            fineAmount= daysLate*5;

        }
        
       
    }
    void display(){
        cout<<bookTittle<<endl;
        cout<<daysLate<<endl;
        cout<<bookID<<endl;
        cout<<fixed<<setprecision(2);
        cout<<fineAmount<<endl;
    }

};

int main (){
    string tittle;
    int name;
    int daylate;
    LibraryBook b1;
    cin>>tittle>>name>>daylate;
    b1.setDetails(tittle,name,daylate);
    b1.calculateFine();
    b1.display();
    return 0;
}