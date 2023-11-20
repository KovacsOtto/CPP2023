//
// Created by Otto on 11/7/2023.
//

#include "Answer.h"
#include <iostream>

Answer::Answer(bool correct, string text) {
    this->correct = correct;
    this->text = text;
}

Answer::Answer(string text) {
    this->text = text;
    this->correct = false;
}

bool Answer::isCorrect() {
    return correct;
}

string Answer::getText() {
    return this->text;
}

void Answer::setCorrect(bool correct) {
    this->correct = correct;
}


void Answer::print() {
    std::cout << text << std::endl;
}