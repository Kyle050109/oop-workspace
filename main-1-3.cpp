#include <iostream>
#include <string.h>
#include "Person.h"
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);
int main(){
  PersonList original=createPersonList(3);
  PersonList copiedList=deepCopyPersonList(original);
  for (int i=0;i<copiedList.numPeople;i++){
    std::cout << "Name: " << copiedList.people[i].name << ", Age: " << copiedList.people[i].age << std::endl;
  }
  delete[] original.people;
  delete[] copiedList.people;
  return 0;
}