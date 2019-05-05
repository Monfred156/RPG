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
    int counter = 0;

    if (nb < 0) {
        nb *= -1;
        counter = 1;
    }
    str = malloc(sizeof(char) * 12);
    for (; nb > 9; i++) {
        str[i] = (nb % 10 + 48);
        nb = nb / 10;
    }
    str[i] = (nb % 10 + 48);
    if (counter == 1) {
        str[i + 1] = '-';
        str[i + 2] = '\0';
    } else
        str[i + 1] = '\0';
    my_revstr(str);
    return (str);
}
