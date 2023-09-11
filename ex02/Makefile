NAME = Account

SRC = Account.cpp tests.cpp

HEADRS = Account.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADRS)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
			
re: fclean all

.PHONY: all clean fclean re