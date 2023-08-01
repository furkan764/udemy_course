#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
    private:
    //atributes
    string name;
    int balance;   

    public:
    //methods
    //declared inline
    void set_balance(int bal) { balance = bal; }
    double get_balance() { return balance; }

    //methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(int amount);
    bool withdraw(int amount);
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(int amount) {
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(int amount) {
    if (balance-amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        cout << "Deposit OK" << endl;
    } else {
        cout << "Deposit Not allowed" << endl;
    }

    if (frank_account.withdraw(500.0)) {
        cout << "Withdrawal OK" << endl;
    } else {
        cout << "Not sufficient funds" << endl;
    }

    if (frank_account.withdraw(1500.0)) {
        cout << "Withdrawal OK" << endl;
    } else {
        cout << "Not sufficient funds" << endl;
    }

    return 0;
}
