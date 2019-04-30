/*
** EPITECH PROJECT, 2019
** get_next
** File description:
** line.c
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

char *into_str(char const *buffer, char *str)
{
    int a = 0;
    char *dup;
    int count_str = 0;

    for (; str[count_str]; count_str++);
    dup = malloc(sizeof(char) * (count_str + 2));
    for (int i = 0; str[i]; i++)
        dup[i] = str[i];
    for (; buffer[a]; a++)
        dup[count_str + a] = buffer[a];
    dup[count_str + a] = '\0';
    free(str);
    return (dup);
}

char *get_next_line(int fd)
{
    char *str = malloc(sizeof(char) * 1);
    str[0] = '\0';
    char *buffer = malloc(sizeof(char) * 2);
    buffer[0] = 'a';
    if (fd >= 0) {
        while (buffer[0] != '\0') {
            buffer[read(fd, buffer, 1)] = '\0';
            if (buffer[0] == '\n')
                return (str);
            str = into_str(buffer, str);
        }
    }
    return (NULL);
}