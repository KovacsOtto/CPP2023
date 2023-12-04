//
// Created by Otto on 12/4/2023.
//

#include "Student.h"


//Student::Student(int id, const string &firstName, const string &lastName) {
//    this->id = 0;
//    this->firstName = firstName;
//    this->lastName = lastName;
//}

Student::Student(int id, const string &firstName, const string &lastName) : id(id), firstName(firstName),
                                                                            lastName(lastName) {}
int Student::getId() const {
    return id;
}

void Student::setId(int id) {
    this->id = id;
}

const string &Student::getFirstName() const {
    return firstName;
}

const string &Student::getLastName() const {
    return lastName;
}

void Student::addGrade(const string &subject, double grade) {
    this->grades.insert(make_pair(subject,grade));
}

double Student::getGrade(const string &subject) const {
    if(subject!="math" && subject!="hungarian" && subject != "romanian")
    {
        throw out_of_range("Nonexistent subject");
    }
    return grades.at(subject);
}

const map<string, double> &Student::getGrades() const {
    return grades;
}

void Student::computeAverage() {
    double sum = 0.0;
    for (const auto &grade : grades) {
        sum += grade.second;
    }
    this->average = sum / this->grades.size();
}

double Student::getAverage() const {
    return this->average;
}

ostream &operator<<(ostream &os, const Student &student) {
    os << "Id: " << student.id << ", First Name: " << student.firstName << ", Last Name: " << student.lastName << " Avarage:" << student.average;
    return os;
}


