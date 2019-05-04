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
    gb->teleport[2] = *initia_teleport(&gb->teleport[2],
        (sfVector2f){250, 330}, (sfVector2f){680, 280});
    sfRectangleShape_setFillColor(gb->teleport[2].teleport, sfRed);
}

void initia_sprite_pub(global *gb)
{
    gb->sprite[TAVERN] = *initia_sprite(&gb->sprite[TAVERN],
        "./assets/graphics/taverne.jpg",
        (sfVector2f) {240, -380}, (sfIntRect) {0, 0, 1066, 912});
}