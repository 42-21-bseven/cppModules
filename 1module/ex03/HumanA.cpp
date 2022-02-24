#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon) : humanA_weapon(Weapon), name(Name) {
    // this->name = name;
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << humanA_weapon.getType() << std::endl;
}