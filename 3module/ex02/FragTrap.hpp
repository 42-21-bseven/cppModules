#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    protected:
        void basicIntialize();
    public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap&);
    FragTrap(std::string name);
	FragTrap	&operator=(const FragTrap& other);

    void highFivesGuys();
};

#endif