#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    Ship ship(0, 0);
    ship.move(1, 1);
    Mine mine(2, 2);
    Explosion explosion=mine.explode();
    explosion.apply(ship);
    std::cout << "Ship position after explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;
    std::cout << "Ship type after explosion: " << ship.getType() << std::endl;

    return 0;
}
