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
    gb->sprite[tuto_background] = *initia_sprite(&gb->sprite[1],
        "./assets/graphics/tuto_map.png",
        (sfVector2f) {-200, -100}, (sfIntRect) {0, 0, 3840, 2002});
    gb->sprite[hero] = *initia_sprite(&gb->sprite[hero],
        "./assets/graphics/hero.png", (sfVector2f) {800, 400}, (sfIntRect) {20,
            3220, 300, 250});
}