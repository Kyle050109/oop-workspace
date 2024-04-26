#include "Airplane.h"

Airplane::Airplane() : AirVehicle(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) numPassengers = 0;
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    double fuelUsage = 0.25;
    if (headwind >= 60) fuelUsage = 0.5;
    fuelUsage += 0.001 * numPassengers;
    
    double fuelConsumed = fuelUsage * minutes;
    if ((get_fuelLevel() - fuelConsumed) < 20) {
        std::cout << "Insufficient fuel to fly. Refuel required." << std::endl;
        return;
    }
    
    set_fuelLevel(get_fuelLevel() - fuelConsumed);
    incrementFlights();
}
