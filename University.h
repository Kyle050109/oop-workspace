#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Course.h"
#include<string>
class University{
private:
    std::string name;
    std::string location;
    Course* courses;
    int numCourses;
    int capacity;
    int courseCapacity;

public:
    University(std::string name, std::string location);
    ~University();
    void addCourse(int id, std::string name);
    Course* getCourse(int id);
    
};
#endif 
