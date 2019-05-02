/*
** EPITECH PROJECT, 2018
** tavern
** File description:
** tavern
*/

#include "function.h"

void manage_event_pub(global *gb)
{
    event_move_player_pub(gb, TAVERN);
}

void display_pub(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TAVERN].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
}