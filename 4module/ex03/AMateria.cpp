#include "AMateria.hpp"

AMateria::AMateria () {
//	std::cout << "Called AMateria default constructor\n";
	type = "Unknown";
}
AMateria::AMateria (std::string const & type) {
//	std::cout << "Called AMateria constructor\n";
	this->type = type;
}
AMateria::AMateria (const AMateria &copy) {
	this->operator=(copy);
}
AMateria::~AMateria () {
//	std::cout << "Called AMateria destructor\n";
}

std::string const& AMateria::getType() const {
	return (type);
}
AMateria &AMateria::operator=(const AMateria & obj) {
	this->type = obj.getType();
	return *this;
}

void AMateria::use(ICharacter& target) {
	std::cout << target.getName();
}
