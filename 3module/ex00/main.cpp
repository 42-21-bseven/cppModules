#include "ClapTrap.hpp"

int main() {
	ClapTrap kolya("kolya");

	{
		ClapTrap vasya("vasya");
	}

	ClapTrap unnamed;

	ClapTrap kirill(kolya);

	kirill.takeDamage(5);

	kolya.attack("vasya");
	kolya.takeDamage(4);
	unnamed.takeDamage(4);
}