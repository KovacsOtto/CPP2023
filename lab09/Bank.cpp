//
// Created by Otto on 11/20/2023.
//

#include <fstream>
#include "Bank.h"

Bank::Bank(const string &) {
    name = "Bank";
}

int Bank::newCustomer(const string &firstName, const string &lastName) {
    customers.push_back(Customer(firstName, lastName));
    return customers[customers.size() - 1].getId();
}

bool Bank::deleteCustomer(int id) {
    if (id >= 0 && id < customers.size()) {
        customers.erase(customers.begin() + id);
        return true;
    }
    return false;
}

Customer &Bank::getCustomer(int id) {
    return customers[id];
}

void Bank::printCustomersAndAccounts(ostream &os) const {
    for (const auto & customer : customers) {
        customer.print(os);
        for(auto & account : customer.accounts){
            account.print(os);
            os << endl;
        }
        os << endl;
    }
}

void Bank::printCustomers(ostream &os) const {
    for (const auto & customer : customers) {
        customer.print(os);
        os << endl;
    }
}

vector<int> Bank::loadCustomers(const string &filename) {
    ifstream file(filename);
    string firstName, lastName;
    while (file >> firstName >> lastName) {
        newCustomer(firstName, lastName);
    }
    return {};
}


