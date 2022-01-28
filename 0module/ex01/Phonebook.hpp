#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP 
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook {

private:
	Contact contacts[8];
	int		contactsCount;
public:
	Phonebook();
	int 	getContactsCount();
	int		isNum(std::string str);
	void	addContact();
	void	printContact(int num);
	void	search();
	void 	outContactInfo(int contactIndex);
	std::string formOut(std::string);
};

#endif