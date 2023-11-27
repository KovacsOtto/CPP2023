//
// Created by Otto on 11/27/2023.
//

#include "Manager.h"
#include <iostream>

Manager::Manager(string firstname, string lastname, int year, string munkakor) : Alkalmazott(firstname, lastname, year,
                                                                                             munkakor) {
    this->munkakor = MANAGER_MUNKAKOR;
}

void Manager::addAlkalmazott(Alkalmazott *alkalmazott) {
    beosztottak.push_back(alkalmazott);
}

void Manager::deleteAlkalmazott(Alkalmazott *alkalmazott) {
    for (int i = 0; i < beosztottak.size(); ++i) {
        if(beosztottak[i]==alkalmazott)
        {
            beosztottak.erase(beosztottak.begin()+i);
            return;
        }
    }
}

int Manager::beosztottakSzama() {
    return beosztottak.size();
}

void Manager::print(ostream &os) {
    Alkalmazott::print(os);
    os << endl;
    for(auto alkalmazott:beosztottak)
    {
        os << "\t";
        alkalmazott->print(os);
        os << endl;
    }
}

const string Manager::MANAGER_MUNKAKOR = "manager";
