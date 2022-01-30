#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    protected:
        void basicIntialize();
    public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap&);
    ScavTrap(std::string name);
	ScavTrap	&operator=(const ScavTrap& other);

    void guardGate();
    void attack(std::string const &target);
};

#endif