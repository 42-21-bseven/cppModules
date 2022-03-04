#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class AMateria;

class ICharacter {
public:
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int ind) = 0;
	virtual void use(int ind, ICharacter& target) = 0;
	virtual ~ICharacter() {}
};

#endif