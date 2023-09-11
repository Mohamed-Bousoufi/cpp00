NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(SRC)
	c++  $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
			
re: fclean all

.PHONY: all clean fclean re