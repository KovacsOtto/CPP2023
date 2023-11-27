//
// Created by Otto on 11/27/2023.
//

#include "Alkalmazott.h"
#include "Szemely.h"
#include <iostream>

int Alkalmazott::idCounter = 0;

Alkalmazott::Alkalmazott(string firstname, string lastname, int year, string munkakor):Szemely(firstname,lastname,year) {
    this->munkakor = munkakor;
    this->id = ++idCounter;
}

void Alkalmazott::print(ostream &os) {
    Szemely::print(os);
    os << ", munkakor: " << munkakor;
}

int Alkalmazott::getId() {
    return this->id;
}
