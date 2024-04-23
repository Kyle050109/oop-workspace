#include"House.h"
House::House(){
    appliances=nullptr;
    capacity=0;
    numAppliances=0;
}
House::House(int numAppliances){
    capacity=numAppliances;
    this->numAppliances=0;
    appliances=new Appliance*[capacity];
}
bool House::addAppliance(Appliance* appliance){
    if (numAppliances<capacity){
        appliances[numAppliances]=appliance;
        numAppliances++;
      return true;
    }else{
        return false;
    }
}
double House::getTotalPowerConsumption(){
    double totalPower=0;
        for (int i=0;i<numAppliances;i++){
            totalPower+=appliances[i]->getPowerConsumption();
        }
        return totalPower;
}
House::~House(){
        for (int i=0;i<numAppliances;i++){
            delete appliances[i];
        }
        delete[] appliances;
    }