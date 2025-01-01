#include"Bow.h"

Bow::Bow(std::string name, int maxDamage) : Weapon(Grade::Common, name), maxDamage(maxDamage) {}

int Bow::GetDamage() {
	return maxDamage; // Example damage value
}

void Bow::UpGrade() {
	// Upgrade logic
}