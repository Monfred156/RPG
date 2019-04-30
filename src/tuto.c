/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_tuto(global *gb)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        gb->sprite[tuto_background].pos.x -= 2;
        sfSprite_setPosition(gb->sprite[tuto_background].sprite,
            gb->sprite[tuto_background].pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        gb->sprite[tuto_background].pos.x += 2;
        sfSprite_setPosition(gb->sprite[tuto_background].sprite,
            gb->sprite[tuto_background].pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        gb->sprite[tuto_background].pos.y += 2;
        sfSprite_setPosition(gb->sprite[tuto_background].sprite,
            gb->sprite[tuto_background].pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        gb->sprite[tuto_background].pos.y -= 2;
        sfSprite_setPosition(gb->sprite[tuto_background].sprite,
            gb->sprite[tuto_background].pos);
    }
}

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[tuto_background].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[hero].sprite, NULL);
}