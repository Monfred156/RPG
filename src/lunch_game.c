/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void display_lunch(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[LUNCH].sprite, NULL);
}

void manage_event_lunch(global *gb)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        gb->selecscreen.sc = 5;
    display_lunch(gb);
}