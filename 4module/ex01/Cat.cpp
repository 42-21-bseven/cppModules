#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	this->_brain = new Brain(*copy._brain);
	this->type = copy.type;
}


Cat	&Cat::operator= (const Cat& other) {
	if (this != &other) {
		delete this->_brain;
		this->type = other.type;
		this->_brain = other._brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}
void    Cat::makeSound() const {
    std::cout << "I am KITTY-KITTY-CAT!!! Meeeeeeeooooooooowwwwww!!!" << std::endl;
}

Brain* Cat::getBrain() {
	return (this->_brain);
};

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}
