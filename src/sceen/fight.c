/*
** EPITECH PROJECT, 2019
** fight
** File description:
** fight.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void display_fight(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[FIGHT_BACKGROUND].sprite, NULL);
}