//
// Created by Otto on 11/20/2023.
//

#include "Account.h"

int Account::counter = 0;
Account::Account(double balance) {
    this->balance = balance;
    this->id = counter++;
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        cout << "Successful withdraw" << endl;
        balance -= amount;
    }
    else {
        cout << "Insufficient funds" << endl;
        return false;
    }
    return true;
}

int Account::getId() const {
    return id;
}

double Account::getBalance() const {
    return balance;
}

void Account::print(ostream &os) const {
    os << "id: " << id << ", balance: " << balance;
}

ostream &operator<<(ostream &os, const Account &account) {
    account.print(os);
    return os;
}

