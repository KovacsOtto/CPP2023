#include <iostream>
#include "quiz.h"
#include "quizgame.h"

using namespace std;

int main() {
    Quiz quiz("Quiz");
    quiz.ReadinQuestionsFromFile("Kviz.txt");
    QuizGame quizGame;
    quizGame.playQuiz(quiz);

    return 0;
}