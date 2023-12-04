//
// Created by Otto on 12/4/2023.
//

#ifndef MAIN_11_CPP_GRADUATIONDAO_H
#define MAIN_11_CPP_GRADUATIONDAO_H

#include <string>
#include <map>
#include <iostream>
#include "Student.h"

class GraduationDao {
    int year{2023};
    map<int, Student> students;
public:
    explicit GraduationDao(int year) : year(year) {}
    void enrollStudents(const string &filename);
    void saveGradesForSubject(const string &subject, const string &filename);
    void computeAverage();
    int numEnrolled() const;
    int numPassed() const;
// throws out_of_range exception for nonexistent id
    Student findById(int id) const;
    double getAverageBySubject(const string &subject) const;
};



#endif //MAIN_11_CPP_GRADUATIONDAO_H
