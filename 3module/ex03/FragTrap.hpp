#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : virtual public ClapTrap
{
    private:
        void basicIntialize();
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap&);
	FragTrap	&operator=(const FragTrap& other);

    void highFivesGuys();
};

#endif