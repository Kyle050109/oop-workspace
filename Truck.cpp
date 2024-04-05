#include "Truck.h"

Truck::Truck():brand_name(""),brand_code(0){} 

Truck::Truck(int b_code, std::string b_name):brand_name(b_name), brand_code(b_code){}

Truck::~Truck(){} 

std::string Truck::get_brand_name(){ return brand_name;}

int Truck::get_brand_code(){return brand_code;}
