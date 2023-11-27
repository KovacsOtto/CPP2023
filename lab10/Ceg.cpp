//
// Created by Otto on 11/27/2023.
//

#include <algorithm>
#include <iostream>
#include "Ceg.h"

void Ceg::ujSzemelyHozzaad(Alkalmazott *alkalmazott) {
    //if(find(alkalmazottak.begin(),alkalmazottak.end(),alkalmazott)!=alkalmazottak.end())
    alkalmazottak.push_back(alkalmazott);
}

void Ceg::kirugAlkalmazott(int id) {
    for (int i = 0; i < alkalmazottak.size(); ++i) {
        if(alkalmazottak[i]->getId()==id)
        {
            alkalmazottak.erase(alkalmazottak.begin()+i);
        }
    }
}

void Ceg::hozzarendeles(Alkalmazott *alkalmazott, Manager *manager) {
    manager->addAlkalmazott(alkalmazott);
}

void Ceg::lerendeles(Alkalmazott *alkalmazott, Manager *manager) {
    manager->deleteAlkalmazott(alkalmazott);
}

void Ceg::alkalmazottakListazasa() {
    for (int i = 0; i < alkalmazottak.size(); ++i) {
        cout << *alkalmazottak[i] << endl;
    }
}

void Ceg::osszesManagerListazasa() {
    for (int i = 0; i < alkalmazottak.size(); ++i) {
        if(typeid(*alkalmazottak[i])==typeid(Manager))
        {
            cout << *alkalmazottak[i] << endl;
        }
    }

}
