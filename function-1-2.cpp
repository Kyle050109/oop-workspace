#include <iostream>
#include <string.h>
#include "Person.h"
PersonList createPersonList(int n){
    PersonList list;
    list.people=new person[n];
    list.numPeople=n;
    for (int i=0;i<n;i++){
        list.people[i].name="Jane Doe";
        list.people[i].age=1;
    }
    return list;
}