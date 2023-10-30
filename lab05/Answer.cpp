//
// Created by Otto on 10/23/2023.
//

#include "Answer.h"

#include <utility>

Answer::Answer(string text, bool isCorrect) {
    this->text = std::move(text);
    this->isCorrect = isCorrect;
}
