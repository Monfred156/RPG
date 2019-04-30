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
        {20, 3220, 300, 250});
}

void initia_hitbox_tuto(global *gb)
{
    gb->hitbox[0] = *initia_hitbox(&gb->hitbox[0], (sfVector2f) {50, 540},
        (sfVector2f) {515, -100});
    gb->hitbox[1] = *initia_hitbox(&gb->hitbox[1], (sfVector2f) {1000, 105},
        (sfVector2f) {515, -100});
    gb->hitbox[2] = *initia_hitbox(&gb->hitbox[2], (sfVector2f) {50, 540},
        (sfVector2f) {1495, -100});
    gb->hitbox[3].hitbox = NULL;
}