NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

all : $(SRC)
	c++  $(FLAGS) $(SRC) -o $(NAME)

clean : $(NAME)
	@rm -rf $(NAME)

re	  : clean make

PHONY : make,re