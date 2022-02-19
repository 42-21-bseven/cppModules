#include <iostream>
#include "Phonebook.hpp"
#include <string>

int 	isNum(std::string str) {
	int i;
	int len;

	i = 0;
	len = str.length();
	if (len > 2)
		return 0;
	while(i < len) {
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

int main() {
	std::string currentCommand = "";
	Phonebook phonebook;

	while (currentCommand != "EXIT")
	{
		std::cout << "Enter command\n";
		std::cin >> currentCommand;

		if (currentCommand == "ADD")
			phonebook.addContact();
		else if (currentCommand == "SEARCH")
		{
			phonebook.search();
			std::cout << "Which contact to show? Enter index\n";
			std::cin >> currentCommand;
			if (isNum(currentCommand))
			{
				int index = atoi(currentCommand.c_str());
				if (index && phonebook.getContactsCount() && index <= phonebook.getContactsCount() && index <= 8){
					phonebook.outContactInfo(index - 1);
				}
				else{
					std::cout << "Invalid index\n";
				}
			}
			else{
				std::cout << "Invalid index\n";
			}
		}
		else if (currentCommand != "EXIT"){
			std::cout << "Incorrect command\n";
		}
	}
}
