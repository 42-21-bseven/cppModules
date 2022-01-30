#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal();
    std::string getType() const;
    virtual void    makeSound() const;
    void    setType(std::string type);
	Animal(const Animal& copy);
	Animal	&operator=(const Animal& other);
	~Animal();
};

#endif