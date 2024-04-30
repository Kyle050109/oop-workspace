#include <iostream>
#include "University.h"
#include "Student.h"
#include "Instructor.h"
#include "Grade.h"
#include "Course.h"
#include "Person.h"
int main(){
    
    University university("My University", "Somewhere");
    university.addCourse(1, "Math");
    university.addCourse(2, "Physics");

    
    Student* student1 = new Student("Alice", 1001);
    Student* student2 = new Student("Bob", 1002);
    Instructor* instructor1 = new Instructor("Dr. Smith");

    
    Course* mathCourse = university.getCourse(1);
    if (mathCourse) {
        mathCourse->addPerson(student1);
        mathCourse->addPerson(student2);
        mathCourse->addPerson(instructor1);
    }

    
    Gradebook* mathGradebook = mathCourse->getGradebook();
    mathGradebook->addGrade(Grade("Midterm", 85));
    mathGradebook->addGrade(Grade("Final", 90));

    
    Course* physicsCourse = university.getCourse(2);
    if (physicsCourse) {
        std::cout << "Physics Course ID: " << physicsCourse->getID() << std::endl;
    }
    return 0;
}
