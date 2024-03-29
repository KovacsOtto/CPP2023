//
// Created by Otto on 12/4/2023.
//

#include <fstream>
#include "GraduationDao.h"

void GraduationDao::enrollStudents(const string &filename) {
    ifstream  file(filename);
    string line;
    while(!file.eof()){
        int id;
        string firstName;
        string lastName;
        file >> id >> firstName >> lastName;
        students.insert(make_pair(id, Student(id, firstName, lastName)));
    }
    file.close();
}

void GraduationDao::saveGradesForSubject(const string &subject, const string &filename) {
    ifstream file(filename);
    if(!file){
        throw runtime_error("File not found");
    }
    while(!file.eof()){
        int id;
        double grade;
        file >> id >> grade;
        for(auto& student : students){
            if(student.first == id){
                student.second.addGrade(subject, grade);
            }
        }
    }
    file.close();
}

void GraduationDao::computeAverage() {
    for(auto& student : students){
        student.second.computeAverage();
    }
}

int GraduationDao::numEnrolled() const {
    return students.size();
}

int GraduationDao::numPassed() const {
    int count = 0;
    for(auto& student : students){
        if(student.second.getAverage() >= 6){
            if(student.second.getGrade("math") >= 5 && student.second.getGrade("hungarian") >= 5 && student.second.getGrade("romanian") >= 5){
                count++;
            }
        }
    }
    return count;
}

Student GraduationDao::findById(int id) const {
    if(students.find(id) == students.end()){
        throw out_of_range("Nonexistent id");
    }
    return students.at(id);
}

double GraduationDao::getAverageBySubject(const string &subject) const {
    double sum = 0.0;
    for(auto& student : students){
        sum += student.second.getGrade(subject);
    }
    return sum / students.size();
}
