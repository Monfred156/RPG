/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_button_ash(global *gb)
{
    gb->teleport[EXIT_PORTAL] = *initia_teleport(&gb->teleport[EXIT_PORTAL],
        (sfVector2f){240, 230}, (sfVector2f){780, 320});
}

void initia_sprite_ash(global *gb)
{
    gb->sprite[ASH_BACKGROUND] = *initia_sprite(&gb->sprite[ASH_BACKGROUND],
        "./assets/graphics/ashland.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1672, 1518});
    gb->sprite[PORTAL_BACK] = *initia_sprite(&gb->sprite[PORTAL_BACK],
        "./assets/graphics/portal_back.png",
        (sfVector2f) {740, 300}, (sfIntRect) {300, 0, 266, 900});
}

void initia_hitbox_ash(global *gb)
{
    gb->hitbox[43] = *initia_hitbox(&gb->hitbox[43], (sfVector2f) {1670, 10},
            (sfVector2f) {0, 290});
    gb->hitbox[44] = *initia_hitbox(&gb->hitbox[44], (sfVector2f) {1670, 10},
            (sfVector2f) {0, 1320});
    gb->hitbox[45] = *initia_hitbox(&gb->hitbox[45], (sfVector2f) {10, 1020},
            (sfVector2f) {-50, 290});
    gb->hitbox[46] = *initia_hitbox(&gb->hitbox[46], (sfVector2f) {10, 1020},
            (sfVector2f) {1700, 290});
    gb->hitbox[47] = *initia_hitbox(&gb->hitbox[47], (sfVector2f) {10, 10},
            (sfVector2f) {870, 400});
}