#include <iostream>
#include "GameEntity.h"
#include "Utils.h"
int main(){
    std::tuple<int, int> pos1=Utils::generateRandomPos(10, 10);
    std::tuple<int, int> pos2=Utils::generateRandomPos(10, 10);

    double distance=Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between pos1 and pos2: " << distance << std::endl;

    return 0;
}
