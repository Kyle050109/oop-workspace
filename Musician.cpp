#include "Musician.h"

Musician::Musician(){
    exp_=0;
    ins_="null";
}
Musician::Musician(std::string instrument, int experience){
    exp_=experience;
    ins_=instrument;
}
std::string Musician::get_instrument(){return ins_;}
int Musician::get_experience(){return exp_;}
