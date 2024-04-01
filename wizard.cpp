#include "wizard.h"
void Wizard:: castSpell(Player* opponent){
    cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}
Wizard::Wizard(string name, int health, int damage, int mana): Player(name, health, damage), mana(mana) {}
