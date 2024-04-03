##
## EPITECH PROJECT, 2024
## files
## File description:
## files
##

SRC		=	my_putchar.c	\
			my_putstr.c	\
			my_str_to_word_array.c\
			my_getnbr.c

OBJ		=	$(SRC:.c=.o)

NAME	=	minicut

autre = *~ \
		*.log \
		.out \

all: 	$(NAME)

$(NAME): $(OBJ)
	gcc $(SRC) main.c -o $(NAME) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(autre) unit_tests

re: fclean all