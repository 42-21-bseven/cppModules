NAME = phonebook

CPP_FILE = main.cpp Contact.cpp Phonebook.cpp check_err.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(O_FILE)
		c++ $(O_FILE) -o $(NAME)

%.o: %.cpp Contact.hpp Phonebook.hpp
		@c++ -c -Wall -Wextra -Werror $< -o $@

clean:
		@rm -f $(O_FILE)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
