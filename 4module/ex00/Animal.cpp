#include "Animal.hpp"

Animal::Animal() {
	std::cout << "animal borned" << std::endl;
	this->type = "animal";
}

Animal	&Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Animal::Animal(const Animal& copy) {
	*this = copy;
}

void    Animal::setType(std::string type) {
    this->type = type;
}

std::string Animal::getType() const {
    return (this->type);
}

void    Animal::makeSound() const {
    std::cout << "SOUND SOUND SOUND!!!" << std::endl;
}

Animal::~Animal() {
	std::cout << "fk, why, zookiller.." << std::endl;
}
