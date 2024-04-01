#include <iostream>
#include "player.h"
using namespace std;
Player::Player(string name, int health, int damage){
    this-> name=name;
    this-> health=health;
    this->damage=damage;
}
void Player::attack(Player* opponent , int damage){
opponent->takeDamage(damage);
}
void Player::takeDamage (int damage){
    health-=damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
int Player::getHealth(){
    return health;
}
string Player::getName(){
    return name;
}