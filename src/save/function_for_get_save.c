/*
** EPITECH PROJECT, 2018
** fonction_for
** File description:
** get_save.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "function.h"
#include "struct.h"

char **get_into_map(char **map, char *str, int counter)
{
    char **dup = malloc(sizeof(char *) * (counter + 2));

    for (int i = 0; map[i]; i++)
        dup[i] = map[i];
    dup[counter] = str;
    dup[counter + 1] = NULL;
    free(map);
    return (dup);
}

int my_strncmp(char *str1, char *str2, int counter)
{
    str1[counter] = '\0';
    if (strcmp(str1, str2) == 0)
        return (0);
    return (1);
}

int check_var(char *str, char **array)
{
    int counter = 0;

    for (int i = 0; array[i]; i++) {
        if (my_strncmp(my_strdup(array[i]), str, my_strlen(str)) == 0)
            counter++;
    }
    return (counter);
}

void decal(char *str, int counter)
{
    int i = 0;

    for (; str[i + counter]; i++)
        str[i] = str[i + counter];
    str[i] = '\0';
}