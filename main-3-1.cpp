#include"House.h"
int main(){
    House myHouse(5);
    Appliance *fridge1=new Appliance(50);
    Appliance *fridge2=new Appliance(30);
    myHouse.addAppliance(fridge1);
    myHouse.addAppliance(fridge2);
std::cout << "Total Power Consumption: " << myHouse.getTotalPowerConsumption() << std::endl;
return 0;
}