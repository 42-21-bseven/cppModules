#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n\t\t\tCalled constructors...\n\t\t\t===========>\n\n";
	ClapTrap kolya("kolya");
	
	{
		ClapTrap vasya("vasya");
	}

	ClapTrap unnamed;

	std::cout << "\n\t\t\tAttacked and Damaged...\n\t\t\t===========>\n\n";

	kolya.attack("vasya");
	kolya.takeDamage(4);
	// unnamed.takeDamage(4);

	ScavTrap a("asda");
	ScavTrap b("a");
	a.attack("borya");


	a = b;
	std::cout << "\n\t\t\tTested...\n\t\t\t===========>\n\n";

	// FragTrap();
	// a.attack("asdas");
	DiamondTrap diam;
	diam.whoAmI();
	diam.attack("fashist ebanj");
	diam.beRepaired(0);
	// diam.attack("asdasd");

	std::cout << "\n\t\t\tTested End...\n\t\t\t===========>\n\n";
	
    FragTrap f("fj");
	FragTrap h(f);
	f.attack ("vasya");
	h.beRepaired(10);
	std::cout << "\n\t\t\tCalled destructor...\n\t\t\t===========>\n\n";
	
}