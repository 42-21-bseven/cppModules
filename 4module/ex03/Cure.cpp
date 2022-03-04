#include "Cure.hpp"

Cure::Cure () {
//	std::cout << "Cure constructor called\n";
	type = "cure";
}

Cure::Cure (const Cure & copy) {
//	std::cout << "Cure constructor called\n";
	this->operator=(copy);
}

Cure::~Cure () {
//	std::cout << "Cure destructor called\n";
}

void Cure::use (ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria *Cure::clone() const {
	return (new Cure(*this));
}

Cure &Cure::operator=(const Cure & other) {
	this->type = other.type;
	return *this;
}
