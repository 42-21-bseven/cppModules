#include "Ice.hpp"

Ice::Ice () {
//	std::cout << "Ice constructor called\n";
	type = "ice";
}

Ice::Ice (const Ice &copy) {
//	std::cout << "Ice constructor called\n";
	this->operator=(copy);
}

Ice::~Ice () {
//	std::cout << "Ice destructor called\n";
}

void Ice::use (ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}

Ice &Ice::operator=(const Ice & other) {
	this->type = other.type;
	return *this;
}
