#include "Archer.h"

Archer::Archer(std::string name, int HP, unsigned int arrows) : Unit(name, HP), arrows(arrows) {}

void Archer::Attack(Unit& target) {
    // Archer attack logic

}

void Archer::Defense() {
    // Archer defense logic

}
