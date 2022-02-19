#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "defaultName";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": lol, bye..\n";
}

void Zombie::announcement()
{
    std::cout << this->name << ": "
              << "BraiiiiiiinnnzzzZ...\n";
}