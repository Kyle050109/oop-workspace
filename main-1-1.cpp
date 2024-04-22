#include"Appliance.h"
int main(){
    Appliance appliance(5);
    appliance.set_powerRating(100);
    appliance.turnOn();
    std::cout << "The appliance is " << (appliance.get_isOn() ? "on" : "off") << "." << std::endl;
    std::cout << "The power consumption is " << appliance.getPowerConsumption() << std::endl;
    std::cout << "The power rating is " << appliance.get_powerRating() << std::endl;
return 0;
}