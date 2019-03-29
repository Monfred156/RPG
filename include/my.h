/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Task02 Day09
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include "maccro.h"
#include "./struct.h"

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *int_to_str(int nb);
char *my_revstr(char *str);
char *my_int_to_str(int nb);
int my_strcmp(char const *s1, char const *s2);

void manage_event_menu(global *gb);
void display_menu(global *gb);
void initia_window(global *gb);
struct s_sprite *initia_sprite(global *gb, char *path, sfVector2f pos,
    sfIntRect rect);
struct s_text *initia_text(global *gb, char **string, sfVector2f
pos, sfUint8 const *color, uint *array);
struct s_sound *initia_sound(global *gb, char *path);
struct s_button *initia_button(global *gb, sfVector2f size, sfVector2f
pos);

#endif
