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
        {0, 0, 0, 0});
    gb->move.movement = 2;
    gb->move.walk = 0;
}

void initia_hitbox_tuto(global *gb)
{
    gb->hitbox[0] = *initia_hitbox(&gb->hitbox[0], (sfVector2f) {50, 540},
        (sfVector2f) {515, -100});
    gb->hitbox[1] = *initia_hitbox(&gb->hitbox[1], (sfVector2f) {1000, 105},
        (sfVector2f) {515, -100});
    gb->hitbox[2] = *initia_hitbox(&gb->hitbox[2], (sfVector2f) {50, 540},
        (sfVector2f) {1495, -100});
    gb->hitbox[3] = *initia_hitbox(&gb->hitbox[3], (sfVector2f) {635, 100},
        (sfVector2f) {510, 365});
    gb->hitbox[4] = *initia_hitbox(&gb->hitbox[4], (sfVector2f) {660, 105},
        (sfVector2f) {1315, 365});
    gb->hitbox[5] = *initia_hitbox(&gb->hitbox[5], (sfVector2f) {50, 500},
        (sfVector2f) {910, 450});
    gb->hitbox[6] = *initia_hitbox(&gb->hitbox[6], (sfVector2f) {1600, 110},
        (sfVector2f) {910, 830});
    gb->hitbox[7] = *initia_hitbox(&gb->hitbox[7], (sfVector2f) {50, 500},
        (sfVector2f) {2455, 360});
    gb->hitbox[8] = *initia_hitbox(&gb->hitbox[8], (sfVector2f) {400, 105},
        (sfVector2f) {2090, 365});
    gb->hitbox[9].hitbox = NULL;
}