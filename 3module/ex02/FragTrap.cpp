#include "FragTrap.hpp"

void FragTrap::basicIntialize(){
    this->energy = 100;
    this->hp = 100;
    this->damage = 30;
}

FragTrap::FragTrap(){
    basicIntialize();
    std::cout << "I fragtrap, born without name\n";
}

FragTrap	&FragTrap::operator=(const FragTrap& other)
{
    this->name = other.name;
    this->hp = other.hp;
    this->energy = other.energy;
    this->damage = other.damage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    *this = other;
    basicIntialize();
    std::cout << "fragtrap borned\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    basicIntialize();
    std::cout << "fragtrap borned\n";
}

void FragTrap::highFivesGuys(){
    std::cout << "positive high fives ?? positive\n";
}
FragTrap::~FragTrap(){
    std::cout << "F.ck fragtrap\n";
}