//
// Created by Otto on 11/27/2023.
//

#ifndef MAIN_10_CPP_MANAGER_H
#define MAIN_10_CPP_MANAGER_H


#include <vector>
#include "Alkalmazott.h"

class Manager: public Alkalmazott {
protected:
    vector<Alkalmazott*> beosztottak;
    const static string MANAGER_MUNKAKOR;
public:
    Manager(string firstname, string lastname, int year, string munkakor);
    void addAlkalmazott(Alkalmazott* alkalmazott);
    void deleteAlkalmazott(Alkalmazott* alkalmazott);
    int beosztottakSzama();
    virtual void print(ostream& os);
};


#endif //MAIN_10_CPP_MANAGER_H
