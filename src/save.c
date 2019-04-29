/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "function.h"
#include "struct.h"

struct stat *get_save(void)
{
    char *str = NULL;
    int fd = open("save/save.txt", O_RDONLY);
    if (fd < 0)
        return (NULL);
    while (str = get_next_line(fd) != NULL)
}