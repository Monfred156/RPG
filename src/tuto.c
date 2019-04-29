/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[1].sprite, NULL);
}