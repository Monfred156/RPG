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
        (sfVector2f) {550, 200}, (sfIntRect) {0, 0, 1920, 1001});
    gb->sprite[HERO] = *initia_sprite(&gb->sprite[HERO],
        "./assets/graphics/TEST/hero.png", (sfVector2f) {800, 400}, (sfIntRect)
        {0, 0, 0, 0});
    gb->move.movement = 2;
    gb->move.walk = 0;
}

void initia_hitbox_tuto(global *gb)
{
    gb->hitbox[0] = *initia_hitbox(&gb->hitbox[0], (sfVector2f) {50, 540},
        (sfVector2f) {515, 200});
    gb->hitbox[1] = *initia_hitbox(&gb->hitbox[1], (sfVector2f) {1000, 105},
        (sfVector2f) {515, 200});
    gb->hitbox[2] = *initia_hitbox(&gb->hitbox[2], (sfVector2f) {50, 540},
        (sfVector2f) {1495, 200});
    gb->hitbox[3] = *initia_hitbox(&gb->hitbox[3], (sfVector2f) {635, 100},
        (sfVector2f) {510, 665});
    gb->hitbox[4] = *initia_hitbox(&gb->hitbox[4], (sfVector2f) {660, 105},
        (sfVector2f) {1315, 665});
    gb->hitbox[5] = *initia_hitbox(&gb->hitbox[5], (sfVector2f) {50, 500},
        (sfVector2f) {910, 750});
    gb->hitbox[6] = *initia_hitbox(&gb->hitbox[6], (sfVector2f) {1600, 110},
        (sfVector2f) {910, 1130});
    gb->hitbox[7] = *initia_hitbox(&gb->hitbox[7], (sfVector2f) {50, 500},
        (sfVector2f) {2455, 660});
    gb->hitbox[8] = *initia_hitbox(&gb->hitbox[8], (sfVector2f) {400, 105},
        (sfVector2f) {2090, 665});
    gb->hitbox[9] = *initia_hitbox(&gb->hitbox[9], (sfVector2f) {50, 500},
        (sfVector2f) {1810, 200});
    gb->hitbox[10] = *initia_hitbox(&gb->hitbox[10], (sfVector2f) {50, 500},
        (sfVector2f) {2200, 200});
    gb->hitbox[11] = *initia_hitbox(&gb->hitbox[11], (sfVector2f) {440, 110},
        (sfVector2f) {1810, 200});
}