#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
    private:
        Weapon *humanB_weapon;
        std::string name;
    public:
        HumanB(std::string Name);
        void setWeapon(Weapon &humanB_weapon);
        void attack();
};

#endif