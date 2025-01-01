#ifndef ARCHER_H
#define ARCHER_H

#include"Unit.h"

class Archer : public Unit {
private:
	unsigned int arrows;

public:
	Archer(std::string name, int HP, unsigned int arrows);
	void Attack(Unit& target);
	void Defense();
};

#endif // ARCHER_H
