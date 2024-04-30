#include "Student.h"

Student::Student(std::string name, int studentID) : Person(name), studentID(studentID) {}

int Student::getStudentID(){
    return studentID;
}
