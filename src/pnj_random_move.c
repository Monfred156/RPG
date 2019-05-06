/*
** EPITECH PROJECT, 2018
** pnj_random_move
** File description:
** pnj_random_move
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void move_rect_pnj(global *gb, const int *value, float *time, int sprite)
{
    if (*time > 2) {
        gb->sprite[sprite].rect.left += value[0];
        if (gb->sprite[sprite].rect.left >= value[1])
            gb->sprite[sprite].rect.left = 0;
        sfSprite_setTextureRect(gb->sprite[sprite].sprite,
            gb->sprite[sprite].rect);
        *time = 0;
    }
}

void pnj_rando_rect(global *gb, int sprite, int offset, int max_value)
{
    static float anim_portail = 0;
    int random = rand() % 5;
    int value[2] = {(offset * random), max_value};

    anim_portail += gb->clock.seconds - gb->clock.save_sec;
    move_rect_pnj(gb, value, &anim_portail, sprite);
}