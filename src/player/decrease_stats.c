/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void decrease_stats_legs(global *gb)
{
    if (gb->inv.inv[19] == LEGS) {
        gb->stats.life_max -= 15;
        manage_life_and_life_max(gb);
    }
    if (gb->inv.inv[19] == LEGS2) {
        gb->stats.life_max -= 5;
        manage_life_and_life_max(gb);
    }
}

void decrease_stats_weapon(global *gb)
{
    if (gb->inv.inv[18] == SWORD)
        gb->stats.damage -= 3;
    if (gb->inv.inv[18] == SWORD1)
        gb->stats.damage -= 6;
    if (gb->inv.inv[18] == AXE)
        gb->stats.damage -= 9;
    if (gb->inv.inv[18] == LANCE)
        gb->stats.damage -= 13;
    if (gb->inv.inv[18] == SWORD2)
        gb->stats.damage -= 20;
}

void decrease_stats_armor(global *gb)
{
    if (gb->inv.inv[17] == ARMOR2) {
        gb->stats.life_max -= 10;
        manage_life_and_life_max(gb);
    }
    if (gb->inv.inv[17] == ARMOR) {
        gb->stats.life_max -= 25;
        manage_life_and_life_max(gb);
    }
}

void decrease_stats_head(global *gb)
{
    if (gb->inv.inv[15] == HEAD2) {
        gb->stats.life_max -= 5;
        manage_life_and_life_max(gb);
    }
    if (gb->inv.inv[15] == HEAD) {
        gb->stats.life_max -= 15;
        manage_life_and_life_max(gb);
    }
}

void decrease_stats_shield(global *gb)
{
    if (gb->inv.inv[16] == SHIELD) {
        gb->stats.life_max -= 30;
        manage_life_and_life_max(gb);
    }
}