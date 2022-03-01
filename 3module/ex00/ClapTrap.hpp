#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap {
private:
	std::string	name;
	int	hp;
	int	energy;
	uint	damage;

    void basicIntialize();
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);

	ClapTrap	&operator=(const ClapTrap& other);
	
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	reName(std::string rename);
	void	hitDemage(unsigned int amound);

	~ClapTrap();
};

#endif