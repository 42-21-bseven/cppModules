#include "ScavTrap.hpp"

void ScavTrap::basicIntialize(){
    this->energy = 50;
    this->hp = 100;
    this->damage = 20;
}

void ScavTrap::attack(std::string const &target){
        std::cout << "ScavTrap " << this->name <<  " attacks and hitting " << target << ", causing " << this->damage << " points of damage!\n";

}

ScavTrap::ScavTrap(){
    basicIntialize();
    std::cout << "I scavtrap, born without name\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& other)
{
    this->name = other.name;
    this->hp = other.hp;
    this->energy = other.energy;
    this->damage = other.damage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    *this = other;
    basicIntialize();
    std::cout << "Scav " << name << " trap borned.\xF0\x9F\x90\x9B\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    basicIntialize();
    std::cout << "Scav trap " << name << " borned.\xF0\x9F\x91\xB6\n";
}

void ScavTrap::guardGate(){
    std::cout << "Scav trap in Gate keeper mode.\xF0\x9F\x92\x82\n";
}

ScavTrap::~ScavTrap(){
    std::cout << this->name << ": \'F.ck\'\xF0\x9F\x98\x92\n";
}