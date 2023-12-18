//
// Created by Otto on 12/18/2023.
//

#ifndef MAIN_13_CPP_IMPLEMENTTEXTGENERATOR_H
#define MAIN_13_CPP_IMPLEMENTTEXTGENERATOR_H

#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "TextGenerator.h"

using namespace std;

class SimpleTextGenerator: public TextGenerator {
    map<string, vector<string>> data;
public:
    virtual void trainFromText(string trainingText) override;
    virtual void trainFromFile(string filename) override;
    virtual string generate(string startWords, int numWords=6) override;
    void printData() const; // a map kiíratása
};


#endif //MAIN_13_CPP_IMPLEMENTTEXTGENERATOR_H
