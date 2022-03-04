#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal** anima = new const Animal*[10]();
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			anima[i] = new Cat();
		else
			anima[i] = new Dog();
	}
	for (int i = 0; i < 10; i++) {
		delete anima[i];
	}

//	Cat koshak;
//	koshak.setType("huesos");
//	Animal *vasek = new Cat();
//	Animal supevasya = Cat();
//
////	Cat vasek;
//	vasek->setType("vasek");
////	Animal *NEvasek = new Cat(vasek);
//	Animal NEvasek(*vasek);
////	Cat NEvasek(vasek);

//	std::cout << "7\n";
//
//	Cat kek;
//	kek = koshak;

//	std::cout << "________________\n";
//	Cat koshak;
//	koshak.
//	Cat vasek(koshak);
//	Cat lol = koshak;

//	lol.getType();

//	std::cout << "________________\n";
//
//	Cat lll;


//	std::cout << vasek->getType() << "\n";
//	std::cout << NEvasek.getType() << "\n";




	// Dog basic;
	// Dog tmp = basic;
	// tmp.getBrain()->setIdea(4, "kekis");
	// std::cout << basic.getBrain()->getIdea(4) << std::endl;//old one
	// std::cout << tmp.getBrain()->getIdea(4) << std::endl;//kekis

	// Cat test1("test1");
	// Cat test2(test1);
	// std::cout << test2.getBrain()->getIdea(10) << std::endl;
	// test1.getBrain()->setIdea(10, "new test idea");
	// std::cout << test1.getBrain()->getIdea(10) << std::endl;//new test
	// std::cout << test2.getBrain()->getIdea(10) << std::endl;//old one
	//while (1);
}