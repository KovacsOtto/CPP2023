//
// Created by Otto on 10/23/2023.
//

#include "Question.h"
#include <iostream>
#include <utility>
using namespace std;

Question::Question(string text) {
    this->text = std::move(text);
    this->answers = vector<Answer>();
}

void Question::print() const {
    cout << text << endl;
    for(int i=0; i<answers.size(); i++){
        cout << i+1 << ". " << answers[i].text << endl;
    }
}
vector<Answer> Question::getAnswers() const {
    return answers;
}