NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	=	./src/rpg.c								\
			./src/sceen/menu.c						\
			./src/initia/initia_function.c			\
			./src/sceen/tuto.c						\
			./src/initia/check_asset.c				\
			./src/initia/initia_menu.c				\
			./src/initia/initia_tuto.c				\
			./src/mouse_clic.c				\
			./src/time.c					\
			./src/movement_mob.c			\
			./src/direction_move_mob.c		\
			./src/initia/initia_function2.c		\
			./src/save/get_save.c				\
			./src/save/function_for_get_save.c	\
			./src/save/save_into_file.c			\
			./src/player/movement_player_town.c			\
			./src/player/check_hitbox.c			\
			./src/sceen/launch.c			\
			./src/initia/initia_lunch.c			\
			./src/player/event_movement_player_town.c	\
			./src/sceen/town.c              \
			./src/initia/initia_town.c  \
			./src/initia/initia_pub.c   \
			./src/sceen/tavern.c    \
			./src/player/event_movement_player_pub.c    \
			./src/player/movement_player_pub.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -W -Wall -Wextra -Wno-unused -g

all: $(NAME)

$(NAME):	$(OBJS)
			make -C ./lib/my
			$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -L./lib/my -lmy -l csfml-network -l csfml-window -l csfml-audio -l csfml-system -l csfml-graphics $(CFLAGS)

clean:
	make clean -C ./lib/my
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./lib/my
	$(RM) $(NAME)

re: fclean all
