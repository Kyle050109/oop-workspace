#include "Gradebook.h"

Gradebook::Gradebook() : grades(nullptr), numGrades(0), capacity(0) {}

Gradebook::~Gradebook(){
    delete[] grades;
}

void Gradebook::addGrade(Grade grade){
    if (numGrades>=capacity){
        int newCapacity=(capacity==0) ? 1 : capacity * 2;
        Grade* newGrades=new Grade[newCapacity];
        for (int i=0;i<numGrades;i++){
            newGrades[i]=grades[i];
        }
        delete[] grades;
        grades=newGrades;
        capacity=newCapacity;
    }
    grades[numGrades++]=grade;
}

