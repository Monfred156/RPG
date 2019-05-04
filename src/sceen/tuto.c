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
    sfVector2f size = sfRectangleShape_getSize(gb->teleport[1].teleport);

    if (player.x + 40 > gb->teleport[1].pos.x && player.x + 50 < gb->teleport[1].pos.x + size.x &&
        player.y > gb->teleport[1].pos.y && player.y + 50 < gb->teleport[1].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE))
            gb->selecscreen.sc = 6;
    }
}

void manage_event_tuto(global *gb)
{
    static float time = 0;

    if (time <= 0) {
        if (gb->sprite[HERO].rect.top > 3000) {
            gb->sprite[HERO].rect.width = 150;
        }
        event_move_player_tuto(gb, TUTO_BACKGROUND);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            time = 0.45;
    } else {
        time -= gb->clock.seconds - gb->clock.save_sec;
        anim_attack(gb, HERO);
    }
    pattern_mob(gb, 0);
    teleport_to_place_tuto(gb);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        gb->selecscreen.sc = 2;
        gb->selecscreen.back = 5;
    }
    open_inventory(gb);
}

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TUTO_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->mob[0].sprite, NULL);
    display_inventory(gb);
}