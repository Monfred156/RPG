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