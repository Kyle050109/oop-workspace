
#include "Helicopter.h"
#include <iostream>

int main() {
    Helicopter helicopter(5690, "Hawk One");
    helicopter.refuel(); // Assuming the helicopter starts fully refueled
    helicopter.fly(45, 10); // Flying with a headwind of 45 km/h for 10 minutes

    std::cout << "Helicopter name: " << helicopter.get_name() << std::endl;
    std::cout << "Remaining fuel: " << helicopter.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << helicopter.get_numberOfFlights() << std::endl;

    return 0;
}