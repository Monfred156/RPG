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
}