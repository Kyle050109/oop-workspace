#include <iostream>
#include <string.h>
struct Person {
    std::string name;
    int age;
};
struct PersonList {
    Person* people;
    int numPeople;
};