/*
** EPITECH PROJECT, 2018
** tavern
** File description:
** tavern
*/

#include "function.h"

void check_touche_key(global *gb, sfKeyCode key)
{
    gb->disev.tele = 1;
    if (!sfKeyboard_isKeyPressed(key)) {
        gb->disev.tele = 0;
    }
}

void teleport_to_place_pub(global *gb)
{
    sfVector2f player = sfSprite_getPosition(gb->sprite[HERO].sprite);
    sfVector2f size = sfRectangleShape_getSize(gb->teleport[EXIT_PUB].teleport);

    if (player.x + 40 > gb->teleport[EXIT_PUB].pos.x && player.x + 50 < gb->teleport[EXIT_PUB].pos.x + size.x &&
        player.y + 10 > gb->teleport[EXIT_PUB].pos.y - 10 && player.y + 70 < gb->teleport[EXIT_PUB].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            gb->selecscreen.sc = 6;
            check_touche_key(gb, sfKeyE);
            sleep(1);
        }
    }
}

void manage_event_pub(global *gb)
{
    event_move_player_pub(gb, TAVERN);
    teleport_to_place_pub(gb);
    open_inventory(gb);
}

void display_pub(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TAVERN].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
        gb->teleport[EXIT_PUB].teleport, NULL);
    if (gb->inv.open == 1)
        display_inventory(gb);
}