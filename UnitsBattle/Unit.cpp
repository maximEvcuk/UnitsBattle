#include"Unit.h"

Unit::Unit(std::string name, int HP) : name(name), HP(HP), speed(1.0f) {}
Unit::Unit(std::string name, int HP) : name(name), HP(HP), speed(1.0f) {}
Unit::Unit(int HP) : HP(HP), speed(1.0f) {}
Unit::Unit(std::string name) : name(name), HP(100), speed(1.0f) {}

void Unit::Attack(Unit& target) {
	//Attack logic
}

void Unit::Defense() {
	//Defense logic
}

void Unit::TakeDamage(int value) {
	if (value > 0){
		HP -= value;
	}
}

std::ostream& operator<<(std::ostream os, const Unit& unit) {
	os << "Unit: " << unit.name << ", HP: " << unit.HP;
	return os;
 }