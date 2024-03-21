#include <iostream>
#include <string.h>
#include "Person.h"
PersonList deepCopyPersonList(PersonList pl){
  PersonList list2;
  list2.numPeople=pl.numPeople;
  list2.people=new Person[pl.numPeople];
  for (int i=0;i<pl.numPeople;i++){
    list2.people[i].name=pl.people[i].name;
    list2.people[i].age=pl.people[i].age;
  }
  return list2;
}