/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_var_tuto(global *gb)
{
    gb->inv.open = 0;
}

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
        "./assets/graphics/inventory.png", (sfVector2f) {530, 320},
        (sfIntRect) {0, 0, 818, 335});
    for (int i = 0; i < NB_MOB; i++) {
        gb->mob[i] = *initia_sprite_mob(&gb->mob[i],
        "./assets/graphics/orck.png", (sfVector2f) {800, 400},
        (sfIntRect) {0, 0, 150, 150});
        gb->move[i + 1].movement = 0;
        gb->move[i + 1].walk = 0;
    }
    gb->move[0].movement = 2;
    gb->move[0].walk = 0;
}

void initia_hitbox_tuto2(global *gb)
{
    gb->hitbox[9] = *initia_hitbox(&gb->hitbox[9], (sfVector2f) {10, 480},
        (sfVector2f) {1800, 200});
    gb->hitbox[10] = *initia_hitbox(&gb->hitbox[10], (sfVector2f) {10, 480},
        (sfVector2f) {2227, 200});
    gb->hitbox[11] = *initia_hitbox(&gb->hitbox[11], (sfVector2f) {427, 10},
        (sfVector2f) {1810, 200});
    gb->hitbox[12] = *initia_hitbox(&gb->hitbox[12], (sfVector2f) {200, 10},
        (sfVector2f) {600, 310});
    gb->hitbox[13] = *initia_hitbox(&gb->hitbox[13], (sfVector2f) {70, 70},
        (sfVector2f) {1410, 700});
    gb->hitbox[14] = *initia_hitbox(&gb->hitbox[14], (sfVector2f) {20, 10},
        (sfVector2f) {1670, 720});
    gb->hitbox[15] = *initia_hitbox(&gb->hitbox[15], (sfVector2f) {20, 10},
        (sfVector2f) {1890, 720});
    gb->hitbox[16] = *initia_hitbox(&gb->hitbox[16], (sfVector2f) {20, 10},
        (sfVector2f) {2127, 720});
    gb->hitbox[17] = *initia_hitbox(&gb->hitbox[17], (sfVector2f) {20, 10},
        (sfVector2f) {2370, 720});
    gb->hitbox[18] = *initia_hitbox(&gb->hitbox[18], (sfVector2f) {10, 10},
        (sfVector2f) {2016, 270});
}

void initia_hitbox_tuto(global *gb)
{
    gb->hitbox[0] = *initia_hitbox(&gb->hitbox[0], (sfVector2f) {10, 480},
        (sfVector2f) {510, 200});
    gb->hitbox[1] = *initia_hitbox(&gb->hitbox[1], (sfVector2f) {1010, 10},
        (sfVector2f) {515, 200});
    gb->hitbox[2] = *initia_hitbox(&gb->hitbox[2], (sfVector2f) {10, 486},
        (sfVector2f) {1520, 200});
    gb->hitbox[3] = *initia_hitbox(&gb->hitbox[3], (sfVector2f) {586, 10},
        (sfVector2f) {510, 678});
    gb->hitbox[4] = *initia_hitbox(&gb->hitbox[4], (sfVector2f) {586, 10},
        (sfVector2f) {1343, 678});
    gb->hitbox[5] = *initia_hitbox(&gb->hitbox[5], (sfVector2f) {10, 473},
        (sfVector2f) {900, 680});
    gb->hitbox[6] = *initia_hitbox(&gb->hitbox[6], (sfVector2f) {1580, 10},
        (sfVector2f) {900, 1143});
    gb->hitbox[7] = *initia_hitbox(&gb->hitbox[7], (sfVector2f) {10, 475},
        (sfVector2f) {2480, 678});
    gb->hitbox[8] = *initia_hitbox(&gb->hitbox[8], (sfVector2f) {373, 10},
        (sfVector2f) {2116, 678});
    initia_hitbox_tuto2(gb);
}