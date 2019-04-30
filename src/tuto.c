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
    static float time_save = 0;
    int time_sec;

    time_sec = (gb->clock.seconds - time_save) * 700;
    time_save = gb->clock.seconds;
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        gb->sprite[TUTO_BACKGROUND].pos.x -= time_sec;
        //sfSprite_setTextureRect(sprite->sprite, sprite->rect);
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        gb->sprite[TUTO_BACKGROUND].pos.x += time_sec;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        gb->sprite[TUTO_BACKGROUND].pos.y += time_sec;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        gb->sprite[TUTO_BACKGROUND].pos.y -= time_sec;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
    }
}

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TUTO_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
}