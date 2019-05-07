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
    sfRectangleShape_setSize(gb->hud[GREEN].rect,
    (sfVector2f) {gb->stats.life * 7, 20});
    sfRectangleShape_setFillColor(gb->hud[RED].rect, sfRed);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
    gb->hud[RED].rect, NULL);
    sfRectangleShape_setFillColor(gb->hud[GREEN].rect, sfGreen);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
    gb->hud[GREEN].rect, NULL);
}

void display_hud_mob(global *gb)
{
    if (gb->mob[gb->fght.mob].life <= 0)
        gb->mob[gb->fght.mob].life = 0;
    sfRectangleShape_setSize(gb->hud_mob[GREEN].rect,
    (sfVector2f) {gb->mob[gb->fght.mob].life * 7, 20});
    sfRectangleShape_setFillColor(gb->hud_mob[RED].rect, sfRed);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
    gb->hud_mob[RED].rect, NULL);
    sfRectangleShape_setFillColor(gb->hud_mob[GREEN].rect, sfGreen);
    sfRenderWindow_drawRectangleShape(gb->disev.window,
    gb->hud_mob[GREEN].rect, NULL);
}

struct s_hud_mob *initia_hud_mob(struct s_hud_mob *hud_mob,
sfVector2f size, sfVector2f pos)
{
    hud_mob->rect = sfRectangleShape_create();
    hud_mob->pos = pos;
    sfRectangleShape_setSize(hud_mob->rect, size);
    sfRectangleShape_setPosition(hud_mob->rect, pos);
    return (hud_mob);
}