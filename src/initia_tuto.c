/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_tuto(global *gb)
{
    gb->sprite[TUTO_BACKGROUND] = *initia_sprite(&gb->sprite[1],
        "./assets/graphics/tuto_map.png",
        (sfVector2f) {550, -100}, (sfIntRect) {0, 0, 3840, 2002});
    gb->sprite[HERO] = *initia_sprite(&gb->sprite[HERO],
        "./assets/graphics/hero.png", (sfVector2f) {800, 400}, (sfIntRect) {20,
            3220, 300, 250});
}