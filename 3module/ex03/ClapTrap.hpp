#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string	_name;
	int	hp;
	int	energy;
	uint	damage;
private:
    void basicIntialize();
public:
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap& copy);

	ClapTrap	&operator=(const ClapTrap& other);
	
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	~ClapTrap();
};

#endif