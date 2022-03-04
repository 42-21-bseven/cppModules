#include "Bureaucrat.hpp"

int main () 
{
	Bureaucrat office_worker("Pluton", 1);

	std::cout << office_worker << std::endl;
	try {
		office_worker.incGrade();
	}
	catch (std::exception& exc) {
		std::cout << "Error: " << exc.what() << std::endl;
	}
	std::cout << office_worker << std::endl;
	std::cout << "next test\n";
//	Bureaucrat office_worker("Paifagor", 150);

	std::cout << office_worker << std::endl;
	try {
		office_worker.decGrade();
	}
	catch (std::exception& exc) {
		std::cout << "Error: " << exc.what() << std::endl;
	}
	std::cout << office_worker << std::endl;
}