#include <iostream>
#include "quiz.h"
#include "quizgame.h"

int main() {
    Quiz quiz;
    quiz.setName("Teszt_kviz");
    quiz.readFromFile("questions2.txt");

    QuizGame game;
    game.playQuiz(quiz);
}