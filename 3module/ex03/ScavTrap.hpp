#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
    private:
        void basicIntialize();
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap&);
	ScavTrap	&operator=(const ScavTrap& other);

    void guardGate();
    void attack(std::string const &target);
};

#endif