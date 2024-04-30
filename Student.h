#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person{
private:
    int studentID;

public:
    Student(std::string name, int studentID);
    int getStudentID();
};

#endif
