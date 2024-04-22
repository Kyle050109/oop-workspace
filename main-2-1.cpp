#include"Fridge.h"
int main(){
    Fridge myFridge(150, 300);
    std::cout << "Power Consumption: " << myFridge.getPowerConsumption() << "W" << std::endl;
    return 0;
}