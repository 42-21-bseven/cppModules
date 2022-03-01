#include "ScavTrap.hpp"
// #include "FragTrap.hpp"

void ScavTrap::basicIntialize(){
    this->energy = 50;
    this->hp = 100;
    this->damage = 20;
}
ScavTrap::ScavTrap(): ClapTrap("hyi")
{
    basicIntialize();
    std::cout << "I scavtrap, born without name:" << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    basicIntialize();
    std::cout << "Scav trap " << name << " borned.\xF0\x9F\x91\xB6\n";
}

ScavTrap::~ScavTrap(){
    std::cout << this->_name << ": \'F.ck\'\xF0\x9F\x98\x92\n";
}

void ScavTrap::attack(std::string const &target){
        std::cout << "ScavTrap " << this->_name <<  " attacks and hitting " << target << ", causing " << this->damage << " points of damage!\xF0\x9F\x98\xA1\n";

}


ScavTrap	&ScavTrap::operator=(const ScavTrap& other)
{
    this->_name = other._name;
    this->hp = other.hp;
    this->energy = other.energy;
    this->damage = other.damage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    *this = other;
    basicIntialize();
    std::cout << "Scav " << _name << " trap borned.\xF0\x9F\x90\x9B\n";
}



void ScavTrap::guardGate(){
    std::cout << "Scav trap in Gate keeper mode.\xF0\x9F\x92\x82\n";
}

