/*
** EPITECH PROJECT, 2018
** tavern
** File description:
** tavern
*/

#include "function.h"

void dialogue_pnj_pub(global *gb, int sprite, int quest)
{
    pnj_rando_rect(gb, PNJ_PUB, 32, 128);
    if (collision_between__sprite(gb->sprite[HERO].sprite, gb->quest[quest].shape)
        == 1 && sfKeyboard_isKeyPressed(sfKeyE))
        gb->quest[0].open = 1;
    if (collision_between__sprite(gb->sprite[HERO].sprite, gb->quest[quest].shape)
        == 0) {
        gb->quest[0].open = 0;
    }
    if (gb->quest->open == 1) {
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[BACK_TEXT].sprite, NULL);
        sfRenderWindow_drawText(gb->disev.window, gb->text[PNJ_LIFE].text,
            NULL);
    }
}

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
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        gb->selecscreen.sc = 3;
        gb->selecscreen.back = 7;
    }
}

void display_pub(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TAVERN].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[PNJ_PUB].sprite, NULL);
    dialogue_pnj_pub(gb, PNJ_PUB, 3);
    if (gb->inv.open == 1)
        display_inventory(gb);
    display_hud(gb);
}