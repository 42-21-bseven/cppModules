#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog	&Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		if (other._brain)
			this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::Dog(const Dog& copy) {
	if (this != &copy) {
		this->type = copy.type;
		if (copy._brain)
			this->_brain = new Brain(*copy._brain);
	}
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
