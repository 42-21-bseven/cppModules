#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "DEFAULT_TYPE";
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

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
