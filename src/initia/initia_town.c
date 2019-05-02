/*
** EPITECH PROJECT, 2018
** initia_town
** File description:
** initia_town
*/

#include "function.h"

void initia_sprite_town(global *gb)
{
    gb->sprite[TOWN_BACKGROUND] = *initia_sprite(&gb->sprite[TOWN_BACKGROUND],
        "./assets/graphics/TEST/map.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 3975, 2257});
}

void initia_hitbox_town(global *gb)
{
    gb->hitbox[12] = *initia_hitbox(&gb->hitbox[12], (sfVector2f) {740, 100},
        (sfVector2f) {0, 750});
    gb->hitbox[13] = *initia_hitbox(&gb->hitbox[13], (sfVector2f) {300, 100},
        (sfVector2f) {900, 750});
    gb->hitbox[14] = *initia_hitbox(&gb->hitbox[14], (sfVector2f) {20, 200},
        (sfVector2f) {570, 750});
    gb->hitbox[15] = *initia_hitbox(&gb->hitbox[15], (sfVector2f) {20, 200},
        (sfVector2f) {1170, 750});
    gb->hitbox[16] = *initia_hitbox(&gb->hitbox[16], (sfVector2f) {15, 450},
        (sfVector2f) {1310, 480});
    gb->hitbox[17] = *initia_hitbox(&gb->hitbox[17], (sfVector2f) {140, 10},
        (sfVector2f) {1185, 860});
    gb->hitbox[18] = *initia_hitbox(&gb->hitbox[18], (sfVector2f) {130, 10},
        (sfVector2f) {1300, 510});
    gb->hitbox[19] = *initia_hitbox(&gb->hitbox[19], (sfVector2f) {200, 340},
        (sfVector2f) {1420, 340});
    gb->hitbox[20] = *initia_hitbox(&gb->hitbox[20], (sfVector2f) {1000, 230},
        (sfVector2f) {1420, 340});
    gb->hitbox[21] = *initia_hitbox(&gb->hitbox[21], (sfVector2f) {200, 340},
        (sfVector2f) {1750, 340});
    gb->hitbox[22] = *initia_hitbox(&gb->hitbox[22], (sfVector2f) {250, 100},
        (sfVector2f) {1420, 820});
    gb->hitbox[23] = *initia_hitbox(&gb->hitbox[23], (sfVector2f) {550, 15},
        (sfVector2f) {1420, 820});
    gb->hitbox[24] = *initia_hitbox(&gb->hitbox[24], (sfVector2f) {190, 500},
        (sfVector2f) {1950, 420});
    gb->hitbox[25] = *initia_hitbox(&gb->hitbox[25], (sfVector2f) {190, 500},
        (sfVector2f) {2250, 420});
    gb->hitbox[26] = *initia_hitbox(&gb->hitbox[26], (sfVector2f) {800, 400},
        (sfVector2f) {2350, 420});
    gb->hitbox[27].hitbox = NULL;
}