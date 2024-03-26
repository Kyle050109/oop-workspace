#ifndef ORHESTRA_H
#define ORHESTRA_H
#include <string>
#include <iostream>
#include "Musician.h"
class Orchestra{
public:
Orchestra(); 
Orchestra(int size); 
int get_current_number_of_members(); 

bool has_instrument(std::string instrument); 
std::string get_instrument();
Musician *get_members(); 

bool add_musician(Musician new_musician);
~Orchestra();
private:
int cap_;
int num_;
Musician* arr_;
std::string ins_;
};
#endif
