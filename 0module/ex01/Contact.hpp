#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
class Contact {

private:
	std::string first_name, last_name, nick_name, phone_number, darkest_secret;
public:
	Contact();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif