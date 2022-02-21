#include "Karen.hpp"

void	Karen::debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;;
}

void	Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void ) {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Karen::complain(std::string level) {
    void (Karen::*funcKit[4])(void) = {
        &Karen::debug,
		&Karen::info,
		&Karen::warning,
        &Karen::error,
    };

	int i;

    std::string kit[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (i = 0; i < 4;) {
		if (kit[i] == level)
    		(this->*funcKit[i])();
		i++;
    }
}