#include "Helicopter.h"
 Helicopter::Helicopter(){}
 Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}
 void Helicopter::fly(int headwind, int minutes){
    if (get_fuel() < 20) {
        return;
    }
 }