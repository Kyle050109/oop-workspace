#include "warrior.h"
void Warrior::swingWeapon (Player* opponent){
    cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}
Warrior::Warrior(string name, int health, int damage, string weapon): Player(name, health, damage), weapon(weapon) {}