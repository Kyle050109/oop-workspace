#include <iostream>
#include "Truck.h"

int main(){
    Truck defaultTruck;
    Truck customTruck(123, "Ford");

    
    std::cout << "Default Truck Brand Name: " << defaultTruck.get_brand_name() << std::endl;
    std::cout << "Default Truck Brand Code: " << defaultTruck.get_brand_code() << std::endl;

    
    std::cout << "Custom Truck Brand Name: " << customTruck.get_brand_name() << std::endl;
    std::cout << "Custom Truck Brand Code: " << customTruck.get_brand_code() << std::endl;

    return 0;
}
