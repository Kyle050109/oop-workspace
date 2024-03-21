#include <iostream>
#include <string.h>
#include "Person.h"
extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);
int main(){
    PersonList list=createPersonList(3);
    PersonList copiedList=shallowCopyPersonList(list);
    for (int i=0;i<copiedList.numPeople;i++){
        std::cout << "Name:" << copiedList.people[i].name << " is " << copiedList.people[i].age << " years old." << std::endl;
    }
    delete[] list.people;
    return 0;
}