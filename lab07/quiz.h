//
// Created by Otto on 11/7/2023.
//

#ifndef MATRIX_CPP_QUIZ_H
#define MATRIX_CPP_QUIZ_H

#include <string>
#include <vector>
#include "question.h"

using namespace std;

class Quiz {
private:
    string name;
    vector<Question> questions;

public:
    Quiz(string name, vector<Question> questions);
    Quiz();
    void setName(string name);
    void readFromFile(string filename);
    string getName();
    vector<Question> getQuestions();
};



#endif //MATRIX_CPP_QUIZ_H
