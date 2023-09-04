NAME = PhoneBook

SRC = Contact.cpp PhoneBook.cpp main.cpp

HEADRS = Contact.hpp PhoneBook.hpp

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(SRC) $(HEADRS)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
			
re: fclean all

.PHONY: all clean fclean re