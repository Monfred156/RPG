/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** Task03 Day06
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i;
    int counter;
    char a;
    counter = 0;
    for (i = 0; str[i]; i++)
    {
        counter++;
    }
    int l = counter;
    counter--;

    for (int n = 0; n < (l / 2); n++)
    {
        a = str[n];
        str[n] = str[counter];
        str[counter] = a;
        counter--;
    }
    return (str);
}
