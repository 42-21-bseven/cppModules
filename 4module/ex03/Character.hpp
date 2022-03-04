#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter{
private:
	std::string name;
	AMateria *materials[4];
	int i;

public:
	Character();
	Character(std::string name);
	Character(const Character &copy);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* mater);
	void unequip(int ind);
	void use(int ind, ICharacter& target);

	Character & operator=(const Character &other);
};

#endif