/*
** EPITECH PROJECT, 2018
** initia_pub
** File description:
** initia_pub
*/

#include "function.h"

void initia_button_pub(global *gb)
{
    gb->disev.tele = 0;
    gb->teleport[EXIT_PUB] = *initia_teleport(&gb->teleport[EXIT_PUB],
        (sfVector2f){250, 330}, (sfVector2f){680, 280});
    sfRectangleShape_setFillColor(gb->teleport[0].teleport, sfRed);
    sfRectangleShape_setFillColor(gb->teleport[1].teleport, sfRed);
    sfRectangleShape_setFillColor(gb->teleport[2].teleport, sfRed);
    sfRectangleShape_setFillColor(gb->teleport[3].teleport, sfRed);
}

void initia_sprite_pub(global *gb)
{
    gb->sprite[TAVERN] = *initia_sprite(&gb->sprite[TAVERN],
        "./assets/graphics/taverne.jpg",
        (sfVector2f) {240, -380}, (sfIntRect) {0, 0, 1066, 912});
}

void initia_hitbox_pub2(global *gb)
{
    gb->hitbox[56] = *initia_hitbox(&gb->hitbox[56], (sfVector2f) {400, 10},
            (sfVector2f) {890, -130});
    gb->hitbox[57] = *initia_hitbox(&gb->hitbox[57], (sfVector2f) {10, 10},
            (sfVector2f) {915, -80});
    gb->hitbox[58] = *initia_hitbox(&gb->hitbox[58], (sfVector2f) {10, 10},
            (sfVector2f) {1010, -62});
    gb->hitbox[59] = *initia_hitbox(&gb->hitbox[59], (sfVector2f) {10, 10},
            (sfVector2f) {1085, -70});
    gb->hitbox[60] = *initia_hitbox(&gb->hitbox[60], (sfVector2f) {600, 10},
            (sfVector2f) {437, 543});
}

void initia_hitbox_pub(global *gb)
{
    gb->hitbox[48] = *initia_hitbox(&gb->hitbox[48], (sfVector2f) {10, 300},
            (sfVector2f) {380, 200});
    gb->hitbox[49] = *initia_hitbox(&gb->hitbox[49], (sfVector2f) {10, 300},
            (sfVector2f) {1096, 160});
    gb->hitbox[50] = *initia_hitbox(&gb->hitbox[50], (sfVector2f) {10, 120},
            (sfVector2f) {440, -30});
    gb->hitbox[51] = *initia_hitbox(&gb->hitbox[51], (sfVector2f) {10, 80},
            (sfVector2f) {490, -250});
    gb->hitbox[52] = *initia_hitbox(&gb->hitbox[52], (sfVector2f) {10, 10},
            (sfVector2f) {570, -330});
    gb->hitbox[53] = *initia_hitbox(&gb->hitbox[53], (sfVector2f) {600, 10},
            (sfVector2f) {655, -300});
    gb->hitbox[54] = *initia_hitbox(&gb->hitbox[54], (sfVector2f) {10, 800},
            (sfVector2f) {1330, -260});
    gb->hitbox[55] = *initia_hitbox(&gb->hitbox[55], (sfVector2f) {200, 10},
            (sfVector2f) {1100, 160});
    initia_hitbox_pub2(gb);
}