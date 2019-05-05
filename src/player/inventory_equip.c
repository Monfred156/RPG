/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void equip_weapon_chest(global *gb, int const *place)
{
    if (gb->inv.inv[*place] >= AXE && gb->inv.inv[*place] <= LANCE
        && gb->inv.inv[18] == 0) {
        gb->inv.inv[18] = gb->inv.inv[*place];
        gb->inv.inv[*place] = 0;
    }
    if ((gb->inv.inv[*place] == ARMOR || gb->inv.inv[*place] ==
        ARMOR2) && gb->inv.inv[17] == 0) {
        gb->inv.inv[17] = gb->inv.inv[*place];
        gb->inv.inv[*place] = 0;
    }
}

void equip_head_shield(global *gb, int const *place)
{
    if ((gb->inv.inv[*place] == HEAD || gb->inv.inv[*place] == HEAD2)
        && gb->inv.inv[15] == 0) {
        gb->inv.inv[15] = gb->inv.inv[*place];
        gb->inv.inv[*place] = 0;
    }
    if (gb->inv.inv[*place] == SHIELD && gb->inv.inv[16] == 0) {
        gb->inv.inv[16] = gb->inv.inv[*place];
        gb->inv.inv[*place] = 0;
    }
}

void equip_legs(global *gb, const int *place)
{
    if ((gb->inv.inv[*place] == LEGS || gb->inv.inv[*place] == LEGS2)
        && gb->inv.inv[19] == 0) {
        gb->inv.inv[19] = gb->inv.inv[*place];
        gb->inv.inv[*place] = 0;
    }
}

