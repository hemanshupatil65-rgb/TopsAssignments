#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    void deposit(int amount) {
        balance = balance + amount;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance = balance - amount;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount b;
    b.setBalance(1000);
    b.deposit(500);
    b.withdraw(300);

    cout << "Balance = " << b.getBalance();
    return 0;
}

