//
// Created by Otto on 11/7/2023.
//

#ifndef MATRIX_CPP_QUESTION_H
#define MATRIX_CPP_QUESTION_H

#include "answer.h"
#include <string>
#include <vector>

using namespace std;

class Question{
private:
    string text;
    vector<Answer> answers;

public:
    Question(string text, vector<Answer> answers);
    string getText();
    vector<Answer> getAnswers();
    void print();
    int getNumberFromString(string string);
};

#endif //MATRIX_CPP_QUESTION_H
