#include "Swordman.h"

Swordman::Swordman(std::string name, float HP, unsigned int power) : Unit(name, HP), power(power) {}

void Swordman::Attack(Unit& target) {
    // Swordman attack logic

}

void Swordman::Defense() {
    // Swordman defense logic

}

void Swordman::TakeDamage(int value) {
    // Swordman specific damage handling
    Unit::TakeDamage(value);
}

