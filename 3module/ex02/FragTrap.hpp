#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : public ClapTrap
{
    protected:
        void basicIntialize();
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap&);
	FragTrap	&operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys();
};

#endif