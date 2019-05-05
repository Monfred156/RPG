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

void stat_armor(global *gb)
{
    if (gb->inv.inv[15] == HEAD2)
        gb->stats.life += 5;
    if (gb->inv.inv[15] == HEAD)
        gb->stats.life += 15;
    if (gb->inv.inv[16] == SHIELD)
        gb->stats.life += 30;
    if (gb->inv.inv[17] == ARMOR2)
        gb->stats.life += 10;
    if (gb->inv.inv[17] == ARMOR)
        gb->stats.life += 25;
    if (gb->inv.inv[18] == SWORD)
        gb->stats.damage += 3;
}

void stat_armor2(global *gb)
{
    if (gb->inv.inv[18] == SWORD1)
        gb->stats.damage += 6;
    if (gb->inv.inv[18] == AXE)
        gb->stats.damage += 9;
    if (gb->inv.inv[18] == LANCE)
        gb->stats.damage += 13;
    if (gb->inv.inv[18] == SWORD2)
        gb->stats.damage += 20;
    if (gb->inv.inv[19] == LEGS)
        gb->stats.life += 5;
    if (gb->inv.inv[19] == LEGS2)
        gb->stats.life += 15;
}

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

void calculate_stats(global *gb)
{
    stat_armor(gb);
    stat_armor2(gb);
    stat_xp_lvl(gb);
}