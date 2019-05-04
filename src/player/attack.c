/*
** EPITECH PROJECT, 2019
** attack
** File description:
** attack.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void anim_attack(global *gb, int sprite)
{
    static float nb;
    static float nb2;

    if (gb->sprite[sprite].rect.top < 3000) {
        nb = 0.5;
        nb2 = 0.4;
        gb->sprite[sprite].rect.top += 3150;
        gb->sprite[sprite].rect.left = 0;
        gb->sprite[sprite].rect.width = 300;
    }
    nb -= gb->clock.seconds - gb->clock.save_sec;
    if (nb2 >= nb) {
        nb2 -= 0.1;
        gb->sprite[sprite].rect.left += 300;
    }
    sfSprite_setTextureRect(gb->sprite[sprite].sprite,
    gb->sprite[sprite].rect);
}