#ifndef SWORDMAN_H
#define SWORDMAN_H

#include "Unit.h"

class Swordman : public Unit {
private: 
	unsigned int power;

public:
	Swordman(std::string name, float HP, unsigned int power);
	void Attack(Unit& target) override;
	void Defense() override;
	void TakeDamage(int value) override;
};

#endif // !SWORDMAN_H