#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"
#include <string>

class Gradebook{
private:
    Grade* grades;
    int numGrades;
    int capacity;
    int gradeCapacity;

public:
    Gradebook();
    ~Gradebook();
    void addGrade(Grade grade);
   
};

#endif 
