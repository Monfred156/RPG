/*
** EPITECH PROJECT, 2019
** text
** File description:
** .c
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_int_to_str(int nb)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * 11);
    for (; nb > 9; i++) {
        str[i] = (nb % 10 + 48);
        nb = nb / 10;
    }
    str[i] = (nb % 10 + 48);
    str[i + 1] = '\0';
    my_revstr(str);
    return (str);
}
