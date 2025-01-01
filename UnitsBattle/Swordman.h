#ifndef SWORDMAN_H
#define SWORDMAN_H

#include "Unit.h"

class Swordman : public Unit {
private: 
	unsigned int power;

public:
	Swordman(std::string name, int HP, unsigned int power);
	void Attack(Unit& target);
	void Defense();
};

#endif // !SWORDMAN_H