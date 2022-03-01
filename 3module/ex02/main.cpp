#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap kolya("kolya");
	
	{
		ClapTrap vasya("vasya");
	}

	ClapTrap unnamed;

	kolya.attack("vasya");
	kolya.takeDamage(4);
	// unnamed.takeDamage(4);

	ScavTrap a("asda");
	ScavTrap b("a");
	a.attack("borya");


	a = b;
	// a.attack("asdas");
	
    FragTrap f("fj");
	FragTrap h(f);
	f.attack ("vasya");
	h.beRepaired(10);
	
}