/*
** EPITECH PROJECT, 2018
** initia_town
** File description:
** initia_town
*/

#include "function.h"

void initia_button_town(global *gb)
{
    gb->teleport[0] = *initia_teleport(&gb->teleport[0],
        (sfVector2f){140, 230}, (sfVector2f){2720, 200});
}

void initia_sprite_town(global *gb)
{
    gb->sprite[TOWN_BACKGROUND] = *initia_sprite(&gb->sprite[TOWN_BACKGROUND],
        "./assets/graphics/map.jpg",
        (sfVector2f) {600, -600}, (sfIntRect) {0, 0, 3975, 2257});
    gb->sprite[PORTAL] = *initia_sprite(&gb->sprite[PORTAL],
        "./assets/graphics/portal.png",
        (sfVector2f) {4270, 50}, (sfIntRect) {300, 0, 266, 900});
}

void initia_hitbox_town3(global *gb)
{
    gb->hitbox[38] = *initia_hitbox(&gb->hitbox[38], (sfVector2f) {30, 3000},
        (sfVector2f) {4600, -600});
    gb->hitbox[39] = *initia_hitbox(&gb->hitbox[39], (sfVector2f) {230, 300},
        (sfVector2f) {4050, 0});
    gb->hitbox[40] = *initia_hitbox(&gb->hitbox[40], (sfVector2f) {80, 10},
        (sfVector2f) {700, 320});
    gb->hitbox[41] = *initia_hitbox(&gb->hitbox[41], (sfVector2f) {100, 60},
        (sfVector2f) {600, 600});
    gb->hitbox[42] = *initia_hitbox(&gb->hitbox[42], (sfVector2f) {220, 20},
        (sfVector2f) {4300, 170});
}

void initia_hitbox_town2(global *gb)
{
    gb->hitbox[28] = *initia_hitbox(&gb->hitbox[28], (sfVector2f) {200, 340},
        (sfVector2f) {2350, -260});
    gb->hitbox[29] = *initia_hitbox(&gb->hitbox[29], (sfVector2f) {250, 100},
        (sfVector2f) {2020, 220});
    gb->hitbox[30] = *initia_hitbox(&gb->hitbox[30], (sfVector2f) {550, 15},
        (sfVector2f) {2020, 220});
    gb->hitbox[31] = *initia_hitbox(&gb->hitbox[31], (sfVector2f) {190, 500},
        (sfVector2f) {2550, -200});
    gb->hitbox[32] = *initia_hitbox(&gb->hitbox[32], (sfVector2f) {190, 500},
        (sfVector2f) {2850, -200});
    gb->hitbox[33] = *initia_hitbox(&gb->hitbox[33], (sfVector2f) {800, 200},
        (sfVector2f) {2950, 0});
    gb->hitbox[34] = *initia_hitbox(&gb->hitbox[34], (sfVector2f) {1380, 30},
        (sfVector2f) {820, 740});
    gb->hitbox[35] = *initia_hitbox(&gb->hitbox[35], (sfVector2f) {4000, 30},
        (sfVector2f) {600, 1160});
    gb->hitbox[36] = *initia_hitbox(&gb->hitbox[36], (sfVector2f) {4000, 30},
        (sfVector2f) {600, -300});
    gb->hitbox[37] = *initia_hitbox(&gb->hitbox[37], (sfVector2f) {30, 3000},
        (sfVector2f) {600, -600});
}

void initia_hitbox_town(global *gb)
{
    gb->hitbox[19] = *initia_hitbox(&gb->hitbox[19], (sfVector2f) {740, 100},
        (sfVector2f) {600, 150});
    gb->hitbox[20] = *initia_hitbox(&gb->hitbox[20], (sfVector2f) {300, 100},
        (sfVector2f) {1500, 150});
    gb->hitbox[21] = *initia_hitbox(&gb->hitbox[21], (sfVector2f) {20, 200},
        (sfVector2f) {1170, 150});
    gb->hitbox[22] = *initia_hitbox(&gb->hitbox[22], (sfVector2f) {20, 200},
        (sfVector2f) {1770, 150});
    gb->hitbox[23] = *initia_hitbox(&gb->hitbox[23], (sfVector2f) {15, 450},
        (sfVector2f) {1910, -130});
    gb->hitbox[24] = *initia_hitbox(&gb->hitbox[24], (sfVector2f) {140, 10},
        (sfVector2f) {1785, 260});
    gb->hitbox[25] = *initia_hitbox(&gb->hitbox[25], (sfVector2f) {130, 10},
        (sfVector2f) {1900, -90});
    gb->hitbox[26] = *initia_hitbox(&gb->hitbox[26], (sfVector2f) {200, 340},
        (sfVector2f) {2020, -260});
    gb->hitbox[27] = *initia_hitbox(&gb->hitbox[27], (sfVector2f) {1000, 420},
        (sfVector2f) {2020, -340});
    initia_hitbox_town2(gb);
    initia_hitbox_town3(gb);
}