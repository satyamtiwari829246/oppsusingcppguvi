#include<iostream>
#include<vector>
using namespace std;

class Account {
public:
    double balance;
    Account(double b) {
        balance = b;
    }
    virtual double calculateInterest() {
        return 0;
    }
};

class FixedDeposit : public Account {
public:
    double intrestRate;
    FixedDeposit(double b, double r) : Account(b) {
        intrestRate = r;
    }

    double calculateInterest() override {  // ✅ Matching signature
        return (balance * intrestRate) / 100;
    }
};

int main() {
    double balance, rate;
    cin >> balance >> rate;

    // ❌ Object slicing — stores only Account part, loses FixedDeposit data
    vector<Account> v1;
    FixedDeposit fd(balance, rate);
    v1.push_back(fd);
    cout << "Interest (Sliced): " << v1[0].calculateInterest() << endl;

    // ✅ Pointer vector — preserves full object, virtual dispatch works
    vector<Account*> v2;
    v2.push_back(new FixedDeposit(balance, rate));
    cout << "Interest (Correct): " << v2[0]->calculateInterest() << endl;

    return 0;
}