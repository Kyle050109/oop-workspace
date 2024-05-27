#include <iostream>
#include "Game.h"

int main(){
    Game game;
    game.initGame(2,2,10,10);

    game.gameLoop(10,1.5);
    auto entities=game.get_entities();
    for (auto entity : entities){
        std::cout << "Entity type: " << entity->getType() << ", Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    return 0;
}
