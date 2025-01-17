#ifndef  WEAPON_H
#define  WEAPON_H

#include<string>

enum class Grade {
    Common,
    Rare,
    Epic,
    Legendary,
    Mythic
};

class Weapon {
private:
    Grade grade;
    std::string name;
    int damage;

public:
    Weapon(Grade grade, std::string name);
    Weapon(std::string name);
    int GetDamage();
    virtual void UpGrade();

};

#endif // WEAPON_H
