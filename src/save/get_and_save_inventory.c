/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void save_into_file_inventory3(global *gb, int fd)
{
    write(fd, "\nINV17=", 7);
    write(fd, my_int_to_str(gb->inv.inv[17]),
          my_strlen(my_int_to_str(gb->inv.inv[17])));
    write(fd, "\nINV18=", 7);
    write(fd, my_int_to_str(gb->inv.inv[18]),
          my_strlen(my_int_to_str(gb->inv.inv[18])));
    write(fd, "\nINV19=", 7);
    write(fd, my_int_to_str(gb->inv.inv[19]),
          my_strlen(my_int_to_str(gb->inv.inv[19])));
    write(fd, "\nLIFE_MOB=", 10);
    write(fd, my_int_to_str(gb->mob[0].life),
          my_strlen(my_int_to_str(gb->mob[0].life)));
    write(fd, "\n", 1);
}

void save_into_file_inventory2(global *gb, int fd)
{
    write(fd, "\nINV11=", 7);
    write(fd, my_int_to_str(gb->inv.inv[11]),
          my_strlen(my_int_to_str(gb->inv.inv[11])));
    write(fd, "\nINV12=", 7);
    write(fd, my_int_to_str(gb->inv.inv[12]),
          my_strlen(my_int_to_str(gb->inv.inv[12])));
    write(fd, "\nINV13=", 7);
    write(fd, my_int_to_str(gb->inv.inv[13]),
          my_strlen(my_int_to_str(gb->inv.inv[13])));
    write(fd, "\nINV14=", 7);
    write(fd, my_int_to_str(gb->inv.inv[14]),
          my_strlen(my_int_to_str(gb->inv.inv[14])));
    write(fd, "\nINV15=", 7);
    write(fd, my_int_to_str(gb->inv.inv[15]),
          my_strlen(my_int_to_str(gb->inv.inv[15])));
    write(fd, "\nINV16=", 7);
    write(fd, my_int_to_str(gb->inv.inv[16]),
          my_strlen(my_int_to_str(gb->inv.inv[16])));
    save_into_file_inventory3(gb, fd);
}

void get_all_inventory(global *gb, char **array)
{
    gb->inv.inv[0] = get_one_stat(array, "INV0");
    gb->inv.inv[1] = get_one_stat(array, "INV1");
    gb->inv.inv[2] = get_one_stat(array, "INV2");
    gb->inv.inv[3] = get_one_stat(array, "INV3");
    gb->inv.inv[4] = get_one_stat(array, "INV4");
    gb->inv.inv[5] = get_one_stat(array, "INV5");
    gb->inv.inv[6] = get_one_stat(array, "INV6");
    gb->inv.inv[7] = get_one_stat(array, "INV7");
    gb->inv.inv[8] = get_one_stat(array, "INV8");
    gb->inv.inv[9] = get_one_stat(array, "INV9");
    gb->inv.inv[10] = get_one_stat(array, "INV10");
    gb->inv.inv[11] = get_one_stat(array, "INV11");
    gb->inv.inv[12] = get_one_stat(array, "INV12");
    gb->inv.inv[13] = get_one_stat(array, "INV13");
    gb->inv.inv[14] = get_one_stat(array, "INV14");
    gb->inv.inv[15] = get_one_stat(array, "INV15");
    gb->inv.inv[16] = get_one_stat(array, "INV16");
    gb->inv.inv[17] = get_one_stat(array, "INV17");
    gb->inv.inv[18] = get_one_stat(array, "INV18");
    gb->inv.inv[19] = get_one_stat(array, "INV19");
}