#include"Sword.h"

Sword::Sword(std::string name) : Weapon(Grade::Common, name) {}

int Sword::GetDamage() {
	return 15; // Example damage value
}

void Sword::UpGrade() {
	// Upgrade logic
}


