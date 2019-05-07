##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	=		./src/rpg.c									\
			./src/sceen/menu.c							\
			./src/initia/initia_function.c				\
			./src/sceen/tuto.c							\
			./src/initia/check_asset.c					\
			./src/initia/initia_menu.c					\
			./src/initia/initia_tuto.c					\
			./src/mouse_clic.c							\
			./src/initia/time.c							\
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
			./src/pnj_random_move.c						\
			./src/initia/initia_fight.c					\
			./src/initia/initia_inventory.c				\
			./src/initia/initia_shop.c					\
			./src/player/event_movement_player_fight.c	\
			./src/player/movement_player_fight.c		\
			./src/save/continue.c						\
			./src/end_fight.c							\
			./src/initia/initia_speak.c					\
			./src/display_hud.c							\
			./src/sceen/trader.c						\
			./src/sceen/buy.c							\
			./src/player/display_inventory.c			\
			./src/player/event_inventory.c				\
			./src/player/inventory_equip.c				\
			./src/player/inventory_desequip.c			\
			./src/save/reiniti_all.c					\
			./src/sceen/escape.c						\
			./src/initia/initia_esc.c					\
			./src/player/info_inventory.c				\
			./src/player/decrease_stats.c				\
			./src/player/increase_stats.c				\
			./src/player/calculate_stats.c				\
			./src/player/mov_player_ini_town.c			\
			./src/main.c								\
			./src/manage_event.c						\
			./src/sceen/dialog.c						\
			./src/initia/initia_function3.c				\
			./src/save/reini_every_hitbox.c				\
			./src/save/continue_town.c
			./src/save/reini_every_hitbox.c             \
			./src/initia/call_initia_function.c         \
			./src/initia/call_initia_function2.c

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