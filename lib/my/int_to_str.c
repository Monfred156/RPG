/*
** EPITECH PROJECT, 2018
** binary.c
** File description:
** Fuction that convert number in binary base
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

char *int_to_str(int nb)
{
    char *string;
    char result;
    int temp = 0;
    int i = 0;
    string = malloc(sizeof(char) * 11);

    while (nb != 0) {
        string[i] = nb % 10 + 48;
        temp = nb / 10;
        nb = temp;
        i++;
    }
    my_revstr(string);
    return string;
}