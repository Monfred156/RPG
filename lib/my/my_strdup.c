/*
** EPITECH PROJECT, 2019
** str
** File description:
** dup
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char *str)
{
    int size = my_strlen(str);
    char *dup = malloc(sizeof(char) * size + 1);
    for (int i = 0; str[i]; i++)
        dup[i] = str[i];
    dup[size] = '\0';
    return (dup);
}