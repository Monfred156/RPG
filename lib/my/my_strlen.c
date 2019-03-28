/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i;
    int counter;
    counter = 0;
    for (i = 0; str[i]; i++) {
        counter++;
    }
    return (counter);
}
