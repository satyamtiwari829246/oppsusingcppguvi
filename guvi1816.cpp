#include<iostream>
using namespace std;

class Vault{
    friend class Auditor;
    private:
    string password;
    protected:
    int vaultID;
    public:
    void open(){
    }
    void setPassword(string pass){
        password = pass;
    }
};

class SecureVault: protected Vault{
    friend class Auditor;
    public:
    void setDetails(int id, string pass){
        vaultID = id;
        setPassword(pass);  // use public setter instead of direct access
    }
};

class Auditor{
    public:
    void audit(SecureVault &sv, string inputPassword){
        if(sv.password == inputPassword){
            cout << "Vault " << sv.vaultID << " Audit Successful" << endl;
        } else {
            cout << "Audit Failed" << endl;
        }
    }
};

int main(){
    int vaultID;
    string storedPassword, inputPassword;
    cin >> vaultID >> storedPassword >> inputPassword;

    SecureVault sv;
    sv.setDetails(vaultID, storedPassword);

    Auditor a;
    a.audit(sv, inputPassword);

    return 0;
}