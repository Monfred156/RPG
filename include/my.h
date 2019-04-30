/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Task02 Day09
*/


#ifndef MY_H_
#define MY_H_

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
#include "macro.h"
#include "struct.h"

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *int_to_str(int nb);
char *my_revstr(char *str);
char *my_int_to_str(int nb);
int my_strcmp(char const *s1, char const *s2);
char *get_next_line(int fd);
char *my_strdup(char *str);

#endif
