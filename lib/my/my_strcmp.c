/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int counter = 0;
    int counter_s1 = my_strlen(s1);

    if (my_strlen(s1) == my_strlen(s2)) {
        for (int i = 0; s1[i]; i++) {
            if (s1[i] == s2[i])
                counter++;
        }
        if (counter == counter_s1)
            return (0);
    }
    return (1);
}