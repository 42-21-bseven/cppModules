#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap kolya("kolya");
	
	{
		ClapTrap unnamed("vasya");
	}

	ClapTrap anon;

	kolya.attack("AnonYMOUS");
	kolya.takeDamage(4);
	anon.takeDamage(4);

	ScavTrap a("asda");
	ScavTrap b("a");
	ScavTrap c(a);
	ScavTrap d = c;

	// a = b;
	// a.attack("asdas");
}