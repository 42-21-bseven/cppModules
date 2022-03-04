#include "Character.hpp"

Character::Character () {
	name = "Anon";
	this->i = 0;
	while (this->i != 4)
		materials[this->i++] = NULL;
	this->i = 0;
}

Character::Character (std::string name) {
	this->name = name;
	this->i = 0;
	while (this->i != 4)
		materials[this->i++] = NULL;
	this->i = 0;
}

Character::Character (const Character & copy) {
	this->operator=(copy);
}

Character::~Character () {
	for (int it = 0; it < 4; it++) {
		if (materials[it])
			delete materials[it];
	}
}

std::string const & Character::getName () const {
	return (name);
}

void Character::equip(AMateria* m) {
	if (m == NULL)
		return ;
	if (this->i == 4)
		this->i = 0;
	if (materials[this->i] != NULL)
		delete materials[this->i];
	materials[this->i] = m->clone();
	this->i++;
}

void Character::unequip(int ind) {
	if (ind <= 0 || ind >= 4)
		return ;
	materials[ind] = NULL;
}

void Character::use(int ind, ICharacter& target) {
	if (ind < 0 || ind >= 4)
		return ;
	if (materials[ind])
		materials[ind]->use(target);
}

Character &Character::operator=(const Character &other) {
	this->name = other.getName();
	for (int it = 0; it < 4; it++) {
		if (materials[it])
			delete materials[it];
		materials[it] = other.materials[it]->clone();
	}
	this->i = other.i;
	return *this;
}
