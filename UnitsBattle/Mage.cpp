#include "Mage.h"

Mage::Mage(std::string name, float HP, unsigned int mana) : Unit(name, HP), mana(mana) {}

void Mage::Attack(Unit& target) {
    // Mage attack logic

}

void Mage::Defense() {
    // Mage defense logic

}

void Mage::TakeDamage(int value) {
    // Mage specific damage handling
    Unit::TakeDamage(value);
}