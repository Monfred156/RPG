/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void display_hud(global *gb)
{
    sfRectangleShape_setSize(gb->hud[GREEN].rect, (sfVector2f) {gb->stats.life * 7, 20});
    sfRectangleShape_setFillColor(gb->hud[RED].rect, sfRed);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
                                      gb->hud[RED].rect, NULL);
    sfRectangleShape_setFillColor(gb->hud[GREEN].rect, sfGreen);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
                                      gb->hud[GREEN].rect, NULL);
}