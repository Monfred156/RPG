/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void desequip_head_shield(global *gb)
{
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
}

void desequip_armor_weapon(global *gb)
{
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
}

void desequip_legs(global *gb)
{
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
