/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void display_inventory(global *gb)
{
    if (gb->inv.open == 1)
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[INVENTORY].sprite, NULL);
}

void open_inventory(global *gb)
{
    static float sec_open = 0;

    sec_open += gb->clock.seconds - gb->clock.save_sec;
    if (sec_open >= 0.15) {
        if (sfKeyboard_isKeyPressed(sfKeyTab) ||sfKeyboard_isKeyPressed(sfKeyI))
        {
            if (gb->inv.open == 0)
                gb->inv.open = 1;
            else if (gb->inv.open == 1)
                gb->inv.open = 0;
        }
        sec_open = 0;
    }
}