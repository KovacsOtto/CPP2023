//
// Created by Otto on 11/7/2023.
//

#ifndef MATRIX_CPP_ANSWER_H
#define MATRIX_CPP_ANSWER_H

#include <string>

using namespace std;

class Answer {
private:
    bool correct;
    string text;

public:
    Answer(bool correct, string text);
    Answer(string text);

    bool isCorrect();
    string getText();
    void setCorrect(bool correct);
    void print();
};


#endif //MATRIX_CPP_ANSWER_H
