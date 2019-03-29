/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Task02 Day09
*/

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


#endif
