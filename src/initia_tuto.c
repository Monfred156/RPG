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
        "./assets/graphics/TEST/tuto_map.png",
        (sfVector2f) {550, -100}, (sfIntRect) {0, 0, 1920, 1001});
    gb->sprite[HERO] = *initia_sprite(&gb->sprite[HERO],
        "./assets/graphics/TEST/hero.png", (sfVector2f) {800, 400}, (sfIntRect)
        {0, 1450, 150, 150});
}

void initia_hitbox_tuto(global *gb)
{
    gb->hitbox[0] = *initia_hitbox(&gb->hitbox[0], (sfVector2f) {50, 500},
        (sfVector2f) {500, 50});
}