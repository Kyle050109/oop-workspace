#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Cell.h"
#include "Trap.h"
#include "Character.h"
#include "Utils.h"
#include<iostream>
class Game{
protected:
    std::vector<Cell*> grid;

public:
    Game(){}
    std::vector<Cell*>& getGrid(){return grid;}
    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
    for (int i=0;i<numCharacters;i++){
        auto pos=Utils::generateRandomPos(gridWidth, gridHeight);
        Character* character =new Character(std::get<0>(pos), std::get<1>(pos));
        grid.push_back(character);
    }
    for (int i=0;i<numTraps;i++){
        auto pos=Utils::generateRandomPos(gridWidth, gridHeight);
        Trap* trap=new Trap(std::get<0>(pos), std::get<1>(pos));
        grid.push_back(trap);
    }
}
    void gameLoop(int maxIterations, double trapActivationDistance){
    for (int iteration=0;iteration<maxIterations;iteration++){
        for (auto cell : grid){
            Character* character=dynamic_cast<Character*>(cell);
            if (character){
                character->move(1, 0);
                for (auto otherCell : grid){
                    Trap* trap=dynamic_cast<Trap*>(otherCell);
                    if (trap&&trap->isActive()){
                        double distance=Utils::calculateDistance(character->getPos(), trap->getPos());
                        if (distance<=trapActivationDistance){
                            trap->apply(*character);
                        }
                    }
                }
                if (std::get<0>(character->getPos())>=10||std::get<1>(character->getPos())>=10){
                    std::cout << "Character has won the game!" << std::endl;
                    return;//return 0; ? or just return;
                }
            }
        }
    }
    std::cout << "Maximum number of iterations reached. Game over." << std::endl;
}
};
#endif