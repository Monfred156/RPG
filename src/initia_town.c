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
        (sfVector2f) {0, 900});
    gb->hitbox[13] = *initia_hitbox(&gb->hitbox[13], (sfVector2f) {300, 100},
        (sfVector2f) {900, 900});
    gb->hitbox[14] = *initia_hitbox(&gb->hitbox[14], (sfVector2f) {15, 450},
        (sfVector2f) {1310, 560});
    gb->hitbox[15] = *initia_hitbox(&gb->hitbox[15], (sfVector2f) {140, 10},
        (sfVector2f) {1185, 920});
    gb->hitbox[16].hitbox = NULL;
}