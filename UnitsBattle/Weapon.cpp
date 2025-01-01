#include"Weapon.h"

Weapon::Weapon(Grade grade, std::string name) : grade(grade), name(name), damage(10) {}
Weapon::Weapon(std::string name) : name(name), grade(Grade::Common), damage(10) {}
int Weapon::GetDamage() {
	return damage;
}
void Weapon::UpGrade() {
	//UpGrade logic
}