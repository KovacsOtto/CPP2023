#include <iostream>
#include <chrono>
#include "Student.h"
#include "GraduationDao.h"

using namespace std;

int main() {
    auto start=chrono::high_resolution_clock::now();
    Student s1 = Student(1, "John", "Doe");
    s1.addGrade("math", 8.50);
    s1.addGrade("hungarian", 9.25);
    s1.addGrade("romanian",7.25);
    s1.computeAverage();
    cout << s1 << endl;
    cout << "--------------" << endl;
    GraduationDao dao(2023);
    dao.enrollStudents("names.txt");
    cout << "Number of enrolled students: " << dao.numEnrolled() << endl;
    string subjects[] = {"math", "hungarian", "romanian"};
    int numSubjects = sizeof(subjects) / sizeof(subjects[0]);
    for (int i = 0; i < numSubjects; ++i) {
        dao.saveGradesForSubject(subjects[i], subjects[i] + ".txt");
    }
    dao.computeAverage();
    cout <<"Number of passed students: " << dao.numPassed() << endl;
    auto end=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::milliseconds>(end-start);
    cout << "Elapsed time: " << duration.count() << " milliseconds" << endl;
    return 0;
}