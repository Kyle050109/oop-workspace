#include <iostream>
#include "Game.h"
int main(){
    Game game;
    game.initGame(3,2,10,10); 
    game.gameLoop(10,1.5); 
    return 0;
}