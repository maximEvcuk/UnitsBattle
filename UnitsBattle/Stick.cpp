
#include"Stick.h"

Stick::Stick(std::string name, int charges) : Weapon(Grade::Common, name), charges(charges) {}

int Stick::GetDamage() {
	return 5; // Example damage value
}

void Stick::UpGrade() {
	// Upgrade logic
}