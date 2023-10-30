//
// Created by Otto on 10/23/2023.
//

#ifndef MAIN_05_CPP_ANSWER_H
#define MAIN_05_CPP_ANSWER_H

#include <string>

using namespace std;

class Answer {
public:
    bool isCorrect;
    Answer(string text, bool isCorrect);
    string text;
};


#endif //MAIN_05_CPP_ANSWER_H
