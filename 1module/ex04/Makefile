NAME = sed

CPP_FILE = main.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(O_FILE)
		c++ $(O_FILE) -o $(NAME)

%.o: %.cpp
		@c++ -std=c++98 -c -Wall -Wextra -Werror $< -o $@

clean:
		@rm -f $(O_FILE)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
