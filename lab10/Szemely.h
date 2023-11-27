//
// Created by Otto on 11/27/2023.
//

#ifndef MAIN_10_CPP_SZEMELY_H
#define MAIN_10_CPP_SZEMELY_H

#include <string>

using namespace std;

class Szemely {
protected:
    string firstname;
    string lastname;
    int bornYear;
public:
    Szemely(string firstname, string lastname, int year);
    virtual void print(ostream& os);
};
ostream &operator<<(ostream& os,Szemely& szemely);


#endif //MAIN_10_CPP_SZEMELY_H
