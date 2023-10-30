//
// Created by Otto on 10/23/2023.
//

#ifndef MAIN_05_CPP_QUIZ_H
#define MAIN_05_CPP_QUIZ_H

#include <vector>
#include <string>
#include "Question.h"
#include "Answer.h"

using namespace std;

class Quiz {
public:
    string name;
    static vector<Question> questions;

    [[maybe_unused]] Quiz(string name);
    void ReadinQuestionsFromFile(string filename);
    string getName() const;
    vector<Question> getQuestions() const;
//    void print() const;
};


#endif //MAIN_05_CPP_QUIZ_H
