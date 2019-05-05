/*
** EPITECH PROJECT, 2018
** initia_town
** File description:
** initia_town
*/

#include "function.h"

void initia_button_town(global *gb)
{
    gb->teleport[PUB] = *initia_teleport(&gb->teleport[PUB],
        (sfVector2f){140, 230}, (sfVector2f){2720, 250});
    gb->teleport[OPEN_PORTAL] = *initia_teleport(&gb->teleport[OPEN_PORTAL],
        (sfVector2f){240, 230}, (sfVector2f){4300, 100});
}

void initia_sprite_town(global *gb)
{
    gb->sprite[TOWN_BACKGROUND] = *initia_sprite(&gb->sprite[TOWN_BACKGROUND],
        "./assets/graphics/map.png",
        (sfVector2f) {600, -600}, (sfIntRect) {0, 0, 3975, 2257});
    gb->sprite[PORTAL] = *initia_sprite(&gb->sprite[PORTAL],
        "./assets/graphics/portal.png",
        (sfVector2f) {4270, 50}, (sfIntRect) {300, 0, 266, 900});
    gb->sprite[SHOP] = *initia_sprite(&gb->sprite[SHOP],
        "./assets/graphics/shop.png",
        (sfVector2f) {1130, 120}, (sfIntRect) {0, 0, 872, 735});
}

void initia_hitbox_town3(global *gb)
{
    gb->hitbox[38] = *initia_hitbox(&gb->hitbox[38], (sfVector2f) {30, 3000},
        (sfVector2f) {4600, -600});
    gb->hitbox[39] = *initia_hitbox(&gb->hitbox[39], (sfVector2f) {120, 270},
        (sfVector2f) {4060, 30});
    gb->hitbox[40] = *initia_hitbox(&gb->hitbox[40], (sfVector2f) {10, 10},
        (sfVector2f) {730, 280});
    gb->hitbox[41] = *initia_hitbox(&gb->hitbox[41], (sfVector2f) {40, 30},
        (sfVector2f) {610, 620});
    gb->hitbox[42] = *initia_hitbox(&gb->hitbox[42], (sfVector2f) {220, 20},
        (sfVector2f) {4300, 170});
    gb->trader = *initia_trader(&gb->trader, (sfVector2f) {600, 100},
        (sfVector2f) {3150, 200});
}

void initia_hitbox_town2(global *gb)
{
    gb->hitbox[28] = *initia_hitbox(&gb->hitbox[28], (sfVector2f) {1, 1},
        (sfVector2f) {2350, -260});
    gb->hitbox[29] = *initia_hitbox(&gb->hitbox[29], (sfVector2f) {150, 100},
        (sfVector2f) {2050, 220});
    gb->hitbox[30] = *initia_hitbox(&gb->hitbox[30], (sfVector2f) {500, 10},
        (sfVector2f) {2050, 220});
    gb->hitbox[31] = *initia_hitbox(&gb->hitbox[31], (sfVector2f) {500, 500},
        (sfVector2f) {2570, -200});
    gb->hitbox[32] = *initia_hitbox(&gb->hitbox[32], (sfVector2f) {1, 1},
        (sfVector2f) {2850, -200});
    gb->hitbox[33] = *initia_hitbox(&gb->hitbox[33], (sfVector2f) {740, 180},
        (sfVector2f) {2980, 20});
    gb->hitbox[34] = *initia_hitbox(&gb->hitbox[34], (sfVector2f) {1300, 10},
        (sfVector2f) {860, 740});
    gb->hitbox[35] = *initia_hitbox(&gb->hitbox[35], (sfVector2f) {4000, 30},
        (sfVector2f) {620, 1160});
    gb->hitbox[36] = *initia_hitbox(&gb->hitbox[36], (sfVector2f) {4000, 30},
        (sfVector2f) {600, -300});
    gb->hitbox[37] = *initia_hitbox(&gb->hitbox[37], (sfVector2f) {10, 3000},
        (sfVector2f) {550, -600});
}

void initia_hitbox_town(global *gb)
{
    gb->hitbox[19] = *initia_hitbox(&gb->hitbox[19], (sfVector2f) {400, 10},
        (sfVector2f) {600, 240});
    gb->hitbox[20] = *initia_hitbox(&gb->hitbox[20], (sfVector2f) {170, 10},
        (sfVector2f) {1000, 170});
    gb->hitbox[21] = *initia_hitbox(&gb->hitbox[21], (sfVector2f) {2, 160},
        (sfVector2f) {1170, 170});
    gb->hitbox[22] = *initia_hitbox(&gb->hitbox[22], (sfVector2f) {2, 110},
        (sfVector2f) {1770, 220});
    gb->hitbox[23] = *initia_hitbox(&gb->hitbox[23], (sfVector2f) {10, 400},
        (sfVector2f) {1875, -90});
    gb->hitbox[24] = *initia_hitbox(&gb->hitbox[24], (sfVector2f) {115, 10},
        (sfVector2f) {1770, 260});
    gb->hitbox[25] = *initia_hitbox(&gb->hitbox[25], (sfVector2f) {170, 10},
        (sfVector2f) {1880, -90});
    gb->hitbox[26] = *initia_hitbox(&gb->hitbox[26], (sfVector2f) {500, 320},
        (sfVector2f) {2050, -260});
    gb->hitbox[27] = *initia_hitbox(&gb->hitbox[27], (sfVector2f) {600, 10},
        (sfVector2f) {1170, 220});
    initia_hitbox_town2(gb);
    initia_hitbox_town3(gb);
}