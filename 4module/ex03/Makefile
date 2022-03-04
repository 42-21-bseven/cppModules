NAME = AMateria

CPP_FILE =	main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

O_FILE = $(CPP_FILE:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILE)
	c++ $(O_FILE) -o $(NAME)

%.o: %.cpp AMateria.hpp ICharacter.hpp Character.hpp Ice.hpp Cure.hpp IMateriaSource.hpp MateriaSource.hpp
	@c++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all
