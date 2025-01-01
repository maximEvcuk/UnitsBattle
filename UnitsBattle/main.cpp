#include<iostream>
#include"Unit.h"
#include "Swordman.h"
#include "Archer.h"
#include "Mage.h"
#include "Sword.h"
#include "Bow.h"
#include "Stick.h"


int main() {
	Swordman swordman("Warrior", 100, 50);
	Archer archer("Ranger", 80, 30);
	Mage mage("Sorcerer", 60, 100);

	Sword sword("Excalibur");
	Bow bow("Longbow", 20);
	Stick stick("Magic Stick", 5);

	std::cout << swordman << std::endl;
	std::cout << archer << std::endl;
	std::cout << mage << std::endl;


	return 0;
}