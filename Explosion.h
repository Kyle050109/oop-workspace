#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect{
public:
    Explosion(std::tuple<int, int> pos) : GameEntity(std::get<0>(pos), std::get<1>(pos), 'E'){}

    void apply(GameEntity& entity) override {
        entity=GameEntity(-1,-1,'X');
    }
};

#endif
