#ifndef STICK_H
#define STICK_H

#include "Weapon.h"

class Stick : public Weapon {
private:
    int charges;

public:
   Stick(std::string name, int charges);
    int GetDamage();
    void UpGrade();
};

#endif // STICK_H