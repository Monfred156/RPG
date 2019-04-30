/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Task02 Day09
*/


#ifndef FUNCTION_H
#define FUNCTION_H_

#include "my.h"
#include "struct.h"

///menu.c///
void manage_event_menu(global *gb);
void display_menu(global *gb);

///initia_function.c///
void initia_window(global *gb);
struct s_sprite *initia_sprite(global *gb, char *path, sfVector2f pos,
    sfIntRect rect);
struct s_text *initia_text(global *gb, char **string, sfVector2f
pos, sfUint8 const *color, sfUint32 *array);
struct s_sound *initia_sound(global *gb, char *path);
struct s_button *initia_button(global *gb, sfVector2f size, sfVector2f
pos);

///tuto.c///
void display_tuto(global *gb);

///check_asset.c///
int check_assets(global *gb);

#endif