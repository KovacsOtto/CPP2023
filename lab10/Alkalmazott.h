//
// Created by Otto on 11/27/2023.
//

#ifndef MAIN_10_CPP_ALKALMAZOTT_H
#define MAIN_10_CPP_ALKALMAZOTT_H

#include <string>
#include "Szemely.h"

using namespace std;

class Alkalmazott : public Szemely {
protected:
    string munkakor;
    int id;
    static int idCounter;
public:
    Alkalmazott(string firstname, string lastname, int year,  string munkakor);
    virtual void print(ostream& os) ;
    int getId();
};


#endif //MAIN_10_CPP_ALKALMAZOTT_H
