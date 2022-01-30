#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include "ClapTrap.hpp"

void ClapTrap::basicIntialize(){
    this->energy = 10;
    this->hp = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(){
    name = "unnamed";
    basicIntialize();
    std::cout << "I born without name\n";
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    basicIntialize();
    std::cout << "I born named " << name << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << name << " oh shit\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& other) {
    this->name = other.name;
    this->hp = other.hp;
    this->energy = other.energy;
    this->damage = other.damage;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
}

void ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << this->name <<  " attacks " << target << ", causing " << this->damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "I'm " << name << ", attacked by " << amount << " hitpoints!" << std::endl;
};
void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "I'm " << name << ", healed by " << amount << " hitpoints!" << std::endl;
};

#endif