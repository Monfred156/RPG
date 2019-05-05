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
    sfVector2f pos = {1100, 354};

    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[INVENTORY].sprite, NULL);
    draw_item(gb, temp, &pos);
    set_stuff1(gb);
    set_stuff2(gb);
    set_stuff3(gb);
}

void event_inventory(global *gb)
{
    int place = 0;

    if (gb->inv.open == 1) {
        equip_stuff(gb, &place);
        desequip_stuff(gb);
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