/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void draw_item(global *gb, int temp, sfVector2f *pos)
{
    for (int i = 0; i < 15; i++) {
        if (gb->inv.inv[i] != 0) {
            sfSprite_setPosition(gb->sprite[gb->inv.inv[i]].sprite, (*pos));
            sfRenderWindow_drawSprite(gb->disev.window,
                gb->sprite[gb->inv.inv[i]].sprite,
                NULL);
        }
        if (temp == 4 || temp == 9) {
            (*pos).x = 1100;
            (*pos).y += 47;
        } else
            (*pos).x += 47;
        temp++;
    }
}

void set_stuff1(global *gb)
{
    if (gb->inv.inv[15] != 0) {
        sfSprite_setPosition(gb->sprite[gb->inv.inv[15]].sprite,
            (sfVector2f) {615, 378});
        sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[gb->inv.inv[15]]
                .sprite,
            NULL);
    }
    if (gb->inv.inv[16] != 0) {
        sfSprite_setPosition(gb->sprite[gb->inv.inv[16]].sprite,
            (sfVector2f) {567, 474});
        sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[gb->inv.inv[16]]
                .sprite,
            NULL);
    }
}

void set_stuff2(global *gb)
{
    if (gb->inv.inv[17] != 0) {
        sfSprite_setPosition(gb->sprite[gb->inv.inv[17]].sprite,
            (sfVector2f) {615, 450});
        sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[gb->inv.inv[17]]
                .sprite,
            NULL);
    }
    if (gb->inv.inv[18] != 0) {
        sfSprite_setPosition(gb->sprite[gb->inv.inv[18]].sprite,
            (sfVector2f) {663, 474});
        sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[gb->inv.inv[18]]
                .sprite,
            NULL);
    }
}

void set_stuff3(global *gb)
{
    if (gb->inv.inv[19] != 0) {
        sfSprite_setPosition(gb->sprite[gb->inv.inv[19]].sprite,
            (sfVector2f) {615, 546});
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[gb->inv.inv[19]].sprite, NULL);

    }
}


