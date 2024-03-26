#include <string>
#include <iostream>
#include "Orchestra.h"
Orchestra::Orchestra(){
   cap_=0;
   num_=0;
   arr_=NULL;
}
Orchestra::Orchestra(int size){
    cap_=size;
    num_=0;
    arr_= new Musician [size];
}
int Orchestra::get_current_number_of_members(){return num_;}
bool Orchestra::has_instrument(std::string instrument){
    for(int i=0;i<num_;i++){
       if(arr_[i].get_instrument() == instrument){
       return true;
       }
    }
    return false;
}
bool Orchestra::add_musician(Musician new_musician){
    if(num_<cap_){
        arr_[num_]=new_musician;
        num_++;
        return true;
    }
    return false;
}
Musician* Orchestra::get_members(){return arr_;}
Orchestra::~Orchestra(){
    delete[] arr_;
}
std::string Orchestra::get_instrument(){return ins_;}