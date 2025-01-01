#ifndef BOW_H
#define BOW_H

#include "Weapon.h"

class Bow : public Weapon {
private:
    int maxDamage;

public:
    Bow(std::string name, int maxDamage);
    int GetDamage();
    void UpGrade();
};

#endif // BOW_H