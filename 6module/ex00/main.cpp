#include <iostream>

void char_display(char num){
	std::cout << "char is: ";
	if(num < 33)
		std::cout << "Non displayable" << std::endl;
	else if(num > 122)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << num << "'" << std::endl;
}

void int_display(int num) {
	std::cout << "int: " << num << std::endl;
}

void float_display(float num){
	std::cout << "float: ";
	if(num - (int)num == 0)
		std::cout << num << ".0f" << std::endl;
	else
		std::cout << num << "f" << std::endl;
}

void double_display(double num) {
	if (num - (int) num == 0)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}

void printnan(std::string str){
	std::cout << "char: unimpossible" << std::endl;
	std::cout << "int: unimpossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;

}

void displayed(double num){
	char_display(static_cast<char>(num));
	int_display(static_cast<int>(num));
	float_display(static_cast<float>(num));
	double_display(num);
}

void parsing(std::string str){
	if (!std::isdigit(str[0]) && str[1] == '\0')
		displayed(static_cast<double>(str[0]));
	else {
		if (str[str.length() - 1] == 'f')
			str.erase(str.size() - 1, 1);
		bool dot = false;
		int i = -1;
		if (str[0] == '-')
			i++;
		while (++i < (int) str.size()) {
			if (std::isdigit(str[i]))
				continue;
			if ((str[i] == '.') && ((i + 1) < (int) str.size()) && (!dot))
				dot = true;
			else {
				std::cerr << "Error: not valid string" << std::endl;
				exit(1);
			}
		}
		displayed(stod(str));
	}
}

bool isnotnan(std::string str){
	if (str == "nan" || str == "+inf" || str == "-inf")
		printnan(str);
	else if (str == "nanf" || str == "+inff" || str == "-inff")
		printnan(str.erase(str.length() - 1, 1));
	else
		return (true);
	return (false);
}

int main(int ac, char **av){
	if(ac == 2){
		std::string str(av[1]);
		if(str == ""){
			std::cout << "Put not-empty argument" << std::endl;
			return (1);
		}
		if(isnotnan(str))
			parsing(str);
	}
	else {
		std::cerr << "Put argument" << std::endl;
		return (1);
	}
	return (0);

}