/*
** EPITECH PROJECT, 2019
** initia_fight
** File description:
** initia_fight.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_fight(global *gb)
{
    gb->sprite[FIGHT_BACKGROUND] = *initia_sprite
    (&gb->sprite[FIGHT_BACKGROUND], "./assets/graphics/fight.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    gb->fght.time_atk = 0;
    gb->fght.take_dmg = 0;
    gb->fght.initia = 0;
    gb->fght.dead.y = 5000;
    gb->fght.dead.x = 5000;
    gb->fght.end = 0;
    gb->fght.time_ash = 0;
    gb->fght.time_tuto = 0;
}