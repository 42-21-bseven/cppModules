#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    weapon = NULL;
}

void HumanB::attack(){
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with fists" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}