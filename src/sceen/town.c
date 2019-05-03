/*
** EPITECH PROJECT, 2018
** town
** File description:
** town
*/

#include "function.h"

void teleport_to_place_town(global *gb)
{
    sfVector2f player = sfSprite_getPosition(gb->sprite[HERO].sprite);
    sfVector2f size;

    for (int i = 0; i != 1; i++) {
        size = sfRectangleShape_getSize(gb->teleport[i].teleport);
        if (player.x > gb->teleport[i].pos.x && player.x + 100 < gb->teleport[i].pos.x + size.x &&
            player.y > gb->teleport[i].pos.y && player.y + 110 < gb->teleport[i].pos.y + size.y) {
            if (sfKeyboard_isKeyPressed(sfKeyE))
                gb->selecscreen.sc = 7;
        }
    }
}

void display_town(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TOWN_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[PORTAL].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    /*for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        sfRenderWindow_drawRectangleShape(gb->disev.window,
            gb->hitbox[i].hitbox, NULL);
    }*/
}

void move_rect_portal(global *gb, int offset, int max_value, float *time)
{
    if (*time > 0.1) {
        gb->sprite[PORTAL].rect.left += offset;
        if (gb->sprite[PORTAL].rect.left >= max_value)
            gb->sprite[PORTAL].rect.left = 0;
        sfSprite_setTextureRect(gb->sprite[PORTAL].sprite,
            gb->sprite[PORTAL].rect);
        *time = 0;
    }
}

void manage_event_town(global *gb)
{
    static float time = 0;

    time += gb->clock.seconds - gb->clock.save_sec;
    move_rect_portal(gb, 300, 900, &time);
    event_move_player_town(gb, TOWN_BACKGROUND);
    teleport_to_place_town(gb);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        gb->selecscreen.sc = 2;
}