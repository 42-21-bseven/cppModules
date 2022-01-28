#include <iostream>
#include <string>

int main(int ac, char **av) {

	int 		i;
	size_t		j;
	size_t  	len;
	std::string str;

	i = 1;
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		while (i < ac)
		{
			str = std::string (av[i]);
			len = str.length();
			j = 0;
			while (j < len)
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}