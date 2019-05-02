/*
** EPITECH PROJECT, 2018
** initia_pub
** File description:
** initia_pub
*/

#include "function.h"

void initia_sprite_pub(global *gb)
{
    gb->sprite[TAVERN] = *initia_sprite(&gb->sprite[TAVERN],
        "./assets/graphics/TEST/taverne.png",
        (sfVector2f) {240, -380}, (sfIntRect) {0, 0, 1066, 912});
}