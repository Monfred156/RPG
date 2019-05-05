NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	=	./src/rpg.c									\
			./src/sceen/menu.c							\
			./src/initia/initia_function.c				\
			./src/sceen/tuto.c							\
			./src/initia/check_asset.c					\
			./src/initia/initia_menu.c					\
			./src/initia/initia_tuto.c					\
			./src/mouse_clic.c							\
			./src/time.c								\
			./src/mob/movement_mob.c					\
			./src/mob/direction_move_mob.c				\
			./src/initia/initia_function2.c				\
			./src/save/get_save.c						\
			./src/save/function_for_get_save.c			\
			./src/save/save_into_file.c					\
			./src/player/movement_player_town.c			\
			./src/player/check_hitbox.c					\
			./src/sceen/launch.c						\
			./src/initia/initia_lunch.c					\
			./src/player/event_movement_player_town.c	\
			./src/sceen/town.c							\
			./src/initia/initia_town.c					\
			./src/initia/initia_pub.c					\
			./src/sceen/tavern.c						\
			./src/player/event_movement_player_pub.c	\
			./src/player/movement_player_pub.c			\
			./src/player/event_movement_player_tuto.c	\
			./src/player/movement_player_tuto.c			\
			./src/sceen/option.c						\
			./src/initia/initia_option.c				\
			./src/player/attack.c						\
			./src/sceen/ashland.c						\
			./src/initia/initia_ash.c					\
			./src/player/event_movement_player_ash.c	\
			./src/player/movement_player_ash.c			\
			./src/player/inventory.c					\
			./src/initia/initia_stats.c					\
			./src/mob/pattern.c							\
			./src/initia/initia_pnj.c					\
			./src/check_2_in.c							\
			./src/initia/initia_items.c					\
			./src/sceen/fight.c							\
			./src/pnj_random_move.c                     \
			./src/initia/initia_fight.c					\
			./src/initia/initia_inventory.c				\
			./src/initia/initia_shop.c					\
			./src/player/event_movement_player_fight.c	\
			./src/player/movement_player_fight.c		\
			./src/save/continue.c                       \
			./src/end_fight.c							\
			./src/initia/initia_speak.c                 \



OBJS	=	$(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -W -Wall -Wextra -Wno-unused -g

all: $(NAME)

$(NAME):	$(OBJS)
			make -C ./lib/my
			$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -L./lib/my -lmy -lm -l csfml-network -l csfml-window -l csfml-audio -l csfml-system -lcsfml-graphics $(CFLAGS)
			@echo -e "\033[32mCOMPILED WITH SUCCESS\033[42m"

%.o: %.c 
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo -e "\033[36m[SRC] [COMPILED]\033[0m.......$<"

clean:
	@make clean -C ./lib/my
	@$(RM) $(OBJS)

fclean: clean
	@make fclean -C ./lib/my
	$(RM) $(NAME)

re: fclean all
