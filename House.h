#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"
class House{
public:
House();
House(int numAppliances);
bool addAppliance(Appliance* appliance);
double getTotalPowerConsumption();
~House();

protected:
Appliance** appliances;
int numAppliances;
int capacity;
};
#endif