#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirVehicle.h"
#include <string.h>
class Helicopter:public AirVehicle{
private:
    std::string name;
public:
    Helicopter();
    Helicopter(int w, std::string n);
    void fly(int headwind, int minutes);
    std::string get_name();
    void set_name(std::string n);
};
#endif

