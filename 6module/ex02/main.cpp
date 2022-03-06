#include "Base.hpp"

int	main(){

	std::cout << "SuperClass>>>" << std::endl;

	Base *random = generate();

	std::cout << "***POINTER***" << std::endl;
	std::cout << "pointer class: ";
	identify(random);

	std::cout << "&&&REFERENCE&&&" << std::endl;
	std::cout << "reference class: ";
	identify(*random);

	std::cout << "\nSubClass Class>>>" << std::endl;

	C c;
	std::cout << "***POINTER***" << std::endl;
	std::cout << "pointer class: ";
	identify(&c);

	std::cout << "&&&REFERENCE&&&" << std::endl;
	std::cout << "reference class: ";
	identify(c);

}