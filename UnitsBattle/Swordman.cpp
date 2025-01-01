#include "Swordman.h"

Swordman::Swordman(std::string name, int HP, unsigned int power) : Unit(name, HP), power(power) {}

void Swordman::Attack(Unit& target) {
    // Swordman attack logic

}

void Swordman::Defense() {
    // Swordman defense logic

}

