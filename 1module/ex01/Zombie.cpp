#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": lol, bye..\n";
}

void Zombie::setName(std::string name){
    this->name = name;
}

Zombie::Zombie(){

}

void Zombie::announcement()
{
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n";
}