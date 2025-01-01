#include "Mage.h"

Mage::Mage(std::string name, int HP, unsigned int mana) : Unit(name, HP), mana(mana) {}

void Mage::Attack(Unit& target) {
    // Mage attack logic

}

void Mage::Defense() {
    // Mage defense logic

}
