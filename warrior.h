#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
class Warrior: public Player{
    private:
    string weapon;
    public:
    void swingWeapon (Player* opponent);
    Warrior(string name, int health, int damage, string weapon);
};
#endif