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

#endif