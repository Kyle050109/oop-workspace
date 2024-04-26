#include "AirVehicle.h"
#include <iostream>

int main() {
    AirVehicle plane(5000); 
    std::cout << "Initial fuel: " << plane.get_fuel() << std::endl; 
    std::cout << "Initial number of flights: " << plane.get_numberOfFlights() << std::endl; 

    plane.fly(50, 120); 
    std::cout << "Fuel after flying: " << plane.get_fuel() << std::endl; 
    std::cout << "Number of flights after flying: " << plane.get_numberOfFlights() << std::endl; 

    plane.refuel(); 
    std::cout << "Fuel after refueling: " << plane.get_fuel() << std::endl; 

    return 0;
}
