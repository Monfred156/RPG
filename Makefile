NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	=   ./src/rpg.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJS)
			make -C ./lib/my
			$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -L./lib/my -lmy -l csfml-network -l csfml-window -l csfml-audio -l csfml-system -l csfml-graphics

clean:
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./lib/my
	$(RM) $(NAME)

re: fclean all
