#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type) : position(x, y), type(type){}

    std::tuple<int, int> getPos(){
        return position;
    }

    char getType(){
        return type;
    }

protected:
    std::tuple<int, int> position;
    char type;
};

#endif
