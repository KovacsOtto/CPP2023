//
// Created by Otto on 11/20/2023.
//

#ifndef MAIN_09_CPP_CUSTOMER_H
#define MAIN_09_CPP_CUSTOMER_H

#include <string>
#include "Account.h"
#include <vector>
using namespace std;
class Customer {
private:
    int id; //generated field
    string firstName;
    string lastName;
    static int counter;
public:
    Customer(const string& firstName, const string& lastName);
    const string &getFirstName() const;
    void setFirstName(const string &firstName);
    const string &getLastName() const;
    void setLastName(const string &lastName);
    int getId() const{ return id;}
    Account& getAccount(int id);//returns the ID of the created account
    int newAccount(double balance);
    bool deleteAccount(int id);
    int getNumAccounts() const;
    void print(ostream& os) const;
    friend ostream& operator<<(ostream& os, const Customer& customer);
    Account& operator[](int index);
    const Account& operator[](int index) const;

    vector<Account> accounts;
};


#endif //MAIN_09_CPP_CUSTOMER_H
