#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name) {
    // this->name = name;
    humanB_weapon = NULL;
}

void HumanB::attack(){
    if (humanB_weapon != NULL)
        std::cout << name << " attacks with their " << humanB_weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with fists" << std::endl;
}

void HumanB::setWeapon(Weapon &humanB_weapon){
    this->humanB_weapon = &humanB_weapon;
}