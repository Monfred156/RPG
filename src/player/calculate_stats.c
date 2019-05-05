/*
** EPITECH PROJECT, 2018
** initia_stats
** File description:
** initia_stats.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "function.h"
#include "struct.h"

void stat_xp_lvl(global *gb)
{
    static int increase_lvl = 10;

    if (gb->stats.xp == increase_lvl) {
        gb->stats.xp = 0;
        gb->stats.lvl += 1;
        gb->stats.life += 3;
        gb->stats.damage += 3;
        increase_lvl += increase_lvl;
    }
}

void calculate_xp(global *gb)
{
    stat_xp_lvl(gb);
}