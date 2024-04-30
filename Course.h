#ifndef COURSE_H
#define COURSE_H
#include"Person.h"
#include"Gradebook.h"
#include<string>
class Course{
private:
    std::string name;
    int id;
    Person** enrolledPersons;
    int numPersons;
    int capacity;
    Gradebook gradebook;
    
public:
    Course();
    int getID();
    Course(int id, std::string name);
    ~Course();
    void addPerson(Person* person);
   Gradebook* getGradebook();
   };
    
#endif
