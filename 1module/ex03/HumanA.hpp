#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    private:
        Weapon &humanA_weapon;
        std::string name;
    public:
        HumanA(std::string Name, Weapon &Weapon);
        void attack();
};

#endif