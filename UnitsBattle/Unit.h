#ifndef UNIT_H
#define UNIT_H

#include"Weapon.h"
#include<iostream>
#include<string>

class Unit {
private:
	float HP;
	Weapon weapon;
	float speed;
	std::string name;

public:
    Unit(std::string name, int HP);
	Unit(int HP);
	Unit(std::string name);
	virtual void Attack(Unit& target);
	virtual void Defense();
	virtual void TakeDamage(int value);
	friend std::ostream& operator<<(std::ostream os, const Unit& unit);
};

#endif // UNIT_H
