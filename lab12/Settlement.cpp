//
// Created by Otto on 12/11/2023.
//

#include "Settlement.h"

using namespace std;

Settlement::Settlement(const string &name, const string &county, int population) : name(name), county(county),
                                                                                   population(population) {}

string Settlement::getName() const {
    return this->name;
}

string Settlement::getCounty() const {
    return this->county;
}

int Settlement::getPopulation() const {
    return this->population;
}

void Settlement::setName(const string &name) {
    this->name = name;
}

void Settlement::setCounty(const string &county) {
    this->county = county;
}

void Settlement::setPopulation(int population) {
    this->population = population;
}

istream &operator>>(istream &in, Settlement &s) {
    in >> s.name;
    in >> s.county;
    in >> s.population;
    return in;
}

ostream &operator<<(ostream &out, const Settlement &s) {
    out << s.name << "," << s.county << "," << s.population;
    return out;
}
