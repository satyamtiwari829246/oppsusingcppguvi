#include<iostream>
#include<stdexcept>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {

        if (b < 0) {
            throw invalid_argument("Invalid initial balance");
        }

        balance = b;
    }

    void withdraw(double amount) {

        if (amount <= 0) {
            throw invalid_argument("Invalid withdrawal amount");
        }

        if (amount > balance) {
            throw runtime_error("Insufficient balance");
        }

        balance -= amount;

        cout << "Withdrawal successful" << endl;
        cout << "Remaining balance: " << balance << endl;
    }
};

int main() {

    double initial_balance, withdraw_amount;
    cin >> initial_balance >> withdraw_amount;

    try {

        BankAccount acc(initial_balance);
        acc.withdraw(withdraw_amount);

    }
    catch (exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}