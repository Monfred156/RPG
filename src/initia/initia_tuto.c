/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_button_tuto(global *gb)
{
    gb->teleport[1] = *initia_teleport(&gb->teleport[1],
        (sfVector2f){145, 200}, (sfVector2f){1960, 300});
}

void initia_sprite_tuto(global *gb)
{
    gb->sprite[TUTO_BACKGROUND] = *initia_sprite(&gb->sprite[1],
        "./assets/graphics/tuto_map.png",
        (sfVector2f) {550, 200}, (sfIntRect) {0, 0, 1920, 1001});
    gb->sprite[HERO] = *initia_sprite(&gb->sprite[HERO],
        "./assets/graphics/hero.png", (sfVector2f) {800, 400}, (sfIntRect)
        {0, 0, 150, 150});
    gb->sprite[INVENTORY] = *initia_sprite(&gb->sprite[INVENTORY],
            "./assets/graphics/TEST/Inventory.png", (sfVector2f) {800, 400},
            (sfIntRect) {0, 0, 0, 0});
    gb->move[0].movement = 2;
    gb->move[0].walk = 0;
}

void initia_hitbox_tuto2(global *gb)
{
    gb->hitbox[9] = *initia_hitbox(&gb->hitbox[9], (sfVector2f) {50, 490},
        (sfVector2f) {1810, 200});
    gb->hitbox[10] = *initia_hitbox(&gb->hitbox[10], (sfVector2f) {50, 490},
        (sfVector2f) {2200, 200});
    gb->hitbox[11] = *initia_hitbox(&gb->hitbox[11], (sfVector2f) {440, 30},
        (sfVector2f) {1810, 200});
    gb->hitbox[12] = *initia_hitbox(&gb->hitbox[12], (sfVector2f) {250, 100},
        (sfVector2f) {600, 250});
    gb->hitbox[13] = *initia_hitbox(&gb->hitbox[13], (sfVector2f) {130, 70},
        (sfVector2f) {1380, 700});
    gb->hitbox[14] = *initia_hitbox(&gb->hitbox[14], (sfVector2f) {90, 50},
        (sfVector2f) {1645, 700});
    gb->hitbox[15] = *initia_hitbox(&gb->hitbox[15], (sfVector2f) {90, 50},
        (sfVector2f) {1865, 700});
    gb->hitbox[16] = *initia_hitbox(&gb->hitbox[16], (sfVector2f) {90, 50},
        (sfVector2f) {2100, 700});
    gb->hitbox[17] = *initia_hitbox(&gb->hitbox[17], (sfVector2f) {90, 50},
        (sfVector2f) {2340, 700});
    gb->hitbox[18] = *initia_hitbox(&gb->hitbox[18], (sfVector2f) {90, 80},
        (sfVector2f) {1985, 250});
}

void initia_hitbox_tuto(global *gb)
{
    gb->hitbox[0] = *initia_hitbox(&gb->hitbox[0], (sfVector2f) {10, 540},
        (sfVector2f) {510, 200});
    gb->hitbox[1] = *initia_hitbox(&gb->hitbox[1], (sfVector2f) {1000, 10},
        (sfVector2f) {515, 200});
    gb->hitbox[2] = *initia_hitbox(&gb->hitbox[2], (sfVector2f) {10, 569},
        (sfVector2f) {1520, 200});
    gb->hitbox[3] = *initia_hitbox(&gb->hitbox[3], (sfVector2f) {635, 20},
        (sfVector2f) {510, 678});
    gb->hitbox[4] = *initia_hitbox(&gb->hitbox[4], (sfVector2f) {660, 30},
        (sfVector2f) {1315, 665});
    gb->hitbox[5] = *initia_hitbox(&gb->hitbox[5], (sfVector2f) {50, 500},
        (sfVector2f) {910, 750});
    gb->hitbox[6] = *initia_hitbox(&gb->hitbox[6], (sfVector2f) {1600, 30},
        (sfVector2f) {910, 1130});
    gb->hitbox[7] = *initia_hitbox(&gb->hitbox[7], (sfVector2f) {50, 500},
        (sfVector2f) {2455, 660});
    gb->hitbox[8] = *initia_hitbox(&gb->hitbox[8], (sfVector2f) {400, 30},
        (sfVector2f) {2090, 665});
    initia_hitbox_tuto2(gb);
}