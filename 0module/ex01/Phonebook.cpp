#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	contactsCount = 0;
};

int 	Phonebook::isNum(std::string str) {
	int i;
	int len;

	i = 0;
	len = str.length();
	while(i < len) {
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

std::string scanContactField(std::string fieldName){
	std::string inputString;
	std::cout << "Enter " << fieldName << "\n";
	while(getline(std::cin, inputString) && inputString[0] == '\0'){
		std::cout << "No data\n";
		std::cout << "Enter " << fieldName << "\n";
	}
	while(fieldName == "Phone Number" && !ft_isNumber(inputString)){
		std::cout << "Incorrect Phone Number\n";
		std::cout << "Enter " << fieldName << "\n";
		std::cin >> inputString;
	}
	return inputString;
}

int Phonebook::getContactsCount(){
	return contactsCount < 8 ? contactsCount : 8;
}

void	Phonebook::addContact() {
	std::cin.get();
	this->contacts[this->contactsCount % 8].setFirstName(scanContactField("First Name"));
	this->contacts[this->contactsCount % 8].setLastName(scanContactField("Last Name"));
	this->contacts[this->contactsCount % 8].setDarkestSecret(scanContactField("Darkest Secret"));
	this->contacts[this->contactsCount % 8].setNickName(scanContactField("Nick Name"));
	this->contacts[this->contactsCount % 8].setPhoneNumber(scanContactField("Phone Number"));

	this->contactsCount++;
}

std::string Phonebook::formOut(std::string str) {
	if (str.size() > 10) {
		str.resize(10);
		str.back() = '.';
	}
	return str;
}

void Phonebook::outContactInfo(int contactIndex){
	std::cout << "First name: " << contacts[contactIndex].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[contactIndex].getLastName() << std::endl;
	std::cout << "Nick name: " << contacts[contactIndex].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[contactIndex].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[contactIndex].getDarkestSecret() << std::endl;
}

void 	Phonebook::search() {
	int i;
	std::string str;

	i = 0;
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name"
	<< "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < (this->contactsCount < 8 ? this->contactsCount : 8)) {
		std::cout << "|" << std::setw(10) << (i + 1) << "|" << std::setw(10) << formOut(
				this->contacts[i].getFirstName()) << "|" << std::setw(10) << formOut(
				this->contacts[i].getLastName()) << "|" << std::setw(10) << formOut(
				this->contacts[i].getNickName()) << "|" << std::endl;
		Contact test = this->contacts[i];
		std::string teststring = test.getFirstName();
		i++;
	}

}

#endif
