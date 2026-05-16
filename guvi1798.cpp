#include<iostream>
using namespace std;

class Bankaccount{
    private:
   double principal;
    public:
   Bankaccount(double p){
    principal=p;
   }
   double calc_simpleintrest(double rate,double time) const{
    return (principal*rate*time)/100;
   }
    
};

int main(){
    double principal,rate,time;
    cin>>principal>>rate>>time;
    Bankaccount B1(principal);
    cout<<B1.calc_simpleintrest(rate,time);
    return 0;

}
