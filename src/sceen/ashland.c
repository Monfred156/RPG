/*
** EPITECH PROJECT, 2018
** ashland
** File description:
** ashland
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_ash(global *gb)
{
    event_move_player_ash(gb, ASH_BACKGROUND);
}

void display_ash(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[ASH_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);}