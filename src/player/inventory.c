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
    int temp = 0;
    sfVector2f pos= {1100 , 354};

    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[INVENTORY].sprite, NULL);
    for (int i = 0; i <= 30; i++) {
        if (gb->inv.inv[i] != 0)
        {
            sfSprite_setPosition(gb->sprite[gb->inv.inv[i]].sprite, pos);
            sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[gb->inv.inv[i]].sprite,
                NULL);
        }
        if (temp == 5) {
            pos.x = 1100;
            pos.y += 47;
        } else
            pos.x += 47;
        temp++;
    }
}

void open_inventory(global *gb)
{
    static float sec_open = 0;

    sec_open += gb->clock.seconds - gb->clock.save_sec;
    if (sec_open >= 0.15) {
        if (sfKeyboard_isKeyPressed(sfKeyTab) || sfKeyboard_isKeyPressed(
            sfKeyI)) {
            if (gb->inv.open == 0)
                gb->inv.open = 1;
            else if (gb->inv.open == 1)
                gb->inv.open = 0;
        }
        sec_open = 0;
    }
}