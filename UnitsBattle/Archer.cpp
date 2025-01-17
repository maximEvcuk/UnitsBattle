#include "Archer.h"

Archer::Archer(std::string name, float HP, unsigned int arrows) : Unit(name, HP), arrows(arrows) {}

void Archer::Attack(Unit& target) {
    // Archer attack logic

}

void Archer::Defense() {
    // Archer defense logic

}

void Archer::TakeDamage(int value) {
    // Archer specific damage handling
    Unit::TakeDamage(value);
}
