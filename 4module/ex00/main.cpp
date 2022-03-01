#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main() {
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	std::cout << "\n\nWRONGANIMAL\n\n" << " " << std::endl;

    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* m = new WrongCat();
    std::cout << m->getType() << " " << std::endl;
    m->makeSound(); //will output the Wrong cat sound!
    metaWrong->makeSound();
}