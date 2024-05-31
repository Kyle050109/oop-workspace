#include <iostream>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

class SampleEffect : public Effect{
public:
    void apply(Cell& cell){
        cell.setType('E');
    }
};

int main(){
    
    Cell cell(0, 0, 'A');
    std::cout << "Initial position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")\n";
    std::cout << "Initial type: " << cell.getType() << "\n";

    cell.setPos(2, 3);
    cell.setType('B');
    std::cout << "New position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")\n";
    std::cout << "New type: " << cell.getType() << "\n";

    
    SampleEffect effect;
    effect.apply(cell);
    std::cout << "Type after effect: " << cell.getType() << "\n";

    
    auto randomPos=Utils::generateRandomPos(10, 10);
    std::cout << "Random position: (" << std::get<0>(randomPos) << ", " << std::get<1>(randomPos) << ")\n";

    auto distance=Utils::calculateDistance(cell.getPos(), randomPos);
    std::cout << "Distance from cell to random position: " << distance << "\n";

    return 0;
}