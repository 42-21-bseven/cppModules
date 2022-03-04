#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& copy) {
		this->_brain = new Brain(*copy._brain);
		this->type = copy.type;
}

Dog	&Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete this->_brain;
		this->type = other.type;
		this->_brain = other._brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void    Dog::makeSound() const {
    std::cout << "I am DOGE!! AUUUWWWWWHHHFFFFF!!!" << std::endl;
}

Brain* Dog::getBrain() {
	return (this->_brain);
};

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}
