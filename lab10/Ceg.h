//
// Created by Otto on 11/27/2023.
//

#ifndef MAIN_10_CPP_CEG_H
#define MAIN_10_CPP_CEG_H

#include <vector>
#include "Alkalmazott.h"
#include "Manager.h"


using namespace std;
class Ceg {
protected:
    vector<Alkalmazott*> alkalmazottak;
    string name;
public:
    Ceg(const string &name) : name(name) {};
    void ujSzemelyHozzaad(Alkalmazott* alkalmazott);
    void kirugAlkalmazott(int id);
    void hozzarendeles(Alkalmazott* alkalmazott, Manager *manager);
    void lerendeles(Alkalmazott* alkalmazott, Manager *manager);
    void alkalmazottakListazasa();
    void osszesManagerListazasa();
};


#endif //MAIN_10_CPP_CEG_H
