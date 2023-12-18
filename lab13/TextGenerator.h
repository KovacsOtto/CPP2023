//
// Created by Otto on 12/18/2023.
//

#ifndef MAIN_13_CPP_TEXTGENERATOR_H
#define MAIN_13_CPP_TEXTGENERATOR_H

#include <string>
#include <iostream>

using namespace std;

class TextGenerator {
public:
    virtual void trainFromText(string trainingText) = 0;
    virtual void trainFromFile(string filename) = 0;
    virtual string generate(string startWords, int numWords=10) = 0;
    virtual ~TextGenerator() = default;
};


#endif //MAIN_13_CPP_TEXTGENERATOR_H
