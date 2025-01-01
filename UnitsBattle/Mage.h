#ifndef MAGE_H
#define MAGE_H

#include"Unit.h"

class Mage : public Unit {
private:
	unsigned int mana;

public:
	Mage(std::string name, int HP, unsigned int mana);
	void Attack(Unit& target);
	void Defense();
};

#endif // MAGE_H
