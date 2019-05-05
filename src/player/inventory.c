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
    for (int i = 0; i < 15; i++) {
        if (gb->inv.inv[i] != 0) {
            sfSprite_setPosition(gb->sprite[gb->inv.inv[i]].sprite, pos);
            sfRenderWindow_drawSprite(gb->disev.window,
                gb->sprite[gb->inv.inv[i]].sprite,
                NULL);
        }
        if (temp == 4 || temp == 9) {
            pos.x = 1100;
            pos.y += 47;
        } else
            pos.x += 47;
        temp++;
    }
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
    if (gb->inv.inv[19] != 0) {
        sfSprite_setPosition(gb->sprite[gb->inv.inv[19]].sprite,
            (sfVector2f) {615, 546});
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[gb->inv.inv[19]].sprite, NULL);

    }
}

void event_inventory(global *gb)
{
    int place = 0;

    if (gb->inv.open == 1) {
        for (int i = BUTTON_INV1; i <= BUTTON_INV15; i++) {
            if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
                gb->button[i].rect) == 0) {
                if ((gb->inv.inv[place] == HEAD || gb->inv.inv[place] == HEAD2)
                && gb->inv.inv[15] == 0) {
                    gb->inv.inv[15] = gb->inv.inv[place];
                    gb->inv.inv[place] = 0;
                }
                if (gb->inv.inv[place] == SHIELD && gb->inv.inv[16] == 0) {
                    gb->inv.inv[16] = gb->inv.inv[place];
                    gb->inv.inv[place] = 0;
                }
                if (gb->inv.inv[place] >= AXE && gb->inv.inv[place] <= LANCE
                && gb->inv.inv[18] == 0) {
                    gb->inv.inv[18] = gb->inv.inv[place];
                    gb->inv.inv[place] = 0;
                }
                if ((gb->inv.inv[place] == ARMOR || gb->inv.inv[place] ==
                    ARMOR2) && gb->inv.inv[17] == 0) {
                    gb->inv.inv[17] = gb->inv.inv[place];
                    gb->inv.inv[place] = 0;
                }
                if ((gb->inv.inv[place] == LEGS || gb->inv.inv[place] == LEGS2)
                    && gb->inv.inv[19] == 0) {
                    gb->inv.inv[19] = gb->inv.inv[place];
                    gb->inv.inv[place] = 0;
                }
            }
            place += 1;
        }
        if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
            gb->button[BUTTON_INV_HEAD].rect) == 0) {
            for (int j = 0; j <= 14; j++) {
                if (gb->inv.inv[j] == 0) {
                    gb->inv.inv[j] = gb->inv.inv[15];
                    gb->inv.inv[15] = 0;
                    break;
                }
            }
        }
        if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
            gb->button[BUTTON_INV_SHIELD].rect) == 0) {
            for (int j = 0; j <= 14; j++) {
                if (gb->inv.inv[j] == 0) {
                    gb->inv.inv[j] = gb->inv.inv[16];
                    gb->inv.inv[16] = 0;
                    break;
                }
            }
        }
        if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
            gb->button[BUTTON_INV_ARMOR].rect) == 0) {
            for (int j = 0; j <= 14; j++) {
                if (gb->inv.inv[j] == 0) {
                    gb->inv.inv[j] = gb->inv.inv[17];
                    gb->inv.inv[17] = 0;
                    break;
                }
            }
        }
        if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
            gb->button[BUTTON_INV_WEAPON].rect) == 0) {
            for (int j = 0; j <= 14; j++) {
                if (gb->inv.inv[j] == 0) {
                    gb->inv.inv[j] = gb->inv.inv[18];
                    gb->inv.inv[18] = 0;
                    break;
                }
            }
        }
        if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
            gb->button[BUTTON_INV_LEGS].rect) == 0) {
            for (int j = 0; j <= 14; j++) {
                if (gb->inv.inv[j] == 0) {
                    gb->inv.inv[j] = gb->inv.inv[19];
                    gb->inv.inv[19] = 0;
                    break;
                }
            }
        }
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