NAME = phonebook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC =	main.cpp		\

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@$(CC) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all