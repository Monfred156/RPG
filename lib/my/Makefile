##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## task01 CPool_Day10_2018
##

SRC	=	my_putstr.c \
		my_putchar.c \
		my_strlen.c	\
		my_getnbr.c	\
		int_to_str.c	\
		my_revstr.c	\
		my_int_to_str.c	\
		my_strcmp.c	\
		get_next_line.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
