NAME = megaphone

CPP_FILE = Megaphone.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(O_FILE)
		c++ $(O_FILE) -o $(NAME)

%.o: %.cpp
		@c++ -c -Wall -Wextra -Werror -std=c++98 $< -o $@

clean:
		@rm -f $(O_FILE)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
