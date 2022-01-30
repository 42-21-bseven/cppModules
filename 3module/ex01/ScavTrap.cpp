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
    std::cout << "Scav trap borned\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    basicIntialize();
    std::cout << "Scav trap borned\n";
}

void ScavTrap::guardGate(){
    std::cout << "Scav trap in Gate keeper mode\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "F.ck\n";
}