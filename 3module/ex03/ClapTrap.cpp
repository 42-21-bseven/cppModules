#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include "ClapTrap.hpp"

void ClapTrap::basicIntialize(){
    this->energy = 10;
    this->hp = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(){
    _name = "AnonYMOUS";
    basicIntialize();
    std::cout << "I born without name.\xF0\x9F\x98\xAB\n";
}

ClapTrap::ClapTrap(std::string Name): _name(Name)
{
    // this->name = name;
    basicIntialize();
    std::cout << "I born to die.\xF0\x9F\x98\xA4 \n\t\t\tMy name is " << _name << ".\xF0\x9F\x98\xB3\n";
}

ClapTrap::~ClapTrap(){
    std::cout << this->_name << " destroyed.\xF0\x9F\x99\x80\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& other) {
    this->_name = other._name;
    this->hp = other.hp;
    this->energy = other.energy;
    this->damage = other.damage;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
}

void ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << this->_name <<  " attacks " << target << ", causing " << this->damage << " points of damage!\xF0\x9F\x91\x8A\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "I'm " << _name << ", attacked by " << amount << " hitpoints!\xF0\x9F\x98\xB7" << std::endl;
    this->hp -= amount;
    if (this->hp <= 0){
        std::cout << _name << " going to die.\xF0\x9F\x98\xB1\n";
    }
};
void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "\nI'm " << _name << ", healed by " << amount << " hitpoints!\xF0\x9F\x8F\xA5" << std::endl;
    this->energy -= amount;
    std::cout << "Energy " << _name << " = " << energy << "\xF0\x9F\x94\x8B\n";
    hp += amount;
    std::cout << "HitPoints " << _name << " = " << hp << "\xF0\x9F\x92\x9F" << std::endl;
    this->damage += amount/2;
    std::cout << "Damage " << _name << " = " << damage << "\xF0\x9F\x92\xAA\n" ;
    std::cout << "\t\t\t \n";
};


#endif