#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap kolya("kolya");
	
	{
		ClapTrap vasya("vasya");
	}

	ClapTrap unnamed;

	kolya.attack("vasya");
	kolya.takeDamage(4);
	unnamed.takeDamage(4);

	ScavTrap a("asda");
	ScavTrap b("a");

	a = b;
	a.attack("asdas");
}