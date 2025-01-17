#ifndef MAGE_H
#define MAGE_H

#include"Unit.h"

class Mage : public Unit {
private:
	unsigned int mana;

public:
	Mage(std::string name, float HP, unsigned int mana);
	void Attack(Unit& target) override;
	void Defense() override;
	void TakeDamage(int value) override;
};

#endif // MAGE_H
