//
// Created by Otto on 10/23/2023.
//
#include <fstream>
#include <cstring>
#include <iostream>
#include <utility>
#include "quiz.h"
#include "Answer.h"
#include "Question.h"

using namespace std;

Quiz::Quiz(string name) {
    this->name = std::move(name);
    this->questions = vector<Question>();
}

void Quiz::ReadinQuestionsFromFile(string filename){
    ifstream file(filename);
    while(!file.eof()){
        string q;
        int corr;
        string answeers[4];
        getline(file, q);
        Question question(q);
        getline(file, answeers[0]);
        getline(file, answeers[1]);
        getline(file, answeers[2]);
        getline(file, answeers[3]);
        file >> corr;
        int k=0;
        while(k<4){
            if(k==corr){
                Answer answer(answeers[corr], true);
                question.answers.push_back(answer);
            }
            else{
                Answer answer(answeers[k], false);
                question.answers.push_back(answer);
            }
            k++;
        }
        questions.push_back(question);
    }
}

string Quiz:: getName()  const{
    return name;
}

vector<Question> Quiz:: getQuestions() const{
    return questions;
}






