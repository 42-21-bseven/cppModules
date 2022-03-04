#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {


//	Animal kek;//can't make any animal object

	 Dog shareg;
	 Dog cloneShara = shareg;
	 cloneShara.getBrain()->setIdea(4, "***i wanna kushac");
	 std::cout << shareg.getBrain()->getIdea(4) << std::endl;//old one
	 std::cout << cloneShara.getBrain()->getIdea(4) << std::endl;//kekis

//	 Cat test1("test1");
//	 Cat test2(test1);
//	 std::cout << test2.getBrain()->getIdea(10) << std::endl;
//	 test1.getBrain()->setIdea(10, "new test idea");
//	 std::cout << test1.getBrain()->getIdea(10) << std::endl;//new test
//	 std::cout << test2.getBrain()->getIdea(10) << std::endl;//old one
//	while (1);
}