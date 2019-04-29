/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_menu(global *gb)
{
    gb->sprite[menu_background] = *initia_sprite(&gb->sprite[0],
        "./assets/graphics/menu_background.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}

void initia_button_menu(global *gb)
{
    gb->button[0] = *initia_button(gb, (sfVector2f) {450, 150}, (sfVector2f)
    {1420, 500});
}