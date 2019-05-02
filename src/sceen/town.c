/*
** EPITECH PROJECT, 2018
** town
** File description:
** town
*/

#include "function.h"

void display_town(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TOWN_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    for (int i = 12; gb->hitbox[i].hitbox; i++) {
        sfRenderWindow_drawRectangleShape(gb->disev.window,
            gb->hitbox[i].hitbox, NULL);
    }

}

void manage_event_town(global *gb)
{
    event_move_player(gb, TOWN_BACKGROUND);
}