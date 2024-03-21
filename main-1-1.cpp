#include <iostream>
#include <string.h>
#include "Person.h"
extern Person* createPersonArray ( int n);
int main(){
    int n=3;
    Person* people=createPersonArray (n);
    for (int i=0;i<n;i++){
        std::cout << "Person " << i << ": " << people[i].name << ", " << people[i].age << std::endl;
    }
    delete[] people;
    return 0;
}