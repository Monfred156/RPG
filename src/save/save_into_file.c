/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int save_into_file(stats *stats)
{
    int fd = open("save/save.txt", O_CREAT | O_TRUNC | O_RDWR, 0664);
    if (fd < 0)
        return (-1);
    write(fd, "LIFE=", 5);
    write(fd, my_int_to_str(stats->life), my_strlen(my_int_to_str(stats->life)));
    write(fd, "\nHEAD=", 6);
    write(fd, my_int_to_str(stats->head), my_strlen(my_int_to_str(stats->head)));
    write(fd, "\nBODY=", 6);
    write(fd, my_int_to_str(stats->body), my_strlen(my_int_to_str(stats->body)));
    write(fd, "\nLEG=", 5);
    write(fd, my_int_to_str(stats->leg), my_strlen(my_int_to_str(stats->leg)));
    write(fd, "\nFOOT=", 6);
    write(fd, my_int_to_str(stats->foot), my_strlen(my_int_to_str(stats->foot)));
    write(fd, "\nWEAPON=", 8);
    write(fd, my_int_to_str(stats->weapon), my_strlen(my_int_to_str(stats->weapon)));
    write(fd, "\nXP=", 4);
    write(fd, my_int_to_str(stats->xp), my_strlen(my_int_to_str(stats->xp)));
    write(fd, "\n", 1);
    return (0);
}