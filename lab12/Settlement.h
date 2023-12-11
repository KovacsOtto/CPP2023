//
// Created by Otto on 12/11/2023.
//

#ifndef MAIN_12_CPP_SETTLEMENT_H
#define MAIN_12_CPP_SETTLEMENT_H

#include <string>
#include <iostream>

using namespace std;

class Settlement {
        string name = "";
        string county = "";
        int population = 0;
// constructor, getters, setters, inserter operator
public:
    Settlement(const string &name, const string &county, int population);
    string getName() const;
    string getCounty() const;
    int getPopulation() const;
    void setName(const string &name);
    void setCounty(const string &county);
    void setPopulation(int population);
    friend istream & operator >> (istream &in, Settlement &s);
    friend ostream & operator << (ostream &out, const Settlement &s);
};

#endif //MAIN_12_CPP_SETTLEMENT_H
