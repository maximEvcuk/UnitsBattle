#ifndef ARCHER_H
#define ARCHER_H

#include"Unit.h"

class Archer : public Unit {
private:
	unsigned int arrows;

public:
	Archer(std::string name, float HP, unsigned int arrows);
	void Attack(Unit& target) override;
	void Defense() override;
	void TakeDamage(int value) override;
};

#endif // ARCHER_H
