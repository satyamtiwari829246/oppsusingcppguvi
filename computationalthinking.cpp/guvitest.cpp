#include<iostream>
#include<vector>
#include<numeric>
#include<string>
#include<stdexcept>
using namespace std;

namespace store{
     class Product{
        string name;
        double price;
        int quantity;
        public:
        Product(string n, double p,int q){
            if (p<0||q<0)
                throw
                invalid_argument("invailed input");
                name=n;
                price=p;
                quantity=q;
            }
            double totalValue()
                 const {
                    return price*quantity;
                 }
                 void display() const{
                    cout<<"Product name:"<<name<<endl;
                    cout<<"Price:"<<price<<endl;
                    cout<<"Quantity:"<<quantity<<endl;
                    cout<<"Total value:"<<totalValue()<<endl;
                 }
            
        };
        template <typename T>
     class Inventory{
        vector<T> products;
        public:
        void addProduct(const T& product){
            products.push_back(product);
        }
        void displayAll() const{
            for(const auto& p:products)
                p.display();

            }
        
        double totalInventoryValue() const{
            return accumulate(
                products.begin(),
                products.end(),
                0.0,[](double sum ,const T& p){
            return sum+p.totalValue();
        }
      );
        }
            
        };
    }

    int main(){
        try{
            store::Inventory<store::Product> inv;
             cout<<"enter the type of how many types of products you want to add:"<<endl;
             int n;
             cin>>n;
            for(int i=1;i<=n;i++){
                string name;
                double price;
                int quantity;
                cout<<"enter product name, price and quantity:"<<endl;
                cin>>name>>price>>quantity;
                store::Product p(name,price,quantity);
                 inv.addProduct(p);
            }
               
                inv.displayAll();
                cout<<"Total inventory value:"<<inv.totalInventoryValue()<<endl;
            }
        
        catch(...){
            cout<<"invalid input";
        }
        
    
    return 0;
     }
    