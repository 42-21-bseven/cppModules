#include "DiamondTrap.hpp"

void DiamondTrap::basicIntialize(){
    this->energy = ScavTrap::energy;
    this->hp = FragTrap::hp;
    this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap() : ClapTrap("AnonYMOUS_clap_name"){
    this->_name = "AnonYMOUS";
    // ClapTrap::name = "AnonYMOUS_clap_name";
    basicIntialize();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    this->_name = name;
    // ClapTrap::name = name + "_clap_name";
    basicIntialize();
}

void    DiamondTrap::whoAmI(void){
    std::cout << "My DiamondName is " << this->_name << std::endl;
    std::cout << "My ClapName is " << this->ClapTrap::_name << std::endl;
}

void    DiamondTrap::attack(std::string const &target){
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(){
    std::cout << this->_name << ": \'F.aaaaaaaaack\'\xF0\x9F\x98\x92\n";
}