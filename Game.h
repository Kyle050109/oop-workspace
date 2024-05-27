#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
class Game{
public:
    Game(){}
     std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
        for (int i=0;i<numShips;i++){
            auto pos=Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i=0;i<numMines;i++){
            auto pos=Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold){
        for (int iter=0;iter<maxIterations;iter++){
            for (auto entity : entities){
                if (Ship* ship=dynamic_cast<Ship*>(entity)){
                    ship->move(1, 0);
                }
            }

            for (auto entity : entities){
                if (Mine* mine=dynamic_cast<Mine*>(entity)){
                    for (auto target : entities) {
                        if (Ship* ship=dynamic_cast<Ship*>(target)){
                            if (Utils::calculateDistance(mine->getPos(), ship->getPos())<=mineDistanceThreshold){
                                Explosion explosion=mine->explode();
                                explosion.apply(*ship);
                            }
                        }
                    }
                }
            }

            bool allShipsDestroyed=true;
            for (auto entity : entities){
                if (Ship* ship=dynamic_cast<Ship*>(entity)){
                    if (ship->getType()=='S') {
                        allShipsDestroyed=false;
                        break;
                    }
                }
            }

            if (allShipsDestroyed){
                break;
            }
        }
    }

    std::vector<GameEntity*> get_entities(){
        return entities;
    }

    void set_entities(std::vector<GameEntity*>& entities){
        this->entities=entities;
    }

private:
    std::vector<GameEntity*> entities;
};

#endif 
