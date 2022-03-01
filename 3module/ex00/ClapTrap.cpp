#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include "ClapTrap.hpp"

void ClapTrap::basicIntialize(){
    this->energy = 10;
    this->hp = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(){
    name = "AnonYMOUS";
    basicIntialize();
    std::cout << "I born without name.\xF0\x9F\x98\xAB\n";
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    basicIntialize();
    std::cout << "I born to die.\xF0\x9F\x98\xA4 \n\t\t\tMy name is " << name << ".\xF0\x9F\x98\xB3\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    *this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& other) {
    this->name = other.name;
    this->hp = other.hp;
    this->energy = other.energy;
    this->damage = other.damage;
	return (*this);
}


void ClapTrap::attack(std::string const &target){
    std::cout << "ClapTrap " << this->name <<  " attacks " << target << ", causing " << this->damage << " points of damage!\xF0\x9F\x91\x8A\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "I'm " << name << ", attacked by " << amount << " hitpoints!\xF0\x9F\x98\xB7" << std::endl;
    this->hp -= amount;
    if (this->hp <= 0){
        std::cout << name << " going to die.\xF0\x9F\x98\xB1\n";
    }
};

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "\nI'm " << name << ", healed by " << amount << " hitpoints!\xF0\x9F\x8F\xA5" << std::endl;
    this->energy -= amount;
    std::cout << "Energy " << name << " = " << energy << "\xF0\x9F\x94\x8B\n";
    hp += amount;
    std::cout << "HitPoints " << name << " = " << hp << "\xF0\x9F\x92\x9F" << std::endl;
    this->damage = amount/2;
    std::cout << "Damage " << name << " = " << damage << "\xF0\x9F\x92\xAA\n" ;
    std::cout << "\t\t\t \n";
};


void    ClapTrap::reName(std::string name){
    this->name = name;
}

void    ClapTrap::hitDemage(unsigned int amound){
    this->damage = amound;
    std::cout << "Damage " << name << " = " << damage << "\xF0\x9F\x92\xAA\n" ;
}

ClapTrap::~ClapTrap(){
    std::cout << name << " destroyed.\xF0\x9F\x98\xB1\n";
}

#endif