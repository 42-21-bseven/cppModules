#include "ClapTrap.hpp"

int main() {

	ClapTrap AnonYMOUS;
	ClapTrap Clone(AnonYMOUS);
	ClapTrap Dava("Davlet");
	Clone.reName("notAnonYMOUS");

	AnonYMOUS.attack("Davlet");
	Dava.takeDamage(0);
	Clone.beRepaired(8);
	Clone.attack("Davlet");
	Dava.takeDamage(4);
	Dava.beRepaired(0);
	Clone.attack("Davlet");
	Dava.takeDamage(4);
	Dava.beRepaired(0);
	Clone.attack("Davlet");
	Dava.takeDamage(4);
	Dava.beRepaired(0);


	// ClapTrap kolya("kolya");

	// {
	// 	ClapTrap vasya("vasya");
	// }

	// ClapTrap unnamed;

	// ClapTrap kirill(kolya);

	// kirill.takeDamage(5);

	// kolya.attack("vasya");
	// kolya.takeDamage(4);
	// unnamed.takeDamage(4);
}