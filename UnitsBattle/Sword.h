#ifndef SWORD_H
#define SWORD_H

#include"Weapon.h"

class Sword : public Weapon {
public:
	Sword(std::string name);
	int GetDamage();
	void UpGrade();
};

#endif // !SWORD_H
