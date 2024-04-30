#include "Course.h"
Course::Course():id(0),name("nullptr"), enrolledPersons(nullptr), numPersons(0), capacity(0){}
Course::Course(int id, std::string name)
    : id(id), name(name), enrolledPersons(nullptr), numPersons(0), capacity(0) {}
Course::~Course() {
    for (int i=0;i<numPersons;i++){
        delete enrolledPersons[i]; 
    }
    delete[] enrolledPersons;
}

void Course::addPerson(Person* person){
    if (numPersons >= capacity){
        int newCapacity=(capacity==0) ? 1 : capacity * 2;
        Person** newEnrolledPersons=new Person* [newCapacity];
        for (int i=0;i<numPersons;i++){
            newEnrolledPersons[i]=enrolledPersons[i];
        }
        delete[] enrolledPersons;
        enrolledPersons=newEnrolledPersons;
        capacity=newCapacity;
    }
    enrolledPersons[numPersons++]=person;
}

Gradebook* Course::getGradebook() {
    Gradebook* gradebookPtr=new Gradebook();
    return gradebookPtr;
}
int Course::getID(){
    return id;
}
