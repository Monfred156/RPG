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
    write(fd, "\nINVENTORY=", 11);
    write(fd, my_int_to_str(gb->inv.inv[0]), my_strlen(my_int_to_str(gb->inv.inv[0])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[1]), my_strlen(my_int_to_str(gb->inv.inv[1])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[2]), my_strlen(my_int_to_str(gb->inv.inv[2])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[3]), my_strlen(my_int_to_str(gb->inv.inv[3])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[4]), my_strlen(my_int_to_str(gb->inv.inv[4])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[5]), my_strlen(my_int_to_str(gb->inv.inv[5])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[6]), my_strlen(my_int_to_str(gb->inv.inv[6])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[7]), my_strlen(my_int_to_str(gb->inv.inv[7])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[8]), my_strlen(my_int_to_str(gb->inv.inv[8])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[9]), my_strlen(my_int_to_str(gb->inv.inv[9])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[10]), my_strlen(my_int_to_str(gb->inv.inv[10])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[11]), my_strlen(my_int_to_str(gb->inv.inv[11])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[12]), my_strlen(my_int_to_str(gb->inv.inv[12])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[13]), my_strlen(my_int_to_str(gb->inv.inv[13])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[14]), my_strlen(my_int_to_str(gb->inv.inv[14])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[15]), my_strlen(my_int_to_str(gb->inv.inv[15])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[16]), my_strlen(my_int_to_str(gb->inv.inv[16])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[17]), my_strlen(my_int_to_str(gb->inv.inv[17])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[18]), my_strlen(my_int_to_str(gb->inv.inv[18])));
    write(fd, ",", 1);
    write(fd, my_int_to_str(gb->inv.inv[19]), my_strlen(my_int_to_str(gb->inv.inv[19])));
    write(fd, "\nXP=", 4);
    write(fd, my_int_to_str(gb->stats.xp), my_strlen(my_int_to_str(gb->stats.xp)));
    write(fd, "\nGOLD=", 6);
    printf("%d\n", gb->stats.gold);
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
    write(fd, "\nPOSX=", 6);
    write(fd, my_int_to_str(pos.x), my_strlen(my_int_to_str(pos.x)));
    write(fd, "\nPOSY=", 6);
    write(fd, my_int_to_str(pos.y), my_strlen(my_int_to_str(pos.y)));
    write(fd, "\n", 1);
    return (0);
}