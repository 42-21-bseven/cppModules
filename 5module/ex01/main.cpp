#include "Form.hpp"
#include "Bureaucrat.hpp"

int main () {
	Bureaucrat office_worker("Roman", 14);
	Form first_form("Waste disposal permit", 24, 56);
	Form second_form("Мacation request", 1, 1);

	std::cout << std::endl;
	std::cout << first_form << std::endl;
	std::cout << second_form << std::endl;
	std::cout << office_worker << std::endl;
	std::cout << std::endl;
	office_worker.signForm(first_form);
	office_worker.signForm(second_form);

//	second_form.beSigned(office_worker);

	try {
		second_form.beSigned(office_worker);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

//	std::cout << std::endl;
//	std::cout << first_form << std::endl;
//	std::cout << second_form << std::endl;
//	std::cout << office_worker << std::endl;
//	std::cout << std::endl;
}