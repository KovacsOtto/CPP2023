//
// Created by Otto on 11/27/2023.
//

#include "Szemely.h"
#include <iostream>

using namespace std;

Szemely::Szemely(string firsname, string lastname, int year) {
        this->firstname = firsname;
        this->lastname = lastname;
        this->bornYear = year;
}

void Szemely::print(ostream &os)  {
    os << firstname << " " << lastname << ", born in: " << bornYear;
}

ostream &operator<<(ostream &os, Szemely &szemely) {
    szemely.print(os);
    return os;
}

