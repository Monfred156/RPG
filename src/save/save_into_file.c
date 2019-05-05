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

int save_into_file(global *gb)
{
    sfVector2f pos;
    int posx = 0;
    int posy = 0;
    int fd = open("save.txt", O_CREAT | O_TRUNC | O_RDWR, 0664);
    if (fd < 0)
        return (-1);
    write(fd, "LIFE=", 5);
    write(fd, my_int_to_str(gb->stats.life), my_strlen(my_int_to_str(gb->stats.life)));
    write(fd, "\nHEAD=", 6);
    write(fd, my_int_to_str(gb->stats.head), my_strlen(my_int_to_str(gb->stats.head)));
    write(fd, "\nBODY=", 6);
    write(fd, my_int_to_str(gb->stats.body), my_strlen(my_int_to_str(gb->stats.body)));
    write(fd, "\nFOOT=", 6);
    write(fd, my_int_to_str(gb->stats.foot), my_strlen(my_int_to_str(gb->stats.foot)));
    write(fd, "\nWEAPON=", 8);
    write(fd, my_int_to_str(gb->stats.weapon), my_strlen(my_int_to_str(gb->stats.weapon)));
    write(fd, "\nXP=", 4);
    write(fd, my_int_to_str(gb->stats.xp), my_strlen(my_int_to_str(gb->stats.xp)));
    write(fd, "\nGOLD=", 6);
    write(fd, my_int_to_str(gb->stats.gold), my_strlen(my_int_to_str(gb->stats.gold)));
    write(fd, "\nDAMAGE=", 8);
    write(fd, my_int_to_str(gb->stats.damage), my_strlen(my_int_to_str(gb->stats.damage)));
    write(fd, "\nSCEEN=", 7);
    write(fd, my_int_to_str(gb->selecscreen.back), my_strlen(my_int_to_str(gb->selecscreen.back)));
    if (gb->selecscreen.back == 6)
        pos = sfSprite_getPosition(gb->sprite[TOWN_BACKGROUND].sprite);
    if (gb->selecscreen.back == 7)
        pos = sfSprite_getPosition(gb->sprite[TAVERN].sprite);
    if (gb->selecscreen.back == 8)
        pos = sfSprite_getPosition(gb->sprite[ASH_BACKGROUND].sprite);
    posx = pos.x;
    posy = pos.y;
    printf("%d\n", posx);
    printf("%d\n", posy);
    write(fd, "\nPOSX=", 6);
    write(fd, my_int_to_str(pos.x), my_strlen(my_int_to_str(pos.x)));
    write(fd, "\nPOSY=", 6);
    write(fd, my_int_to_str(pos.y), my_strlen(my_int_to_str(pos.y)));
    write(fd, "\n", 1);
    return (0);
}