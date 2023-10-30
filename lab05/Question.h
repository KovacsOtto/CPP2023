//
// Created by Otto on 10/23/2023.
//

#ifndef MAIN_05_CPP_QUESTION_H
#define MAIN_05_CPP_QUESTION_H

#include <vector>
#include <string>
#include "Answer.h"

using namespace std;

class Question {
public:
    explicit Question(string text);
    string text;
    vector<Answer> answers;
    void print() const;
    vector<Answer> getAnswers() const;
};

#endif //MAIN_05_CPP_QUESTION_H
