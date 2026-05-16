#include<iostream>
using namespace std;

class User{
    public:
    
    void login(string name){
        
    }
    protected:
    int accessLevel;
    void displayAccessLevel(){
        if(accessLevel>=5){
        cout<<"Admin Logged In"<<endl;
        cout<<"Access Level: "<<accessLevel<<endl;
        }else{
        cout<<"Insufficient Privileges"<<endl;
        }
    }
    private:
    string password;
    
    
};

class Admin: protected User{
    public:
    void adminLogin(string name, int level){
        accessLevel=level;
        login(name);
      displayAccessLevel();
    }
};

int main(){
    string userName;
    int accessLevel;
    cin>>userName>>accessLevel;
    Admin A1;
    A1.adminLogin(userName,accessLevel);
  return 0;
}