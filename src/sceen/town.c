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
        gb->sprite[PORTAL].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    sfRenderWindow_drawRectangleShape(gb->disev.window, gb->button[BUTTON_PUB].rect, NULL);
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
    event_move_player(gb, TOWN_BACKGROUND);
}