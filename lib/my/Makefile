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
		get_next_line.c \
		my_strdup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo -e "\033[33m[LIB] [COMPILED]\033[0m.......$<"

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
