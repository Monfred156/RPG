/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_ash(global *gb)
{
    gb->sprite[ASH_BACKGROUND] = *initia_sprite(&gb->sprite[ASH_BACKGROUND],
        "./assets/graphics/ashland.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1672, 1518});
}