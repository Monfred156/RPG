/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Task02 Day09
*/


#ifndef FUNCTION_H_
#define FUNCTION_H_

#include "my.h"
#include "struct.h"

///initia_lunch.c///
void initia_sprite_lunch(global *gb);

///lunch_game.c///
void manage_event_lunch(global *gb);

///initia_function.c///
void initia_window(global *gb);
struct s_sprite *initia_sprite(struct s_sprite *sprite, char *path, sfVector2f
pos, sfIntRect rect);
struct s_text *initia_text(global *gb, char **string, sfVector2f
pos, sfUint8 const *color, sfUint32 *array);
struct s_sound *initia_sound(global *gb, char *path);
struct s_button *initia_button(struct s_button *button, sfVector2f size,
    sfVector2f pos);

///initia_function2.c///
struct s_hitbox *initia_hitbox(struct s_hitbox *hitbox, sfVector2f size,
    sfVector2f pos);

///menu.c///
void manage_event_menu(global *gb);
void display_menu(global *gb);

///tuto.c///
void manage_event_tuto(global *gb);
void display_tuto(global *gb);
void initia_hitbox_tuto(global *gb);

///movement_player.c///
void movement_top_player(global *gb, float time_sec, int animation);
void movement_back_player(global *gb, float time_sec, int animation);
void movement_left_player(global *gb, float time_sec);
void movement_right_player(global *gb, float time_sec);

///check_asset.c///
int check_assets(global *gb);

///initia_menu.c///
void initia_sprite_menu (global *gb);
void initia_button_menu(global *gb);

///intia_tuto.c///
void initia_sprite_tuto(global *gb);

///mouse_clic.c///
int mouse_clic_button(global *gb, sfRectangleShape *rect);

///time.c///
void initia_time(global *gb);

///rpg.c///
void call_initia_function(global *gb);

///get_save.c///
struct s_stats *get_save(void);

///function_for_get_save.c///
void decal(char *str, int counter);
int check_var(char *str, char **array);
char **get_into_map(char **map, char *str, int counter);
int my_strncmp(char *str1, char *str2, int counter);

///save_into_file.c///
int save_into_file(stats *stats);

///check_hitbox.c///
int check_hitbox_up(global *gb, sfSprite *sprite, float time_sec);
int check_hitbox_right(global *gb, sfSprite *sprite, float time_sec);
int check_hitbox_down(global *gb, sfSprite *sprite, float time_sec);
int check_hitbox_left(global *gb, sfSprite *sprite, float time_sec);

#endif