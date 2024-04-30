#include "University.h"
University::University(std::string name, std::string location)
    : name(name), location(location), courses(nullptr), numCourses(0), capacity(0) {}

University::~University(){
    delete[] courses;
}
void University::addCourse(int id, std::string name) {
    if (numCourses>=capacity){
        int newCapacity=(capacity==0) ? 1 : capacity * 2;
        Course* newCourses=new Course[newCapacity];
        for (int i=0;i<numCourses;i++){
            newCourses[i]=courses[i];
        }
        delete[] courses;
        courses=newCourses;
        capacity=newCapacity;
    }
    courses[numCourses++]=Course(id, name);
}

Course* University::getCourse(int id){
    for (int i=0;i<numCourses;i++){
        if (courses[i].getID()==id){
            return &courses[i];
        }
    }
    return nullptr;
}
