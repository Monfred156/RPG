/*
** EPITECH PROJECT, 2018
** initia_lunch
** File description:
** initia_lunch
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_lunch(global *gb)
{
    gb->sprite[LUNCH] = *initia_sprite(&gb->sprite[LUNCH],
        "./assets/graphics/lunch.jpg",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}