//
// Created by Otto on 11/7/2023.
//

#include "question.h"
#include <iostream>
#include <string>

using namespace std;

Question::Question(string text, vector<Answer> answers) {
    this->text = text;
    this->answers = answers;
}

string Question::getText() {
    return text;
}

vector<Answer> Question::getAnswers() {
    return this->answers;
}

void Question::print() {
    cout << text << endl;
    for (Answer answer : answers) {
        answer.print();
    }
}

int Question::getNumberFromString(string string) {
    for (int i = 0; i < this->answers.size(); ++i) {
        if(string == this->answers[i].getText()){
            return i;
        }
    }
    return -1;
}