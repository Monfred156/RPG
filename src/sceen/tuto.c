/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void teleport_to_place_tuto(global *gb)
{
    sfVector2f player = sfSprite_getPosition(gb->sprite[HERO].sprite);
    sfVector2f size;

    size = sfRectangleShape_getSize(gb->teleport[1].teleport);
    if (player.x > gb->teleport[1].pos.x && player.x + 100 < gb->teleport[1].pos.x + size.x &&
    player.y > gb->teleport[1].pos.y && player.y + 110 < gb->teleport[1].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE))
            gb->selecscreen.sc = 6;
    }
}

void manage_event_tuto(global *gb)
{
    event_move_player_tuto(gb, TUTO_BACKGROUND);
    teleport_to_place_tuto(gb);
}

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TUTO_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    /*for (int i = VAL_MIN_TUTO; i <= VAL_MAX_TUTO; i++) {
        sfRenderWindow_drawRectangleShape(gb->disev.window,
            gb->hitbox[i].hitbox, NULL);
    }*/
}