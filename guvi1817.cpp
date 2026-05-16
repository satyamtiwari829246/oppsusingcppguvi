#include<iostream>
using namespace std;

class Vehicle{
    public:
    double price;
    double Tax;
    Vehicle(double p){
        price= p;
    }
    virtual void calculateTax()=0;
     ~Vehicle(){};
};

class Car:public Vehicle{
    protected:
    string fuelType;
    public:
    Car(string f,double p):Vehicle(p){
        fuelType = f;
    }
    virtual void calculateTax()= 0;
    
};

class ElectricCar: public Car{
    private:
    int batteryCapacity;
    public:
    ElectricCar(int Capacity,string f,double p):Car(f,p){
        batteryCapacity = Capacity;
    }
    void calculateTax() override{
        Tax= price*0.10;
        if(fuelType=="Electric"){
            Tax*=0.5;
        }
        cout<<"Final Tax: "<<Tax<<endl;
    }
};

int main(){
    double price;
    int Capacity;
    string fuelType;
    cin>>price>>fuelType>>Capacity;
    Vehicle *v= new ElectricCar(Capacity,fuelType,price);
    v->calculateTax();
    delete v;
    return 0;
    
}